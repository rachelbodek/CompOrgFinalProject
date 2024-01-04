#include <stdio.h>  
#include <stdlib.h>

// char *hextobin(char *number){
//     int j =0;
//     int len = 0;
//     while(number[j] != '\0'){
//         len++;
//         j++;
//     }
//     char *binStr = (char*)malloc(len * 4 + 1);
//     int i = 0;
//     int pos = 0;
//     while ((unsigned char)number[i] != '\0'){
//         char firstDig = ((unsigned char)number[i] >> 4);
//         char secondDig = (unsigned char)number[i]& 0xF;
//         printf("%x\n", firstDig);
//         printf("%x\n", secondDig);
//         i++;
//         char cur;
//         for(int k =0; k<len; k++){
//             if (k == 0){
//                 cur = (unsigned char)firstDig;
//             }
//             else{
//                 cur = secondDig;
//             }
//             printf("cur is %x\n", cur);
//             if (cur == 0){
//                 binStr[pos] = '0';
//                 binStr[pos + 1] = '0';
//                 binStr[pos + 2] = '0';
//                 binStr[pos + 3] = '0';
//                 pos += 4;
//             }
//             else if (cur == 1){
//                 binStr[pos] = '0';
//                 binStr[pos + 1] = '0';
//                 binStr[pos + 2] = '0';
//                 binStr[pos + 3] = '1';
//                 pos += 4;
//             }
//             else if (cur == 2){
//                 binStr[pos] = '0';
//                 binStr[pos + 1] = '0';
//                 binStr[pos + 2] = '1';
//                 binStr[pos + 3] = '0';
//                 pos += 4;
//             }
//              else if (cur == 3){
//                 binStr[pos] = '0';
//                 binStr[pos + 1] = '0';
//                 binStr[pos + 2] = '1';
//                 binStr[pos + 3] = '1';
//                 pos += 4;
//             }
//              else if (cur == 4){
//                 binStr[pos] = '0';
//                 binStr[pos + 1] = '1';
//                 binStr[pos + 2] = '0';
//                 binStr[pos + 3] = '0';
//                 pos += 4;
//             }
//              else if (cur == 5){
//                 binStr[pos] = '0';
//                 binStr[pos + 1] = '1';
//                 binStr[pos + 2] = '0';
//                 binStr[pos + 3] = '1';
//                 pos += 4;
//             }
//              else if (cur == 6){
//                 binStr[pos] = '0';
//                 binStr[pos + 1] = '1';
//                 binStr[pos + 2] = '1';
//                 binStr[pos + 3] = '0';
//                 pos += 4;
//             }
//             else if (cur == 7){
//                 binStr[pos] = '0';
//                 binStr[pos + 1] = '1';
//                 binStr[pos + 2] = '1';
//                 binStr[pos + 3] = '1';
//                 pos += 4;
//             }
//             else if (cur == 8){
//                 binStr[pos] = '1';
//                 binStr[pos + 1] = '0';
//                 binStr[pos + 2] = '0';
//                 binStr[pos + 3] = '0';
//                 pos += 4;
//             }
//             else if (cur == 9){
//                 binStr[pos] = '1';
//                 binStr[pos + 1] = '0';
//                 binStr[pos + 2] = '0';
//                 binStr[pos + 3] = '1';
//                 pos += 4;
//             }
//             else if (cur == 'A'){
//                binStr[pos] = '1';
//                 binStr[pos + 1] = '0';
//                 binStr[pos + 2] = '1';
//                 binStr[pos + 3] = '0';
//                 pos += 4; 
//             }
//              else if (cur == 'B'){
//                 binStr[pos] = '1';
//                 binStr[pos + 1] = '0';
//                 binStr[pos + 2] = '1';
//                 binStr[pos + 3] = '1';
//                 pos += 4;
//             }
//              else if (cur == 'C'){
//                 binStr[pos] = '1';
//                 binStr[pos + 1] = '1';
//                 binStr[pos + 2] = '0';
//                 binStr[pos + 3] = '0';
//                 pos += 4;
//             }
//             else if (cur == 'D'){
//                 binStr[pos] = '1';
//                 binStr[pos + 1] = '1';
//                 binStr[pos + 2] = '0';
//                 binStr[pos + 3] = '1';
//                 pos += 4;
//             }
//             else if (cur == 'E'){
//                 binStr[pos] = '1';
//                 binStr[pos + 1] = '1';
//                 binStr[pos + 2] = '1';
//                 binStr[pos + 3] = '0';
//                 pos += 4;
//             }
//             else {
//                 binStr[pos] = '1';
//                 binStr[pos + 1] = '1';
//                 binStr[pos + 2] = '1';
//                 binStr[pos + 3] = '1';
//                 pos += 4;
//             }
//         }
//     }
//     binStr[pos] = '\0';
//     return binStr;

