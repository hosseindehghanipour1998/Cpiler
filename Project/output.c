{
int x = 3;
int y;
char c = 't';
ifLabelNo1Start:
{
ifLabelNo1Condition:
{
int t1 = x == 5;
if (t1==0) goto afterIfNo1;
goto bodyIfNo1;
}
bodyIfNo1:
int a = 11;
}
afterIfNo1:
forNo1Start:
{
forNo1Condition:
{
int t2 = x > 0;
if(t2==0) goto afterForNo1;
goto forNo1Body;
}
forNo1Step:
{
int t3 = x - 1;
goto forNo1Condition;
}
forNo1Body:
int b = x;
goto forNo1Step;
}
afterForNo1:
whileLabelNo1Start:
{
whileLabelNo1Condition:
{
int t4 = x < 5;
if (t4==0) goto afterWhileNo1;
goto bodyWhileNo1;
}
bodyWhileNo1:
int t5 = x + 5;
goto whileLabelNo1Condition;
}
afterWhileNo1:
;
}
{
int x = 3;
int y;
char c = 't';
ifLabelNo1Start:
{
ifLabelNo1Condition:
{
int t1 = x == 5;
if (t1==0) goto afterIfNo1;
goto bodyIfNo1;
}
bodyIfNo1:
int a = 11;
}
afterIfNo1:
forNo1Start:
{
forNo1Condition:
{
int t2 = x > 0;
if(t2==0) goto afterForNo1;
goto forNo1Body;
}
forNo1Step:
{
int t3 = x - 1;
goto forNo1Condition;
}
forNo1Body:
int b = x;
goto forNo1Step;
}
afterForNo1:
whileLabelNo1Start:
{
whileLabelNo1Condition:
{
int t4 = x < 5;
if (t4==0) goto afterWhileNo1;
goto bodyWhileNo1;
}
bodyWhileNo1:
int t5 = x + 5;
goto whileLabelNo1Condition;
}
afterWhileNo1:
;
}
{
int x = 3;
int y;
char c = 't';
ifLabelNo1Start:
{
ifLabelNo1Condition:
{
int t1 = x == 5;
if (t1==0) goto afterIfNo1;
goto bodyIfNo1;
}
bodyIfNo1:
int a = 11;
}
afterIfNo1:
forNo1Start:
{
forNo1Condition:
{
int t2 = x > 0;
if(t2==0) goto afterForNo1;
goto forNo1Body;
}
forNo1Step:
{
int t3 = x - 1;
goto forNo1Condition;
}
forNo1Body:
int b = x;
goto forNo1Step;
}
afterForNo1:
whileLabelNo1Start:
{
whileLabelNo1Condition:
{
int t4 = x < 5;
if (t4==0) goto afterWhileNo1;
goto bodyWhileNo1;
}
bodyWhileNo1:
int t5 = x + 5;
goto whileLabelNo1Condition;
}
afterWhileNo1:
;
}
{
int ttt = 3333;
;
}
