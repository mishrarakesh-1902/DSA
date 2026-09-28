class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {

        int count = player1[0];
        for(int i=1; i<player1.size(); i++){
            if((i-1>=0 && player1[i-1] == 10) || (i-2>=0 && player1[i-2] == 10)){
                count = count + player1[i]*2;
            }
            else{
                count = count + player1[i];
            }
        }
        int newCount = player2[0];
        for(int j=1; j<player2.size(); j++){
            if((j-1>=0 && player2[j-1] == 10) || (j-2>=0 && player2[j-2] == 10)){
                newCount = newCount + player2[j]*2;
            }
            else{
                newCount = newCount + player2[j];
            }
        }

        
        if(count>newCount){
            return 1;
        }
        else if(count<newCount){
            return 2;
        }
        else {
            return 0;
        }

       
    }
};