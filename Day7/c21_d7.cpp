// Dec. 03 - Advent of Code 2021 
// Day 3: Binary Diagnostic
// Ramesh Janagama

#include <iostream>
#include <fstream>
#include <cmath>
#include <utility>
#include <vector>

using namespace std;
//std::vector<int> v = {16,1,2,0,4,2,7,1,2,14};
//std::vector<int> v = {1101,1,29,67,1102,0,1,65,1008,65,35,66,1005,66,28,1,67,65,20,4,0,1001,65,1,65,1106,0,8,99,35,67,101,99,105,32,110,39,101,115,116,32,112,97,115,32,117,110,101,32,105,110,116,99,111,100,101,32,112,114,111,103,114,97,109,10,51,13,782,658,1369,575,693,395,898,552,57,374,155,541,279,428,338,390,0,181,952,350,123,57,483,449,715,672,619,910,254,308,104,682,560,928,406,4,1328,878,36,1397,1111,1586,548,106,284,20,462,1248,1033,229,108,336,888,289,464,757,19,58,1,262,1202,576,101,928,265,781,145,829,1183,1220,181,194,1181,11,792,1542,1330,728,273,493,1753,327,1736,33,1547,750,1623,374,1603,26,116,169,1270,191,11,47,312,136,46,486,1478,28,64,258,74,351,85,105,1137,531,1573,56,676,532,141,955,98,4,541,1546,1771,432,844,228,103,281,404,2,1431,865,1094,12,134,483,152,308,135,135,257,439,5,174,906,148,1000,160,304,190,478,199,395,693,257,84,148,140,76,354,595,1,633,284,24,83,782,1359,1187,351,290,704,23,692,952,1417,192,868,349,56,936,279,277,115,1579,476,261,50,46,1144,568,11,495,170,726,888,548,509,1265,179,93,834,180,143,866,899,292,958,126,1608,1066,327,1149,74,227,346,110,736,592,989,27,12,123,325,650,49,76,0,299,85,261,729,1135,46,479,879,226,1146,781,852,426,184,274,1323,449,419,90,758,378,134,219,333,833,55,59,358,175,293,36,100,27,764,564,188,814,612,299,1057,829,322,235,122,330,280,1397,654,370,320,770,1082,92,1513,1085,563,455,322,664,14,1122,40,381,750,145,381,422,553,227,20,503,368,43,316,71,479,438,222,204,355,67,264,882,1168,416,14,74,371,293,3,1005,237,422,570,1391,818,451,987,529,79,28,664,454,820,1425,50,49,32,486,397,680,1247,207,6,742,84,1362,540,233,1082,847,28,199,84,111,858,362,23,1755,61,144,652,82,1379,372,329,900,255,850,1006,21,1345,252,938,214,394,12,333,354,834,298,132,246,167,140,423,50,35,463,1502,390,672,2,123,78,588,1202,523,1507,64,68,130,511,263,734,112,1463,1097,99,552,53,1189,343,496,16,260,225,1065,855,12,24,88,958,848,173,1131,1639,559,344,216,19,872,287,288,911,775,1722,1049,17,223,375,378,1109,977,520,350,138,376,75,638,284,167,328,467,146,1379,947,149,890,661,56,1339,148,346,693,52,812,963,198,120,1194,231,7,1558,148,545,325,1038,57,52,936,117,531,684,266,687,394,851,1068,571,627,558,172,998,909,1403,358,13,419,0,1247,81,46,647,833,1370,340,287,74,51,691,198,129,257,769,108,163,480,295,150,1944,1897,161,1081,1521,733,351,376,126,191,94,228,76,957,652,487,805,10,347,217,394,1142,725,780,50,234,654,233,119,1035,226,110,757,75,6,13,649,396,13,191,115,368,60,731,485,621,1454,669,518,29,41,495,768,504,209,222,1168,34,1061,1654,973,979,55,802,139,489,386,757,1258,1720,757,994,172,572,266,15,267,830,1105,30,112,188,26,54,205,1206,1193,688,8,1149,1355,983,1073,434,62,1242,264,181,146,8,20,968,418,607,105,22,221,392,127,388,1055,98,241,58,805,2,801,925,241,931,1184,472,563,167,398,388,1290,111,237,1167,332,293,166,51,319,201,40,128,58,90,270,525,1171,1222,1129,1657,525,427,69,340,547,1486,174,383,900,763,160,193,696,896,477,564,558,870,294,868,951,267,178,454,35,1042,627,1451,740,2,107,4,632,114,754,83,244,43,699,83,1001,226,404,956,522,73,505,193,662,548,525,110,1241,415,794,1954,1062,1217,32,98,4,355,143,146,900,369,1418,250,404,703,469,34,326,62,231,564,44,655,511,1139,1010,1438,354,1117,591,118,509,496,1438,232,1179,526,259,984,643,169,165,50,1136,86,702,412,1762,62,219,1089,687,10,29,330,893,1658,732,48,806,1158,854,14,44,548,627,811,41,1212,341,474,943,25,699,204,1449,769,134,23,28,1216,622,1371,366,233,8,29,615,16,166,256,324,169,657,21,854,674,10,1217,1499,1512,88,369,771,60,317,28,1251,14,1318,376,264,55,658,1873,1280,581,850,147,267,1147,150,6,18,1166,331,163,281,773,1284,501,588,1055,681,41,506,270,104,1212,440,181,1177,257,1444,406,111,662,75,28,214,892,349,380,1677,1885,88,398,713,1596,99,541,219,149,1222,455,29,78,217,618,33,94,335,1050,848,958,67,12,61,9,1133,96,151,1057,60,167,324,99,49,1159,571,270,1291,217,276,42,8,20,652,949,134,132,552,365,112,355,952,167,33,1053,994,445,277,652,569,1594,248};
std::vector<int> v = {1101,1,29,67,1102,0,1,65,1008,65,35,66,1005,66,28,1,67,65,20,4,0,1001,65,1,65,1106,0,8,99,35,67,101,99,105,32,110,39,101,115,116,32,112,97,115,32,117,110,101,32,105,110,116,99,111,100,101,32,112,114,111,103,114,97,109,10,760,1085,275,960,23,133,190,86,999,298,714,247,509,704,122,1109,713,51,41,1028,59,10,251,0,600,201,103,176,482,204,747,540,57,33,133,90,724,793,294,1618,762,65,1579,4,603,1182,25,12,718,30,1534,614,1021,1175,20,647,201,65,136,798,526,1,1060,70,329,194,54,747,423,349,261,604,133,32,1074,148,177,997,597,703,158,1265,472,277,52,320,467,899,333,750,40,588,311,456,1298,1511,33,1037,946,199,12,1751,221,14,1046,686,552,288,231,926,747,67,105,537,1264,654,539,211,549,294,381,662,6,523,239,48,487,6,575,553,218,1404,160,1196,330,336,1690,215,134,1312,186,1502,377,52,2,479,649,523,330,737,112,40,846,171,102,1614,39,514,438,932,143,443,1270,339,548,230,430,420,521,431,83,517,463,12,517,173,72,45,806,65,280,559,1076,332,162,50,606,1468,15,128,34,77,533,211,1157,789,111,67,308,462,147,1106,215,801,1294,203,98,833,136,136,1363,539,114,365,690,1378,266,1,212,537,283,327,55,96,377,57,899,37,1397,747,341,4,555,72,283,356,70,1410,33,311,1255,382,1076,50,98,314,214,49,281,33,1143,11,1270,396,477,265,156,763,86,595,1182,139,1085,499,1,3,7,90,408,1062,37,1175,56,925,1118,463,93,198,678,839,507,511,151,1081,146,1,553,292,208,384,787,395,360,1587,400,981,22,852,109,342,52,173,439,980,1058,11,282,117,558,652,370,86,81,178,531,309,691,254,183,324,495,511,26,57,1473,19,243,1290,392,362,1533,837,397,207,251,1250,584,700,431,1084,204,89,4,1439,48,1163,100,149,73,426,107,882,868,145,352,434,1445,354,74,1134,166,118,792,722,198,228,157,119,1178,789,947,670,1247,726,28,474,35,137,24,328,152,270,429,368,1113,132,364,32,122,12,1314,227,513,215,96,235,142,230,100,1112,119,308,1590,509,297,494,316,916,816,791,1204,42,660,1207,1170,257,663,120,12,18,1579,1164,110,432,601,397,323,376,656,128,34,215,1572,744,156,1081,330,1084,245,83,620,409,463,1029,1178,952,334,1344,963,109,8,462,174,302,1441,12,16,701,466,1794,620,442,227,165,894,1542,94,261,419,962,1047,1294,400,3,355,394,125,25,674,774,44,22,492,384,44,457,121,188,132,1226,185,991,822,1351,1126,638,258,134,349,204,72,330,1006,124,969,981,586,61,670,0,158,316,794,835,1086,160,506,293,798,77,44,1337,106,602,1459,665,85,364,1328,363,32,796,344,1894,178,742,347,626,267,304,909,130,82,189,284,745,14,50,494,36,113,632,527,140,817,136,1707,1227,792,1774,4,159,1233,85,486,515,917,16,200,333,335,328,640,347,311,1297,1489,1047,653,1,56,157,833,257,1294,237,759,124,453,1205,447,734,976,364,315,656,19,336,42,566,61,73,212,107,747,1033,130,1896,1283,1028,877,336,325,127,762,887,644,965,955,25,562,1042,975,410,346,387,1432,1303,1,257,87,814,1101,1399,38,204,1753,69,201,1347,442,169,272,1593,136,21,1821,200,60,99,76,6,88,1657,1825,539,92,705,1402,297,1309,316,614,84,403,204,45,805,119,67,149,384,179,188,1712,68,226,1430,1137,0,561,515,1233,9,450,657,216,516,197,829,413,53,792,792,432,397,97,120,876,596,287,44,125,37,70,225,27,5,122,1936,14,492,151,1072,464,62,478,1393,35,747,510,100,1242,10,1608,212,281,15,905,81,49,198,318,278,751,219,211,561,33,1787,64,419,1,809,410,228,196,333,261,1,454,1364,637,654,224,107,1573,907,245,129,346,619,111,392,40,273,256,1,807,1594,51,766,1113,21,31,745,1510,204,25,125,124,434,608,546,0,251,81,116,957,973,76,1129,320,368,851,302,711,612,84,218,809,858,1460,818,136,886,1160,1284,531,1617,122,1091,539,231,318,616,148,1366,291,537,1606,1004,317,43,1424,469,1193,500,479,431,470,1316,32,953,593,1162,803,761,60,255,369,1250,275,1534,312,258,36,114,308,672,94,698,231,34,213,168,64,1170,44,1547,246,1607,733,479,87,554,101,68,631,673,231,177,392,627,464,405,415,148,1478,396,1309,445,298,445,428,208,510,371,788,597,635,1230,111,325,121,1173,21,157,576,5,365,319,858,722,259,129,198,555,83,160,1125,467,784,100,706,155,209,446,821,379,732,160,233,114,644,565,106,656,863,354,1246,266,437,41,154};

