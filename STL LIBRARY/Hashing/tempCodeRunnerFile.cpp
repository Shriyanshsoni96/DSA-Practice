vector<char> arr = {'a','b','c','d','a'};
    int hash[26]={0};
    for(int i =0 ; i < arr.size() ; i++)
    {
        hash[arr[i]-'a']++;
    }
    
    int q;
    cin>>q;
    while(q--)
    {   char number;
        cin>>number;
        cout<<hash[number-'a']<<endl;
    }
