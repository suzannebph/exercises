#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

string myFunction (string arg){
    // write the body of your function here
    istringstream ss(arg);
    string token;
    vector<string> prices;
   	while(std::getline(ss, token, ',')) {
    	prices.push_back(token);
	};
    
    int profit = 0;
    for (size_t buyidx = 0; buyidx < prices.size(); buyidx++)
    {
        for (size_t sellidx = buyidx+1; sellidx < prices.size(); sellidx++)
        {
            int currProfit = atoi(prices[sellidx].c_str()) - atoi(prices[buyidx].c_str());
            if (currProfit > profit) profit = currProfit;
        }
    }
   
	stringstream ret;
	ret << "running with " << arg << ". Result is " << profit << endl;
	return ret.str();
}

int main (){
    // run your function through some test cases here
    // remember: debugging is half the battle!
    cout << myFunction ("10,7,5,8,11,9");
    return 0;
}