// }
//Decode: “א” → xD7 x90 → “\u05D0”
//Encode: “\u05D0” → xD7 x90 → “א”
// int my_utf8_decode(unsigned char *input, unsigned char *output){
//     int j =0;
//     int len = 0
//     while(input[j] != '\0'){
//         len++;
//         j++;
//     }
//     char *binStr = (char*)malloc(len* 4);
    
// }

char *hex_to_binary(char *number){
    int j =0;
    int len = 0;
    while(number[j] != '\0'){
        len++;
        j++;
    }
    char *binStr = (char*)malloc(len * 4 + 1);
    int i =0;
    int pos = 0;
    while(number[i] != '\0'){
    printf("Processing character: %x\n", (unsigned char)number[i]);

        switch((unsigned char)number[i]){
            case '0':
                binStr[pos] = '0';
                binStr[pos + 1] = '0';
                binStr[pos + 2] = '0';
                binStr[pos + 3] = '0';
                pos += 4;
                break;
            
            case '1':
                binStr[pos] = '0';
                binStr[pos + 1] = '0';
                binStr[pos + 2] = '0';
                binStr[pos + 3] = '1';
                pos += 4;
                break;
            
            case '2':
                binStr[pos] = '0';
                binStr[pos + 1] = '0';
                binStr[pos + 2] = '1';
                binStr[pos + 3] = '0';
                pos += 4;
                break;
            
             case '3':
                binStr[pos] = '0';
                binStr[pos + 1] = '0';
                binStr[pos + 2] = '1';
                binStr[pos + 3] = '1';
                pos += 4;
                break;
            
            case '4':
                binStr[pos] = '0';
                binStr[pos + 1] = '1';
                binStr[pos + 2] = '0';
                binStr[pos + 3] = '0';
                pos += 4;
                break;
            
            case '5':
                binStr[pos] = '0';
                binStr[pos + 1] = '1';
                binStr[pos + 2] = '0';
                binStr[pos + 3] = '1';
                pos += 4;
                break;
            
             case '6':
                binStr[pos] = '0';
                binStr[pos + 1] = '1';
                binStr[pos + 2] = '1';
                binStr[pos + 3] = '0';
                pos += 4;
                break;
            
            case '7':
                binStr[pos] = '0';
                binStr[pos + 1] = '1';
                binStr[pos + 2] = '1';
                binStr[pos + 3] = '1';
                pos += 4;
                break;
            
            case '8':
                binStr[pos] = '1';
                binStr[pos + 1] = '0';
                binStr[pos + 2] = '0';
                binStr[pos + 3] = '0';
                pos += 4;
                break;
            
            case '9':
                binStr[pos] = '1';
                binStr[pos + 1] = '0';
                binStr[pos + 2] = '0';
                binStr[pos + 3] = '1';
                pos += 4;
                break;
            
            case 'A':
                binStr[pos] = '1';
                binStr[pos + 1] = '0';
                binStr[pos + 2] = '1';
                binStr[pos + 3] = '0';
                pos += 4; 
                break;
            
             case 'B':
                binStr[pos] = '1';
                binStr[pos + 1] = '0';
                binStr[pos + 2] = '1';
                binStr[pos + 3] = '1';
                pos += 4;
                break;
            
            case 'C':
                binStr[pos] = '1';
                binStr[pos + 1] = '1';
                binStr[pos + 2] = '0';
                binStr[pos + 3] = '0';
                pos += 4;
                break;
            
            case 'D':
                binStr[pos] = '1';
                binStr[pos + 1] = '1';
                binStr[pos + 2] = '0';
                binStr[pos + 3] = '1';
                pos += 4;
                break;
            case 'E':
                binStr[pos] = '1';
                binStr[pos + 1] = '1';
                binStr[pos + 2] = '1';
                binStr[pos + 3] = '0';
                pos += 4;
                break;
            case 'f':
                binStr[pos] = '1';
                binStr[pos + 1] = '1';
                binStr[pos + 2] = '1';
                binStr[pos + 3] = '1';
                pos += 4;
                break;
            default:
                break;
        }
        i++;
    }
    binStr[pos] = '\0';
    return binStr;
}
int my_utf8_check(char *string){
    int i = 0;
    while ((unsigned char)string[i] != '\0'){
        if ((unsigned char)string[i] <= 0x7F){
        }
        // if 2 bytes and the second byte isnt in the range then return -1
        else if ((unsigned char)string[i] >= 0xc0 && (unsigned char)string[i] <= 0xdf){
            if (!((unsigned char)string[i+1] >= 0x80 && (unsigned char)string[i+1] <= 0xBF)){
                return 0;
            }
            i++;
        }
        //if 3 bytes and 2nd isnt in range or third return -1
        else if((unsigned char)string[i] >= 0xE0 && (unsigned char)string[i] <= 0xEF){
            if (!((unsigned char)string[i+1] >= 0x80 && (unsigned char)string[i+1] <= 0xBF)){
                return 0;
            }
            else if (!((unsigned char)string[i+2] >= 0x80 && (unsigned char)string[i+2] <= 0xBF)){
                return 0;
            }
            i+=2;
        }
        //if 4 bytes and 2nd isnt in range or third or fourth return -1
        else if((unsigned char)string[i] >= 0xF0 && (unsigned char)string[i] <= 0xF7){
            if (!((unsigned char)string[i+1] >= 0x80 && (unsigned char)string[i+1] <= 0xBF)){
                return 0;
            }
            else if (!((unsigned char)string[i+2] >= 0x80 && (unsigned char)string[i+2] <= 0xBF)){
                return 0;
            }
            else if (!((unsigned char)string[i+3] >= 0x80 && (unsigned char)string[i+3] <= 0xBF)){
                return 0;
            }
            i+=3;
        }
        else{
            return 0;
        }
        i++;
    }
    return 1;
}

