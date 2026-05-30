#include <iostream>
using namespace std;

class Forecast{
    public:
        string date, day, weather;

        Forecast(string date, string day, string w) {
            this -> date = date;
            this -> day = day;
            this -> weather = w;
        }
        Forecast() {}
};

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Forecast forecasts[100];


    for (int i = 0; i < n; i++) {
        string y, d, w;
        cin >> y >> d >> w;
        forecasts[i] = Forecast(y, d, w);
    }

    int idx = -1;

    for (int i = 0; i < n; i++) {
        if (forecasts[i].weather == "Rain") {
            if (idx == -1) {
                idx = i;
            }else {
                if (forecasts[i].date < forecasts[idx].date) {
                    idx = i;
                }
            }
        }
    }

    cout << forecasts[idx].date << " " << forecasts[idx].day << " ";
    cout << forecasts[idx].weather;
    return 0;
}