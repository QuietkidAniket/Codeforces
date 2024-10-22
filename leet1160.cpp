#include <bits/stdc++.h>
using namespace std;


class Solution {
public: 
    bool isoperator(char c){
        switch(c){
            case '|' : 
            case '!' : 
            case '&' :  return true;
            default : return false;
        }
    }
    inline bool tooperand(char c){
        return c == 't' ? true : false;
    }

    bool parseBoolExpr(string exp){
        // stack for the operands
        stack<char> stk;

        // postfix by reversing the string and hence evaluate the expression
        for(int i = exp.size()-1; i >=0 ; i--){

            char x = exp[i];
            if(isoperator(x)){
                char operand = stk.top();
                stk.pop();
                bool res;
                int count = 0;
                switch(x){
                    case '!' : 
                        while(true){
                            operand = stk.top();
                            stk.pop();
                            if(operand == ')')break;
                            if(operand == '(')break;
                            res = !tooperand(operand);
                        }
                        break;

                    case '&' : 
                        while(true){
                            operand = stk.top();
                            stk.pop();
                            if(operand == ')')break;
                            if(operand == '(')break;
                            if(operand == ',')continue;
                            if(!count)res = tooperand(operand);
                            else res &= tooperand(operand);
                            count++;
                        }
                        break;

                    case '|' : 
                        while(true){
                            operand = stk.top();
                            stk.pop();
                            if(operand == ')')break;
                            if(operand == '(')break;
                            if(operand == ',')continue;
                            if(!count)res = tooperand(operand);
                            else res |= tooperand(operand);
                            count++;
                        }
                        break;
                }
                    stk.push(res ? 't' : 'f');
                
            }else{
                if(x == ',')continue;
                stk.push(x);
            }

        }
        return tooperand(stk.top());
        
    }
};

void solve(){
    Solution obj;
    string exp;
    while( (cin >> exp) ){
    bool res = obj.parseBoolExpr(exp);
    cout << res << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("/Users/aniketkundu12072004/codeforces/input.in", "r+", stdin);
    freopen("/Users/aniketkundu12072004/codeforces/output.out", "w", stdout);
    solve();
    
    
    return 0;
}


