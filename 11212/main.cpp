using namespace std;
#include "iostream"
#include "vector"

vector<vector<int>> mem;


void printMatrix(vector<vector<int>> m){
    for(int i = 0; i < m[0].size(); i++){
        for (int j = 0; j < m[i].size(); j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int editBook(vector<int> p, int c, int s, int last){
    cout << "c: " << c << endl;
    if (c > s){
        cout << "AAAAAAAAAAAA" << endl;
        return 0;

    }
    cout << "mi pc es: " << p[c] << endl;
    cout << "mi last es: " << last << endl;
    if (p[c] > last) return editBook(p, c+1, s, p[c]);
    while (p[c] <= last && c < s - 1 && p[c] < p[c+1]) {
        
        cout << "entre" << endl;
        cout << "con: " << p[c] << " y " << last << endl;
        c+=1;
    }
    cout << "c_: " << c  << " asdasd: " << mem[c][last] << endl;
    
    if (mem[c][last] != 0 || mem[c][last]){
        cout << "JJJJJJKJJKJJJJ" << endl;
        return mem[c][last];
    }else{
        mem[c][last] = editBook(p, c+1, s, last) + 1;
        printMatrix(mem);
        cout << endl;
        return mem[c][last];
    }
    
}

void flushMem(int s){
}

int main(){

    vector<vector<int>> inputs;
    
    int i = 0;
    int c = 0;
    while(cin >> i){
        if (i == 0) break;
        cout << "owo" << endl;
        vector<int> parag;
        while((--i+1)){
            int val;
            cin >> val;
            parag.push_back(val);
        }
        int max = 0;
        for(int j: parag){
            if (j > max) max = j;
        }
        for (int j=0; j<parag.size()+1; j++){
            vector<int> v(max+1,0);
            mem.push_back(v);
        }
        
        int result = editBook(parag, 0, parag.size()-1, 0);
        mem.clear();
        //flushMem(parag.size());
        cout << "Case " << c+1 << ": " << result << endl;
        
        c++;
    }

    return 0;
}


