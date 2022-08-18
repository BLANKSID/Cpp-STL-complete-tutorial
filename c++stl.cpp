#include <bits/stdc++.h>

using namespace std;

//                                                                                C++ STL 1. ARRAYS
// NOTE - If you get segmentation fault error then that means you have exceeded 10^7 memory of an array.

int main(){
    array<int,5>arr;
    arr.fill(5);    // fills every element of array with the number or string given.
    // arr.at(index);        //this gives us the item on that index of the array.

    //Usually we use this for output of an array
    for (int  i = 0; i < 5; i++)
    {
        cout<<arr.at(i)<<" ";
    }


    //But!! We can also use much better way.

    for(auto it= arr.begin(); it!=arr.end(); it++){
        cout<<*it<<" ";
    }

    // size
    cout<<endl<<arr.size()<<endl;

    //front
    cout<<arr.front()<<endl;

    //back
    cout<<arr.back()<<endl;
    

    //                                                                            C++ STL VECTORS


    // Vectors help to dynamically increase the size of an array from nothin to everything.

    vector<int>ar;
    cout<<ar.size()<<endl;
    ar.push_back(0);          // puts 0 in the array
    ar.push_back(5);          // puts 2 in th array, so it is dynamically increasing its size.
    cout<<ar.size()<<endl;
    


    ar.pop_back();            // pops the last element out of the vector.
    cout<<ar.size()<<endl;    // therefore it will print 1 here because 5 is popped out.
    


    ar.clear();               // it clears whole vector completely.
    cout<<ar.size()<<endl;    // thus giving 0 as output of size of vector.



    vector<int>vec1(5,2);     // we can create a vector with some initial size too with this method.
    cout<<vec1.size()<<endl;  // it will show size 5 and all spaces will contain 2 as said.



    vector<int>vec2(vec1);    // we can copy an entire vector with this method.
    //    OR
    vector<int>vec3(vec1.begin(), vec1.end()); 
    // Now if we print both will show the same thing.
    for(auto it = vec2.begin(); it!=vec2.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it = vec3.begin(); it!=vec3.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;



    vector<int>sid;
    sid.push_back(9);
    sid.push_back(6);
    sid.push_back(1);
    sid.push_back(3);
    sid.push_back(5);
    sid.push_back(8);      // Now the vector sid will be {9,6,1,3,5,8}
    // But if we wants to remove all the numbers after 1 then,
    vector<int>sid1(sid.begin(), sid.begin() + 3); // the element after will be excluded.
    //Printing this will give us {9,6,1}
    for(auto it = sid1.begin(); it!=sid1.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;



    sid1.emplace_back(5);    // works exactly similar to push_back but is slightly faster than push_back.
    sid.swap(sid1);          // swaps both the vectors.


    //                                                                    DEFINING 2D VECTORS

    vector<vector<int>>vecc; // creates one vector containing several vectors as its elements.

    // For example:-
    vector<int>vecc1;
    vecc1.push_back(5);
    vecc1.push_back(4);
    vecc1.push_back(8);
    
    vector<int>vecc2;
    vecc2.push_back(5);
    vecc2.push_back(4);
    vecc2.push_back(8);
       
    vector<int>vecc3;
    vecc3.push_back(5);
    vecc3.push_back(4);
    vecc3.push_back(8);
    vecc3.push_back(7);

    // Now we can push these vectors into one vector of vectors.
    vecc.push_back(vecc1);
    vecc.push_back(vecc2);
    vecc.push_back(vecc3);

    // Now to print this, we can use.
    for(auto vectr : vecc){
        for(auto it : vectr){
            cout<<it<<" ";
        }
        cout<<endl;
    }



    // To define a 2D vector of (10,20)
    vector<vector<int>>triv(10, vector<int>(20,0)); // This will show vector having 20 vectors each
    //having 0 as elements. Although for different values we HAVE to run for loop.



    // ARRAY OF VECTORS
    vector<int>arrr[4];   // This will create an array having vector in each of its elements.
// NOTE - HERE ARRAY IS NOT DYNAMIC JUST ITS ELEMENTS ARE BECAUSE THEY ARE VECTORS NOT THE NO. OF VECTORS.



    //                                                           DEFINE A 3D VECTORS OF (10,20,30)

    vector<vector<vector<int>>>veccc(10, vector<vector<int>>ve(20, vector<int>veccccc(30,0)));



    //                                                                              DEQUEUE
    dequeue<int>de;
    de.push_front(3);
    de.push_back(8);
    // It is exactly like vector and have same functions as vector.
// The only difference is we can push at front and at back in dequeue while we can just pushback in vector.



    //                          MOST POWERFUL DATA STRUCTURE

    //                                                                              LIST
    // THIS IS THE MOST POWERFUL FORM OF VECTOR.
    list<int>li;
    li.push_front(5);
    li.push_front(1);
    li.push_back(8);
    li.remove(1);
    // We can do everything a vector or a dequeue can do and also we can remove any element from list.


    //                                                                           SET MAP - SET

    // To convert any group of numbers int 'unique' ascending order just like a set.
    // eg: arr[5]={2,5,1,2,7,5} will become {1,2,5,7}
    set<int>st;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        st.insert(x);  // Insert the number into the set to make it in ascending and unique.
    }

    // To erase any number which is sent to set, we use
    st.erase(st.begin());  // deletes first element.
    st.erase(st.begin(), st.begin()+2);  // deletes till number 2 and will leave the next number.
    st.erase(st.begin(), st.end();
    st.erase(5);   // deletes number 5 from the set.

// NOTE : EVERYTHING LEARNED IN VECTOR IS IMPLICABLE IN SETS TOO. LIKE,
    set.emplace(5);
    cout<< set.size() <<endl;



    // Find.
    auto it = st.find(5);     // puts the iterator on 7.
    auto it = st.find(9);     // if the number is not present in the set, the iterator goes to end no.

    

    //                                                                          UNORDERED SETS

// NOTE : IF YOU GET ANY ERROR NAMED AS "tle" THEN SWITCH TO NORMAL SETS FROM UNORDERED SETS.
    // This set never guarantees you any order, it just randomly puts numbers 
    unordered_set<int>st;
    st.insert(3);
    st.insert(2);
    st.insert(4);  // This can show 3 or 2 or 4, any number at the front.



    //                                                                            MULTISETS
    multiset<int>ms;
    ms.insert(3);
    ms.insert(3);
    ms.insert(4);
    ms.insert(2);   // the set will look like {2,3,3,4}
    // Therefore, multiset is basically an un-unique set.

    //Count.
    ms.count(3);  // finds how many time the number occurs.
    
    ms.erase(3); // removes all 3 from set;
    ms.emphase(5); // inserts 5 to the set;
    auto it = ms.find(3); // puts iterators on first element of 3;
    ms.clear();  //deletes the entire sets;
    // All the functions are same as vectors and sets.



    //                                                                             KEY VALUE
    // This stores unique keys in ascending order of their keys.
    map<string,int>mpp;
    mpp["sid"] = 85;
    mpp["triv"] = 55;
    mpp["cc"] = 24;
    mpp["mom"] = 100; 
    // Therefore, this will be {"cc", "mom", "sid", "triv"}
// NOTE : IF 2 OR MORE KEYS HAVE SAME NAME THEN THE LAST KEY WILL OVERRITE THE ONES BEFORE.

    mpp.emplace("nr", 100);  // another way to insert key value map.
    mpp.erase("raj"); // removes raj from the map.
    // etc. all the rest functions are same as vectors and sets.

    // To check if a map is empty or not.
    if(mpp.empty()){
        cout<<"Yes it is empty"<<endl;
    }

    //Count.
    mpp.count("raj"); // always returns 1 in any map because the keys are unique.

    // Printing a map.
    for(auto it : mpp){
        cout<< it.first << " " << it.second << endl;    // We use pair syntax in this.
    }
    //     OR 
    for(auto it = mpp.begin(); it != mpp.end(); it++){
        cout<< it->first << " " << it->second << endl;
    }

    // Unordered Maps.
    unordered_maps<int, int>mpp;
    // Unordered map cant use pair keys in them. 


    //                                                                              PAIR CLASS
    pair<int,int>pr = {1,2};
    cout<< pr.first << " " << pr.second <<endl;
    pair<pair<int>,int>pr = {{1,2},3};
    cout<< pr.first.first << pr.first.second << pr.second << endl;
    pair<pair<int,int>, pair<int,int>>pr = {{1,2}, {3,4}};

// NOTE : WE CAN MAKE PAIR OF ANYTHING LIKE VECTOR, SET, MAP, ETC.
    vector<pair<int,int>> vec;
    set<pair<int,int>> st;
    map<pair<int,int>, int>mpp;
    // Therefore pair can be treated as defined data type. like int, string, etc with more power.



    //                                                                              MULTIMAP
    multimap<string,int>mpp;
    mpp.emplace("sid", 8);
    mpp.emplace("sid", 4);



    //                                                                          STACKS AND QUEUES

    // STACK
    stack<int>st;  // creates a stack. And works on FILO.

    st.push(2);
    st.push(5);
    st.push(1);
    st.push(7);    // Stack will be {2,5,1,7}

    cout<< st.top() <<endl;   // prints the top of the stack which will be 7 because of FILO.
    st.pop();   // pops the top of the stack.
    cout<< st.top() <<endl;   // prints 1 because 7 was popped.

    // How to pop complete stack.
    while (!st.empty())    // st.empty() is bool function which tells us if stack is empty or not.
    {
        st.pop();         // it will pop the stack untill the stack is not empty.
    }
    
    // size of stack.
    cout<< st.size() <<endl;  // returns the size of the stack.

// NOTE: ALWAYS CHECK BEFORE USING ST.TOP() IF THE STACK IS EMPTY OR NOT.
    stack<int>q;  // here stack q is empty as nothing is in it yet.
    cout<< q.top() <<endl;  // this will throw an error.
    // Therefore, we use
    if (!q.empty())
    {
        cout<< q.top() <<endl;  // this will only run if the stack is not empty.
    }



    // QUEUE - WORKS ON FIFO
    queue<int> qu;

    qu.push(4);
    qu.push(5);
    qu.push(1);
    qu.push(7);  // the queue will be {4,5,1,7}

    cout<< qu.front() << endl;  // as it works on fifo, so 4 will be printed.
    qu.pop();    // it will pop 4.
    // Else everything is similar to stack.
// NOTE: THERE IS NO ITERATOR IN STACK AND QUEUE.




    //                                                                    PRIORITY_QUEUE

    // A NUMBER WITH MORE PRIORITY IS BASED ON HOW BIG THE NUMBER IS.
    priority_queue<int>pr;   // Prints on basis of priority of number i.e- Descending order.

    pr.push(5);
    pr.push(1);
    pr.push(7);   // {7,5,1}

    cout<< pr.top() << endl;   // prints 7 because of priority of 7 is biggest.
    pr.pop();   // pops 7.
    cout<< pr.top() <<endl;    // prints 5. basically works on descending order format.

    // pair in priority_queue.
    priority_queue<pair<int,int>> prr;
    pr.push(5,8);
    pr.push(1,9);
    pr.push(5,9);
    // this will take priority of first number and if first number are same then second number.
    // i.e - {{5,9},{5,8},{1,9}}


    // HOW TO MAKE A MINIMUM PRIORITY QUEUE. i.e - ASCENDING ORDER.

    priority_queue<int>ppr;
    // We can add '-' negative sign in the numbers
    ppr.push(-5);
    ppr.push(-1);
    ppr.push(-7); // Therefore, this will have -1 at the top.
    // Now to get it in ascending order, we can
    cout<< -1* ppr.top() <<endl;   // it will print 1 as the top.

    //                 OR

    // We can use an inbuilt minimum priority_queue, which is
    priority_queue<int, vector<int>, greater<int>> pr;
    pr.push(5);
    pr.push(1);
    pr.push(7);
    // This will automatically print from minimum priority queue.



    //                                                                                BITSET
    bitset<5>bt;
    // bitset is used mostly in segment tree problem. And bitset inputs only 1s and 0s.
    cin>>bt;
    // if all bitset values are 1s then it is a set, if any value is 0 the non set.
    cout<<bt.all()<<endl;   // returns true if set false if any value is 0.

    cout<<bt.any();  // if any value is set i.e 1 then it prints true.

    cout<<bt.count();   // this counts the number of sets in a bitset.

    bt.flip();  // as the name suggests, it flips 1s to 0s and 0s to 1s.
    bt.flip(3);  //flips the index 3.

    cout<<bt.none();  // if there is no set then return true.

    bt.set();   // fills the whole bitset with set i.e it will be having all 1s.
    bt.set(3);  // sets the position 3 of bitset.
    bt.set(2,0);  // changes the index in position 2 to 0.

    bt.reset();  // turns all indexes to 0.
    //rest same as bt.set().

    cout<<bt.size();  // prints the size, 5 here.

    cout<<bt.test(1);  // checks if the index is set or not.
}

