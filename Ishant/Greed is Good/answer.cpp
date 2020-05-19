#include <vector>

int score(const std::vector<int>& dice) {
    int one=0;
    int two=0;
    int three=0;
    int four=0;
    int five=0;
    int six=0;
    int points = 0;
    
    for(int i=0; i<dice.size(); i++)
    {
      if(dice[i] == 1)
      {
        one++;
        if(one==3)
        {
          points += 1000;
          one=0;
        }
      }
      else if(dice[i] == 2)
      {
        two++;
        if(two==3)
        {
          points+=200;
          two=0;
        }
      }
      else if(dice[i] == 3)
      {
        three++;
        if(three==3)
        {
          points+=300;
          three=0;
        }
      }
      else if(dice[i] == 4)
      {
        four++;
        if(four==3)
        {
          points += 400;
          four=0;
        }
      }
      else if(dice[i] == 5)
      {
        five++;
        if(five==3)
        {
          points+=500;
          five=0;
        }
      }
      else if(dice[i] == 6)
      {
        six++;
        if(six==3)
        {
          points+=600;
          six=0;
        }
      }
    }
    
    points += one*100;
    points += five*50;
    
    return points;
}