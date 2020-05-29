std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
    for(int i=0; i<signature.size(); i++)
    {
      result.push_back(signature[i]);
    }
    for(int i=3; i<n; i++)
    {
      result.push_back(result[i-1] + result[i-2] + result[i-3]);
    }
    if(n<3)
    {
      switch(n)
      {
        case 0:
          result.pop_back();
          result.pop_back();
          result.pop_back();
          break;
        case 1:
          result.pop_back();
          result.pop_back();
          break;
        case 2:
          result.pop_back();
          break;
      }
    }
    return result;
}