int my_utf8_strlen(char *string){
    int a = my_utf8_check(string);
    int totalLen = 0;
    int i = 0;
    if (a == 0){
        return 0;
    }
    else{
        while ((unsigned char)string[i] != '\0'){
        if ((unsigned char)string[i] <= 0x7F){
            totalLen++;
        }
        // if 2 bytes and the second byte isnt in the range then return -1
        else if ((unsigned char)string[i] >= 0xC0 && (unsigned char)string[i] <= 0xDF){
            totalLen ++;
            i++;
        }
        //if 3 bytes and 2nd isnt in range or third return -1
        else if((unsigned char)string[i] >= 0xE0 && (unsigned char)string[i] <= 0xEF){
            totalLen++;
            i+=2;
        }
        //if 4 bytes and 2nd isnt in range or third or fourth return -1
        else if((unsigned char)string[i] >= 0xF0 && (unsigned char)string[i] <= 0xF7){
            totalLen++;
            i+=3;
        }
        i++;
    }
    return totalLen;
    }
}

char *my_utf8_charat(char *string, int index){
    int i = 0;
    int strlen = 0;
    while (strlen != index){
        if ((unsigned char)string[i] <= 0x7F){
            strlen++;
        }
        // if 2 bytes and the second byte isnt in the range then return -1
        else if ((unsigned char)string[i] >= 0xC0 && (unsigned char)string[i] <= 0xDF){
            strlen++;
            i++;
        }
        //if 3 bytes and 2nd isnt in range or third return -1
        else if((unsigned char)string[i] >= 0xE0 && (unsigned char)string[i] <= 0xEF){
            strlen++;
            i+=2;
        }
        //if 4 bytes and 2nd isnt in range or third or fourth return -1
        else if((unsigned char)string[i] >= 0xF0 && (unsigned char)string[i] <= 0xF7){
            strlen++;
            i+=3;
        }
        i++;
    }

    if ((unsigned char)string[i] <= 0x7F){
        char *resultStr = (char*)malloc(2);
        resultStr[0] = string[i];
        resultStr[1] = '\0';
        return resultStr;
    }
    // if 2 bytes and the second byte isnt in the range then return -1
    else if ((unsigned char)string[i] >= 0xC0 && (unsigned char)string[i] <= 0xDF){
        char *resultStr = (char*)malloc(3);
        resultStr[0] = string[i];
        resultStr[1] = string[i + 1];
        resultStr[2] = '\0';
        return resultStr;
    }
    //if 3 bytes and 2nd isnt in range or third return -1
    else if((unsigned char)string[i] >= 0xE0 && (unsigned char)string[i] <= 0xEF){
        char *resultStr = (char*)malloc(4);
        resultStr[0] = string[i];
        resultStr[1] = string[i + 1];
        resultStr[2] = string[i + 2];
        resultStr[3] = '\0';
        return resultStr;
    }
    //if 4 bytes and 2nd isnt in range or third or fourth return -1
    else if((unsigned char)string[i] >= 0xF0 && (unsigned char)string[i] <= 0xF7){
        char *resultStr = (char*)malloc(5);
        resultStr[0] = string[i];
        resultStr[1] = string[i + 1];
        resultStr[2] = string[i + 2];
        resultStr[3] = string[i + 3];           
        resultStr[4] = '\0';
        return resultStr;
    }
    return string;
}


