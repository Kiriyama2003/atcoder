#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>
#include <cassert>
#include <cmath>
using namespace std;
constexpr int MAP_SIZE = 10000;
#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}

struct Request {
    int row,col,area;
    Request(int row, int col, int area)
        : row(row), col(col), area(area) {}
};

struct Advertisement {
    int row0, col0, row1, col1;

    Advertisement(int row0, int col0, int row1, int col1)
        : row0(row0), col0(col0), row1(row1), col1(col1) {
        assert(row0 < row1);
        assert(col0 < col1);
        assert(row1 < MAP_SIZE);
        assert(col1 < MAP_SIZE);
    }

    static Advertisement from(int row, int col, int height, int width) {
        return Advertisement(row, col, row + height, col + width);
    }

    bool intersects(const Advertisement &other) const {
        return (max(row0, other.row0) < min(row1, other.row1)) && (max(col0, other.col0) < min(col1, other.col1)) ;
    }

    bool contains(int row, int col) const {
        return (row0 <= row) && (row <= row1) && (col0 <= col) && (col <= col1);
    }

    int width() const { return row1 - row0;}

    int height() const { return col1 - col0;}

    int area() const { return width() * height();}

    friend ostream &operator<<(std::ostream &os, const Advertisement &ad) {
        os << ad.row0 << " " << ad.col0 << " " << ad.row1 << " " << ad.col1;
        return os;
    }
};

struct Input {
    int count;
    vector<Request> requests;
    chrono::steady_clock::time_point since;

    Input(int count, const vector<Request> &requests)
        : count(count), requests(requests), since(chrono::steady_clock::now()) {}
};

double calc_score_each(const Request &req, const Advertisement &ad) {
    if (ad.contains(req.row, req.col)) {
        int area = ad.area();
        double x = 1.0 - static_cast<double>(std::min(req.area, area)) / std::max(req.area, area);
        return 1.0 - x * x;
    } else {
        return 0.0;
    }
}

int calc_score(const Input &input, const std::vector<Advertisement> &ads) {
    double score = 0.0;
    for (size_t i = 0; i < input.count; ++i) {
        score += calc_score_each(input.requests[i], ads[i]);
    }
    return static_cast<int>(1e9 * score / input.count);
}

vector<Advertisement> random_expand(const Input &input) {
    mt19937_64 rng(42);
    vector<Advertisement> results;
    results.reserve(input.count);

    for (const auto &req : input.requests) {
        results.emplace_back(req.row, req.col, req.row + 1, req.col + 1);
    }

    size_t iter = 0;
    auto start_time = input.since;
    const double TIME_LIMIT = 4.98;

    while (std::chrono::duration<double>(std::chrono::steady_clock::now() - start_time).count() < TIME_LIMIT) {
        ++iter;

        size_t index = rng() % input.count;
        const auto &last = results[index];

        int r0 = last.row0, c0 = last.col0, r1 = last.row1, c1 = last.col1;
        switch (rng() % 4) {
            case 0: r0 = (r0 > 0) ? r0 - 1 : r0; break;
            case 1: c0 = (c0 > 0) ? c0 - 1 : c0; break;
            case 2: r1 = (r1 + 1 < MAP_SIZE) ? r1 + 1 : r1; break;
            case 3: c1 = (c1 + 1 < MAP_SIZE) ? c1 + 1 : c1; break;
        }

        if (r0 >= MAP_SIZE || c0 >= MAP_SIZE || r1 >= MAP_SIZE || c1 >= MAP_SIZE) {
            continue;
        }

        Advertisement new_ad(r0, c0, r1, c1);

        bool valid = true;
        for (size_t i = 0; i < results.size(); ++i) {
            if (i != index && results[i].intersects(new_ad)) {
                valid = false;
                break;
            }
        }

        if (valid && new_ad.area() <= input.requests[index].area) {
            results[index] = new_ad;
        }
    }

    cerr<<"\niter: "<<iter<<"\n";
    cerr<<"score: "<<calc_score(input, results)<<"\n";
    return results;
}

int main() {
    int n;  cin>>n;
    vector<Request> requests;
    requests.reserve(n);    //事前にメモリを確保ししている

    rep(i,n){
        int row, col, area; cin>>row>>col>>area;
        requests.emplace_back(row, col, area);
    }

    //Input型変数, 引数がn, 
    Input input(n, requests);
    auto results = random_expand(input);

    for(const auto &ad : results) cout<<ad<<"\n";
    return 0;
}