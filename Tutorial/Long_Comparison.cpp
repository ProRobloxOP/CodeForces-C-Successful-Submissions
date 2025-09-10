#include <cstdint>
#include <cstddef>
#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        bool compared = false;
        int32_t a, b, c, d;
        std::string s_a, s_c;
        std::string x, y;

        std::cin >> a >> b >> c >> d;
        s_a = std::to_string(a);
        s_c = std::to_string(c);

        if (s_a.length() + b > s_c.length() + d){
            std::cout << ">" << "\n";
            continue;
        } else if (s_a.length() + b < s_c.length() + d){
            std::cout << "<" << "\n";
            continue;
        }

       for (int32_t i = 0; i < s_a.length() + b; i++){
        if (i + 1 > s_a.length() && i + 1 > s_c.length()){ break;}
        if (i + 1 > s_a.length()){ s_a += "0"; }
        if (i + 1 > s_c.length()){ s_c += "0"; }

        if (s_a[i] - '0' > s_c[i] - '0'){
            std::cout << ">" << "\n";
            compared = true;
            break;
        }
        if (s_a[i] - '0' < s_c[i] - '0'){
            std::cout << "<" << "\n";
            compared = true;
            break;
        }
       }
       if (!compared){ std::cout << "=" << "\n"; }
    }

    return 0;
}