int my_utf8_strcmp(char *string1, char *string2){
    int i = 0;
    while (string1[i] != '\0' && string2[i] != '\0'){
        if (string1[i] < string2[i]){
            //str1 is less than str2
            return -1;
        }
        else if (string1[i] > string2[i]){
            //str 1 is greater than str2
            return 1;
        }
        string1 ++;
        string2 ++;
    }
    if (string1[i] == '\0' && string2[i] == '\0'){
        return 0;
    }
    else if (string1[i] == '\0'){
        //str1 is shorter
        return -1;
    }
    else if (string2[i] == '\0'){
        return 1;
    }
    return -2;
}

char *my_utf8_strreverse(char *string){
    //find the len of the str
    int a = my_utf8_check(string);
    if (a == 0){
        return NULL;
    }
    int i = 0;
    int strlen = 0;
    while (string[i] != '\0'){
        if ((unsigned char)string[i] <= 0x7F){
            strlen++;
        }
        // if 2 bytes and the second byte isnt in the range then return -1
        else if ((unsigned char)string[i] >= 0xC0 && (unsigned char)string[i] <= 0xDF){
            strlen++;
            i++;
        }
        //if 3 bytes and 2nd isnt in range or third return -1
        else if((unsigned char)string[i] >= 0xE0 && (unsigned char)string[i] <= 0xEF){
            strlen++;
            i+=2;
        }
        //if 4 bytes and 2nd isnt in range or third or fourth return -1
        else if((unsigned char)string[i] >= 0xF0 && (unsigned char)string[i] <= 0xF7){
            strlen++;
            i+=3;
        }
        i++;
    }

    //allocate the memory needed for the reverse str 
    char *resultStr = (char*)malloc(i + 1);
    //fill the resultStr by putting them in backwards 
    int resultIndex = 0;
    for (int j = i - 1; j >= 0; j--){
        if ((unsigned char)string[j] <= 0x7F){
            resultStr[resultIndex] = string[j];
            resultIndex++;
        }
        // if 2 bytes and the second byte isnt in the range then return -1
        else if ((unsigned char)string[j - 1] >= 0xC0 && (unsigned char)string[j - 1] <= 0xDF){
            resultStr[resultIndex] = string[j - 1];
            resultStr[resultIndex + 1] = string[j];
            resultIndex += 2;
            j--;
        }
        //if 3 bytes and 2nd isnt in range or third return -1
        else if((unsigned char)string[j - 2] >= 0xE0 && (unsigned char)string[j - 2] <= 0xEF){
            resultStr[resultIndex] = string[j - 2];
            resultStr[resultIndex + 1] = string[j - 1];
            resultStr[resultIndex + 2] = string[j];
            j -= 2;
            resultIndex += 3;
        }
        //if 4 bytes and 2nd isnt in range or third or fourth return -1
        else if((unsigned char)string[j - 3] >= 0xF0 && (unsigned char)string[j - 3] <= 0xF7){
            resultStr[resultIndex] = string[j - 3];
            resultStr[resultIndex] = string[j - 2];
            resultStr[resultIndex] = string[j - 1];
            resultStr[resultIndex] = string[j];
            resultIndex += 4;
            j -= 3;
        }
    }
    resultStr[i + 1] = '\0';
    return resultStr;
}

