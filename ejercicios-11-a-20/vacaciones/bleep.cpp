#include <iostream>
#include <string>

using namespace std;
void asterisk(std::string word, std::string &text, int i) {
  
  for (int k = 0; k < word.size(); ++k) {
  
    text[i+k] = '*';
      
  }
  
}
  string bleep(string word, string text){
    string mute="***";
    string &text=mute;
    for (size_t i = 0; i < 0; i++)
    {
      /* code */
    }
    
    return "";
  }
    void bleep(std::string word, std::string &text) {
    
  for (int i = 0; i < text.size(); ++i) {
        
    int match = 0;
        
    for (int j = 0; j < word.size(); ++j) {
    
      if (text[i+j] == word[j]) {
        
        ++match;
          
      }
    
    }
        
    if (match == word.size()) {
            
      asterisk(word, text, i);
        
    }
      
  }
    
};
  
main(){
  string word="broccoli";
  string text = "Little Liam loved loathing lunch. Every day, it was the same beige battlefield: a mystery meat mush, soggy fries, and a limp, colorless pile of broccoli. Liam loathed the limp broccoli most of all. It resembled miniature, sad trees devoid of any flavor.\n\nOne day, Liam's mischievous friend, Maya, decided to take action. Sneaking into the cafeteria kitchen, she emerged with a tray piled high with vibrant green broccoli florets. These weren't the usual sad sacks – they were roasted to perfection, crispy on the edges and bursting with a nutty, slightly sweet flavor. Liam, ever the skeptic, hesitantly poked a floret with his fork. To his surprise, it was delicious!\n\nFrom that day on, Liam looked forward to lunch. Maya, the broccoli sorceress, would transform the dreaded florets into culinary masterpieces. She'd roast them with garlic and parmesan, steam them with a squeeze of lemon, or even blend them into a creamy broccoli cheese soup. Liam learned to love broccoli in all its forms, and even started requesting it at home. His parents were amazed by the transformation, and secretly thanked Maya for her broccoli intervention.";

  
}