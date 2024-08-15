#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // no. of test cases
    int n;
    
    
    scanf("%d", &n);

while(n--){
    
    //dimensions of the carpet
    int dim[2];
    scanf("%d %d", dim, dim + 1);


    // carpet characters
    char carpet[dim[0]][dim[1]];

    for(int i = 0; i < dim[0]; i++){
        scanf("%s", &carpet[i]);
    }   

    // helps to find whether all the 4 letters of the pattern we are searching are found
    int find = 0;
    // name pattern to be searched for in the carpet
    char* vika { "vika"};
    for(int i = 0; i<dim[1]; i++){
        //checks whether any letter of the given pattern occurs in the column
        bool check = false;
        for(int j = 0; j <dim[0]; j++){
            if(carpet[j][i] == vika[find]){
                check = true;
            }
        }
        if(check){
            find++;
            if(find == 4)break;
        }
    }
    if(find == 4)cout << "YES" << '\n';
    else cout << "NO" << '\n';
    }
    return 0;
}