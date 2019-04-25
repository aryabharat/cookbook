using namespace std;

int main()
{
    vector<int> v;
    v.push_back(20);
    v.push_back(202);
    v.push_back(620);
    int max = *max_element(v.begin(), v.end());
cout<<"Max value: "<<max<<endl;
  return 0;
}
