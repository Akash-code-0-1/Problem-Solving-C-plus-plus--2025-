#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    unordered_map<string, string> url2code;
    unordered_map<string, string> code2url;
    int counter = 1;
    const string base = "http://tinyurl.com/";

    string intToCode(int n) {
        string chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string code;
        while (n > 0) {
            code = chars[n % 62] + code;
            n /= 62;
        }
        while (code.length() < 6) code = "0" + code;
        return code;
    }

public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        if (url2code.count(longUrl)) {
            return base + url2code[longUrl];
        }
        string code = intToCode(counter++);
        url2code[longUrl] = code;
        code2url[code] = longUrl;
        return base + code;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string code = shortUrl.substr(base.length());
        if (code2url.count(code)) {
            return code2url[code];
        }
        return "";
    }
};


// class Solution {
// public:

//     // Encodes a URL to a shortened URL.
//     string encode(string longUrl) {
//         return longUrl;
        
//     }

//     // Decodes a shortened URL to its original URL.
//     string decode(string shortUrl) {
//         return shortUrl;
//     }
// };

// // Your Solution object will be instantiated and called as such:
// // Solution solution;
// // solution.decode(solution.encode(url));


// Example usage
int main() {
    Solution solution;
    string url = "https://leetcode.com/problems/design-tinyurl";
    string shortUrl = solution.encode(url);
    cout << "Shortened URL: " << shortUrl << endl;
    cout << "Decoded URL: " << solution.decode(shortUrl) << endl;
    return 0;
}