char *my_utf8_hebrewpluralizer(char *string){
    //find the len of the str
    int a = my_utf8_check(string);
    if (a == 0){
        return NULL;
    }
    int i = 0;
    int strlen = 0;
    while (string[i] != '\0'){
        if (!((unsigned char)string[i] == 0xD7)){
        return NULL;
        }
        strlen++;
        i += 2;
    }
    char lastLetter[3];
    lastLetter[0] = string[i - 2];
    lastLetter[1] = string[i - 1];
    lastLetter[2] = '\0';
    // printf("lastlet%s\n", lastLetter);
    char *resultStr = (char*)malloc(i + 4);
    // if letter ends with ה or ת
    if((unsigned char)lastLetter[1] ==  0x94 ||(unsigned char)lastLetter[1] == 0xAA){
        for(int j = 0; j < i - 2; j++){
            resultStr[j] = string[j];
        }
        resultStr[i - 2] = 0xD7;
        resultStr[i-1] = 0x95;
        resultStr[i] = 0xD7;
        resultStr[i + 1] = 0xAA;
        resultStr[i + 2] = '\0';
    }
    else{
       for(int j = 0; j < i - 1; j++){
            resultStr[j] = string[j];
        }
        // if ם then switch to מ
        if ((unsigned char)string[i] == 0x9D){
            resultStr[i] = 0x9E; 
        }
        //if ן then switch to נ
        else if ((unsigned char)string[i] == 0x9F){
            resultStr[i] = 0xA0;
        }
        //if ך then sqwitch to כ
        else if ((unsigned char)string[i] == 0x9A){
            resultStr[i] = 0x9B;
        }
        // if ף then switch to פ
        else if ((unsigned char)string[i] == 0xA3){
            resultStr[i] = 0xA4;
        }
        // if ץ then switch to צ
        else if((unsigned char)string[i] == 0xA5){
            resultStr[i] = 0xA6;
        }
        //if regular letter
        else{
            resultStr[i] = string[i];
        }
        resultStr[i] = 0xD7;
        resultStr[i + 1] = 0x99;
        resultStr[i + 2] = 0xD7;
        resultStr[i + 3] = 0x9D; 
        resultStr[i + 4] = '\0';
    }
    return resultStr;
}
void my_test_check(){
    char str1[] = {0xE0, 0x80, 0x80};
    int conditionsFailed = 0;
    if (my_utf8_check("\xC0") == 1){
        printf("error 1\n");
        conditionsFailed++;
    } 
    if (my_utf8_check("\xD7\x32") == 1){
        printf("error 2\n");
        conditionsFailed++;
    }
    //is this invalid? 
    if (my_utf8_check("\xD7\x82") == 0){
        printf("error 3\n");
        conditionsFailed++;
    }
    if (my_utf8_check("\xE0\x80\x79") == 1){
        printf("error 4\n");
        conditionsFailed++;
    } 
    if (my_utf8_check("\xE0\x88\x82") == 0){
        printf("error 5\n");
        conditionsFailed++;
    }
    if (my_utf8_check("\xF1\x82\x83\x84") == 0){
        printf("error 6\n");
        conditionsFailed++;
    }
    if (my_utf8_check("\xE1\x82\x83\x84") == 1){
        printf("error 7\n");
        conditionsFailed++;
    }
    if (my_utf8_check("\xF1\x82\xC3\x84") == 1){
        printf("error 8\n");
        conditionsFailed++;
    }
    if(conditionsFailed == 0){
        printf("valid works\n");
    }
}

