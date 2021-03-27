void plusMinus(vector<int> arr) {
    
    
    double pos , neg, zeros;
    pos = neg = zeros = 0;
    int size = arr.size();
    for(int i = 0; i<size ; ++i)
    {
        if(arr[i]>0)
        pos++;
        else if(arr[i]<0)
        neg++;
        else zeros++;
    }
    cout<<setprecision(6)<<fixed<<pos / size << endl;
    cout<<neg / size << endl;
    cout<<zeros /size << endl;
    


}
