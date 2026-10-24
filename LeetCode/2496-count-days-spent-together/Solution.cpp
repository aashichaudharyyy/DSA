class Solution {
public:
    int convertToDay(string Date){
        vector<int> daysInMonths = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int Month = stoi(Date.substr(0,2)); //08
        int Day = stoi(Date.substr(3,2)); //15
        int DayYear = 0;
        for(int i=0;i<Month-1;i++){
            DayYear+=daysInMonths[i];
        }
        DayYear += Day;
        return DayYear;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int aliceIn = convertToDay(arriveAlice);
        int aliceOut = convertToDay(leaveAlice);
        int bobIn = convertToDay(arriveBob);
        int bobOut = convertToDay(leaveBob);
        
        int start = max(aliceIn, bobIn);
        int end = min(aliceOut, bobOut);

        if(start > end) return 0;
        return end-start+1;
    }
};