void my_test_strlen(){
    int conditionsFailed = 0;
    char my_string[] = "אריה";
    int a = my_utf8_strlen(my_string);
    if (a != 4){
        printf("error 1\n");
        conditionsFailed++;
    }
    char my_string1[] = "你好";
    int b = my_utf8_strlen(my_string1);
    if (b != 2){
        printf("error 2 \n");
        conditionsFailed++;
    }
    char my_string2[] = "こんにちは!";
    int c = my_utf8_strlen(my_string2);
    if (c != 6){
        printf("error 3\n");
        conditionsFailed++;
    }
    char my_string3[] = "אaבbגcדd";
    int d = my_utf8_strlen(my_string3);
    if (d != 8){
        printf("error 4 \n");
        conditionsFailed++;
    }
    if(conditionsFailed == 0){
        printf("strlen works \n");
    }
    else{
        printf("You've failed %d conditions\n", conditionsFailed);
    }
}

void my_test_charat(){
    int conditionsFailed = 0;
    char my_string[] = "שלום";
    char *a = my_utf8_charat(my_string, 2);
    if ((unsigned char)a[0] != 0xD7 && (unsigned char)a[1] != 0x9C){
        printf("error 1\n");
        conditionsFailed++;
    }
    char my_string1[] = "你好";
    char *b = my_utf8_charat(my_string1, 0);
    if ((unsigned char)b[0] != 0xE4 && (unsigned char)b[1] != 0xBD && (unsigned char)b[2] != 0xA0){
        printf("error 2 \n");
        conditionsFailed++;
    }
    char my_string2[] = "こんにちは!";
    char *c = my_utf8_charat(my_string2, 5);
    if (c[0] != 0x21){
        printf("error 3\n");
        conditionsFailed++;
    }
    char *d = my_utf8_charat(my_string2, 4);
    if ((unsigned char)d[0] != 0xE3 && (unsigned char)d[1] != 0x81 && (unsigned char)d[2] != 0xAF){
        printf("error 3\n");
        conditionsFailed++;
    }
    char my_string3[] = "אaבbגcדd";
    char *e = my_utf8_charat(my_string3,4);
    if ((unsigned char)e[0] != 0xD7 && (unsigned char)e[1] != 0x92){
        printf("error 4 \n");
        conditionsFailed++;
    }
    char my_string4[] = "😊 Emoji! 🎉";
    char *f = my_utf8_charat(my_string4,2);
    if ((f[0] != 0x45)){
        printf("error 5\n");
        conditionsFailed++;
    }

    char *g = my_utf8_charat(my_string4,0);
    if ((unsigned char)g[0] != 0xF0 && (unsigned char)g[1] != 0x9F && (unsigned char)g[2] != 0x98 && (unsigned char)g[3] != 0x8A){
        printf("error 6\n");
        conditionsFailed++;
    }

    if(conditionsFailed == 0){
        printf("charat works \n");
    }
    else{
        printf("You've failed %d conditions\n", conditionsFailed);
    }
}
void my_test_stringcmp(){
    int conditionsFailed = 0;
    char *string1 = "שלום";
    char *string2 = "סלום";
    int a = my_utf8_strcmp(string1,string2);
    if (a != 1){
        printf("error 1\n");
        conditionsFailed++;
    }
    char *string3 = "Cómo estás";
    char *string4 = "Como Estas";
    int b = my_utf8_strcmp(string1,string2);
    if (b != 1){
        printf("error 2\n");
        conditionsFailed++;
    }
    int c = my_utf8_strcmp(string3, string3);
    if (c != 0){
        printf("error 3\n");
        conditionsFailed++;
    }
    char *string5 = "Как дела";
    char *string6 = "Как кела";
    int d = my_utf8_strcmp(string5, string6);
    if (d != -1){
        printf("error 4\n");
        conditionsFailed++;
    }
    if(conditionsFailed == 0){
        printf("string cmp works \n");
    }
    else{
        printf("You've failed %d conditions\n", conditionsFailed);
    }
}

