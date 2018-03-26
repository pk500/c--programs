
/*
Key Stroke Program (SMARTPRIX QUESTION)
Quen. Write a program to simulate a keyboard with given keys and their operation. You need to print the final text to STDOUT.
Type of Keys:
Each key affects the movement of the cursor on editor. The cursor position is identified by row and column.
alpha numeric space => this key inserts their respective symbol at cursors position and shift cursor.
@ => [CAPS Lock] toggles caps lock, i.e., if CapsLock is 'ON' after this key press it will be 'OFF' and vice versa. Initially CAPS Lock in 'OFF'.
# => [ENTER/New Line] inserts a new line character at cursor position and shift cursor position.
< => [LEFT arrow] moves cursor to one step left (if available). If cursor is at the starting of the row, it moves to end of the row above (if available).
> => [RIGHT arrow] moves cursor to one step right (if available). If cursor is at a row end it moves to starting of the row below (if available).
/ => [Backspace] deletes one character from the left of the cursor and move cursor one step left. It follows same direction rules as LEFT arrow key (<).
? => [Down arrow] If cursor is on last row nothing changes. The cursor moves to original column in next row if there are not enough characters in next row, cursor shifts to the end of the new row. Note: If key is pressed continuosly original column will not change with every key press.
^ => [UP arrow] If cursor is on first row nothing changes. The cursor moves to the original column (current) of the previous row, if there are not enough characters in previous row cursor shifts to the end of the previous row. Note: If key is pressed continuosly original column will not change with every key press.
Example :

 Input = asdf#q#pqr^^23
Output :
asd23f
q
pqr

Input = asdf1# @qwe^23
Output :
asdf231
 QWE
Input = asdf1#@ qwe<<<//23
Output :
asdf123QWE



*/

#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    string inp;
    getline(cin,inp);
    vector<string> out;   //Array of  output string
    out.push_back("");
    bool caps=0;    //Caps lock flag initially in off mode
    int curi=0,curj=0;   //Cursor position variable ( curi = x-direction cursor, curj = y-direction cursor)
    for(int i=0;i<inp.length();i++)
    {
       /* If current input character is alphanumeric character or space character then store it at cursor
        position and shift cursor by one. ( Before storing, check for caps lock) */
       if((inp[i]>='a' && inp[i]<='z')||(inp[i]>='A' && inp[i]<='Z') || (inp[i]>='0' && inp[i]<='9')||inp[i]==' ')
       {
           char t;
           if(caps && (inp[i]>='a' && inp[i]<='z'))
           {
               t=inp[i]-'a'+'A';
           }
           else
           {
               t=inp[i];
           }

           if(curj==out[curi].length())
           {
               out[curi].push_back(t);
           }
          else
           {
              out[curi].insert(out[curi].begin()+curj,t);
           }
           curj++;
       }

       /* If current input character is '#', then insert a new line character at current cursor
           position and if there are some character right to the cursor in a row, then move them
           to new line. Update the cursor position.*/


       else if(inp[i]=='#')
       {
               curi++;
               out.insert(out.begin()+curi,out[curi-1].substr(curj));
               out[curi-1]=out[curi-1].substr(0,curj);
               curj=0;
       }
       // If current input character is '@', then invert the caps lock flag.
       else if(inp[i]=='@')
           caps=(caps+1)%2;
       /* If current character is '<', then shift the current cursor to one step left (if available). If cursor is at the              starting of the row, it moves to end of the row above (if available)*/
       else if(inp[i]=='<')
       {
           if(curi==0 && curj==0) continue;
           if(curj>0) { curj--; continue;}
           curi--;
           curj=out[curi].length();
       }
      /*  If current character is '>', then shift the current cursor  to one step right (if available). If cursor is at a              row end it moves to starting of the row below (if available). */
        else if(inp[i]=='>')
        {
            if(curi==out.size()-1 && curj==out[curi].length()) continue;
            if(curj<out[curi].length()) curj++;
            else if(curi<out.size()-1) curi++,curj=0;
        }
      /* If current character is '/', then deletes one character from the left of the cursor and move cursor one               step left. It follows same direction rules as LEFT arrow key (<). */
        else if(inp[i]=='/')
        {
            if(curi==0 && curj==0) continue;
            if(curj>0) { out[curi].erase(out[curi].begin()+curj-1),curj--; continue;}
            string t=out[curi];
            out.erase(out.begin()+curi);
            curi--;
            curj=out[curi].length();
            out[curi]+=t;
        }
        else if(inp[i]=='^')
        {
            if(curi==0){ while(inp[i]=='^') i++; i--; continue;}
            while(inp[i]=='^' && curi>0) curi--,i++;
            while(inp[i]=='^') i++;
            if(curj>out[curi].length()) curj=out[curi].length();
            if(out[curi].length()==0) curj=0;
            i--;
        }
        else if(inp[i]=='?')
        {
            if(curi==out.size()-1) { while(inp[i]=='?') i++; i--; continue;}
            while(inp[i]=='?' && curi<out.size()-1) curi++,i++;
            while(inp[i]=='?') i++;
            if(curj>out[curi].length()) curj=out[curi].length();
            if(out[curi].length()==0) curj=0;
            i--;
        }
    }
    for(int i=0;i<out.size();i++) cout<<out[i]<<endl;
    return 0;
}
