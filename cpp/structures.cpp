#include <iostream>
#include <vector>
using namespace std;

int main(){
    /* Arrays
     * Fixed size, indexed
     * O(1) Indexing
     * O(N) Search
     * O(N) Space */
    int arr[] = {1,2,3};
    int arr2[3] = {1,2,3};
    int arr3[3];
    arr3[0] = 1;
    arr3[1] = 2;
    arr3[2] = 3;
    cout << arr[0] << " " << arr2[0] << " " << arr3[0] << endl;

    int arr2D[2][3];
    cout << sizeof(arr2D)/sizeof(arr2D[0]) << ' ' << sizeof(arr2D[0])/sizeof(int) << endl;

    /* Vectors
     * Dynamic 
     * O(1) Indexing
     * O(N) Search
     * O(N) Insertion
     * O(N) Deletion
     * O(N) Space */
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vector<int> vec2{1,2,3};
    vector<int> vec3(3,1);
    vector<int> vec4(vec2.begin(), vec2.end());    
    cout << vec[0] << ' ' << vec2[0] << ' ' << vec3[0] << ' ' << vec4[0] << endl;

    vector<vector<int>> vec2D{{1,1},{2,2},{3,3}};
    cout << vec2D[0][0] << endl;

    /* Ordered map
     * Key, pair
     * O(NlogN) Indexing
     * O(NlogN) Search
     * O(NlogN) Insertion
     * O(NlogN) Deletion
     * O(NlogN) Space */
    map<int, int> dict; // Default constructor
    dict[0] = 0;
    dict[1] = 1;
    dict[2] = 2;
    map<int, int> dict2(dict.begin(), dict.end()); // Range constructor
    map<int, int> dict3(dict2);  // Copy constructor
    map<int, int> dict3{{0,0},{1,1},{2,2}};  // Initializer list

    /* Unordered map (Hash table)
     * 
     * No indexing
     * O(1)/O(N) Search
     * O(1)/O(N) Insertion
     * O(1)/O(N) Deletion
     * O(N) Space */
    unordered_map<int, int> hash; // Default constructor
    hash[0] = 0;
    hash[1] = 1;
    hash[2] = 2;
    unordered_map<int, int> hash2(hash.begin(), hash.end()); // Range constructor
    unordered_map<int, int> hash3(hash2);  // Copy constructor
    unordered_map<int, int> hash3{{0,0},{1,1},{2,2}};  // Initializer list

    return 0;
}