void my_test_strreverse(){
    int conditionsFailed = 0;
    char *s1 = "שלום";
    char *a = my_utf8_strreverse(s1);
    if ((unsigned char)a[0] != 0xD7 && (unsigned char)a[1] != 0x9D && (unsigned char)a[2] != 0xD7 && 
    (unsigned char)a[3] != 0x95 && (unsigned char)a[4] != 0xD7 && (unsigned char)a[5] !=0x9C && 
    (unsigned char)a[6] != 0xD7 && (unsigned char)a[7] != 0xA9){
        printf("error 1\n");
        conditionsFailed++;     
    }   
    char *s2 = "Cómo";
    char *b = my_utf8_strreverse(s2);
    if ((unsigned char)b[0] != 0x6F && (unsigned char)b[1] != 0x6D && (unsigned char)b[2] != 0xC3 && 
    (unsigned char)b[3] != 0xB3 && (unsigned char)b[4] != 0xC3){
        printf("error 2\n");
        conditionsFailed++;   
    }
    char *s3 = "怎么样";
    char *c = my_utf8_strreverse(s3);
    if ((unsigned char)c[0] != 0xE6 && (unsigned char)c[1] != 0xA0 && (unsigned char)c[2] != 0xAA && 
    (unsigned char)c[3] != 0xE4 && (unsigned char)c[4] != 0xB9 && (unsigned char)c[5] !=0x88 && 
    (unsigned char)c[6] != 0xE6 && (unsigned char)c[7] != 0x80 && (unsigned char)c[8] != 0x8E){
        printf("error 3\n");
        conditionsFailed++;     
    }   
    char *s4 = "rachel";
    char *d = my_utf8_strreverse(s4);
    if ((unsigned char)d[0] != 0x6C && (unsigned char)d[1] != 0x65 && (unsigned char)d[2] != 0x68 && 
    (unsigned char)d[3] != 0x63 && (unsigned char)d[4] != 0x61 && (unsigned char)d[5] !=0x52 ){
        printf("error 4\n");
        conditionsFailed++;     
    }   
    if(conditionsFailed == 0){
        printf("string reverse works \n");
    }
    else{
        printf("You've failed %d conditions\n", conditionsFailed);
    }
}

