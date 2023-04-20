using namespace std;
#include "iostream"
#include "vector"

vector<vector<int>> mem;


void printMatrix(vector<vector<int>> m){
    for(int i = 0; i < m.size(); i++){
        for (int j = 0; j < m[i].size(); j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int editBook(vector<int> p, int c, int s, int last){

    if (c == s) return 0;
    if (p[c] >= last) return editBook(p, c+1, s, p[c]);
    while (p[c] < last && c < s) c+=1;
    cout << "el c: " << c << "   -   last: " << last << endl;
    printMatrix(mem);
    if (mem[c][last]){
        return mem[c][last];
    }else{
        return editBook(p, c, s, last)+1;
    }
    
}

int main(){

    vector<vector<int>> inputs;
    

    int i = 0;
    while(cin >> i){
        if (i == 0) break;
        vector<int> parag;
        cout << "soy i:" << i << endl;
        while((--i+1)){
            int val;
            cin >> val;
            parag.push_back(val);
        }
        int max = 0;
        for(int j: parag){
            if (j > max) max = j;
        }
        for (int j=0; j<parag.size(); j++){
            cout << "asdasdasdas" << endl;
            vector<int> v(max,0);
            mem.push_back(v);
        }

        int result = editBook(parag, 0, parag.size()-1, 0);
        cout << "res: " << result << endl;

    }


    return 0;
}