void part1(){
    int min[v.size()]; int diff=0;
    for(int i=0;i<v.size();i++){
        int cost=0;
        for(int j=0;j<v.size();j++){
            if ( i==j)  continue;
            if (v[i] > v[j] ) 
                cost += (v[i] - v[j]);
            else 
                cost += (v[j] - v[i]);
        }
        min[i] = cost;
    }
    for(int i=0;i<v.size();i++){
        std::cout << min[i] << " ";
    }
    int mincost=9999999999;
    for(int i=0;i<v.size();i++){
        if ( mincost > min[i])
             mincost = min[i];
    }
    std::cout << "ANS:" << mincost << endl;
}

void part2(){
    long min[v.size()]; long diff=0; 
    for(int i=0;i<v.size();i++){
         long cost=0;
        for(int j=0;j<v.size();j++){
            if ( i==j)  continue;
            long diff=0;
            if (v[i] > v[j] ) 
                diff += (v[i] - v[j]);
            else 
                diff += (v[j] - v[i]);

            cost+= (diff*(diff+1) ) /2;  
        }
        min[i] = cost;
    }
    for(int i=0;i<v.size();i++){
        std::cout << min[i] << " ";
    }
    long mincost=9999999999;
    for(int i=0;i<v.size();i++){
        if ( mincost > min[i])
             mincost = min[i];
    }
    std::cout << "ANS:" << mincost << endl;
}

int main() {  
   std::cout << "C21 DAY7\n";
   //readInput();
   //printOutput();
   part2();
   //std::cout << "NUMBER OF FISHES: " << v.size();
   //part2();
   return 0;
}