void my_test_hebrewpluralizer(){
    int conditionsFailed = 0;
    char *s1 = "תפילה";
    char *a = my_utf8_hebrewpluralizer(s1);
    if ((unsigned char)a[0] != 0xD7 && (unsigned char)a[1] != 0xAA && (unsigned char)a[2] != 0xD7 && 
    (unsigned char)a[3] != 0xA4 && (unsigned char)a[4] != 0xD7 && (unsigned char)a[5] !=0x99 && 
    (unsigned char)a[6] != 0xD7 && (unsigned char)a[7] != 0x9C && (unsigned char)a[8] != 0xD7 &&
    (unsigned char)a[9] != 0xAA){
        printf("error 1\n");
        conditionsFailed++;     
    }   
    char *s2 = "ילד";
    char *b = my_utf8_hebrewpluralizer(s2);
    if ((unsigned char)b[0] != 0xD7 && (unsigned char)b[1] != 0x99 && (unsigned char)b[2] != 0xD7 && 
    (unsigned char)b[3] != 0x90 && (unsigned char)b[4] != 0xD7 && (unsigned char)b[5] != 0x93 && 
    (unsigned char)b[6] != 0xD7 && (unsigned char)b[7] != 0x99 && (unsigned char)b[8] != 0xD7 &&
    (unsigned char)b[9] != 0x9D ){
        printf("error 2\n");
        conditionsFailed++;  
    }
    char *s3 = "hello";
    char *d = my_utf8_hebrewpluralizer(s3);
    if (d != NULL){
        printf("error 3\n");
        conditionsFailed++;  
    }
    char *s4 = "זקן";
    char *c = my_utf8_hebrewpluralizer(s4);
    if ((unsigned char)c[0] != 0xD7 && (unsigned char)c[1] != 0x96 && (unsigned char)c[2] != 0xD7 && 
    (unsigned char)c[3] != 0xA7 && (unsigned char)c[4] != 0xD7 && (unsigned char)c[5] != 0xA0 && 
    (unsigned char)c[6] != 0xD7 && (unsigned char)c[7] != 0x99 && (unsigned char)c[8] != 0xD7 &&
    (unsigned char)c[9] != 0x9D ){
        printf("error 4\n");
        conditionsFailed++;  
    }
    char *s5 = "קיץ";
    char *e = my_utf8_hebrewpluralizer(s5);
    if ((unsigned char)c[0] != 0xD7 && (unsigned char)e[1] != 0xA7 && (unsigned char)e[2] != 0xD7 && 
    (unsigned char)e[3] != 0x99 && (unsigned char)e[4] != 0xD7 && (unsigned char)e[5] != 0xA6 && 
    (unsigned char)e[6] != 0xD7 && (unsigned char)e[7] != 0x99 && (unsigned char)e[8] != 0xD7 &&
    (unsigned char)e[9] != 0x9D ){
        printf("error 5\n");
        conditionsFailed++; 
    }
    if(conditionsFailed == 0){
        printf("hebrew pluralizer works \n");
    }
    else{
        printf("You've failed %d conditions\n", conditionsFailed);
    }
}



int main(){
    // int result = my_utf8_check("0xC0");
    // char invalidUtf8[] = { 0xC0, 0xDA, '\0' };
    // int zeroresult = my_utf8_check("\xB2\xA3");
    // printf("%d\n", zeroresult);
    // int oneresult =  my_utf8_check("\xC2\x80");
    // printf("%d\n", oneresult);
    // char my_string[] = "אריה";
    // int a = my_utf8_strlen(my_string);
    // printf("%d\n", a);
    // char my_string2[] = "Привет";
    // int b = my_utf8_strlen(my_string2);
    // printf("%d\n", b);
    // char *in = "\\u0024";
    // char out[17];
    // const char* y= my_utf8_encode(in, out);
    // printf("encode is%s\n", y);
    // char *string2 = "שלום";
    // char *string1 = "סלום";
    // int at = my_utf8_strcmp(string1,string2);
 

    // char *indexStr =  "אריה";
    // char *ansIndex = my_utf8_charat(indexStr, 3);
    // printf("%s\n", ansIndex);

    // char *reverseStr = my_utf8_strreverse(indexStr);
    // printf("%s\n", reverseStr);

    // char *plural = "תפוח";
    // char *pluralans = my_utf8_hebrewpluralizer(plural);
    // printf("%s\n", pluralans);

    // char *plural2 = "יפה";
    // char *pluralans2 = my_utf8_hebrewpluralizer(plural2);
    //printf("%s\n", pluralans2);
    my_test_check();
    my_test_strlen();
    my_test_charat();
    my_test_stringcmp();
    my_test_strreverse();
    my_test_hebrewpluralizer();
    unsigned char output[100];

    char *in = (char*)"\xD7\x90";
    //my_utf8_decode(in, output); 
    printf("%s\n", output);
    char *a = hex_to_binary(in);
    printf("%s\n", a);
}