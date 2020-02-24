# StockMarket_program
C++ program that inputs and generates a list of different stocks
<br>


From *Data Structures Using C++*, D.S. Malik
<hr>
Write a program to help a local stock trading company automate its systems. The company invests only in the stock market. At the end of each trading day, the company would like to generate and post the listing of its stocks so that investors can see how their holdings performed that day. We assume that the company invests in, say, 10 different stocks. The desired output is to produce two listings, one sorted by stock symbol and another sorted by percent gain from highest to lowest.
The input data is stored in a file in the following format:
<br>

> symbol openingPrice closingPrice todayHigh todayLow prevClose volume

For example, the sample data is as follows:
```
MSMT 112.50 115.75 116.50 111.75 113.50 6723823 
CBA 67.50 75.50 78.75 67.50 65.75 378233
.
.
.
```
<hr>

The listing sorted by percent gain:
```

********* First Investor's Heaven ********** 
*********    Financial Report       **********
Stock       Today             Previous  Percent 
Symbol Open  Close   High    Low  Close  Gain Volume 
------ ----  -----   ----    ---  -----  ---- ------ 
AOLK  80.00  75.00  82.00  74.00  83.00 -9.64%   5000
IBD   68.00  71.00  72.00  67.00  75.00 -5.33%  15000
CSCO 100.00 102.00 105.00  98.00 101.00  0.99%  25000
ABC  123.45 130.95 132.00 125.00 120.50  8.67%  10000
MSET 120.00 140.00 145.00 140.00 115.00 21.74%  30920

Closing Assets: $9628300.00
```

