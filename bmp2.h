
extern char buffer[15000]; 
extern u8 tmp[48]; 

bmp_conv2() 
{ 

//----------------------- start of tmp[0]--------------------------- 

if(buffer[4]==48 && buffer[5]==48)      //00        
{ 

tmp[0]=0; 

} 

if(buffer[4]==48 && buffer[5]==49)      //01        
{ 

tmp[0]=1; 

} 
if(buffer[4]==48 && buffer[5]==50)      //02        
{ 

tmp[0]=2; 

} 
if(buffer[4]==48 && buffer[5]==51)      //03         
{ 

tmp[0]=3; 

} 
if(buffer[4]==48 && buffer[5]==52)      //04        
{ 

tmp[0]=4; 

} 
if(buffer[4]==48 && buffer[5]==53)      //05      
{ 

tmp[0]=5; 

} 


if(buffer[4]==48 && buffer[5]==54)      //06       
{ 

tmp[0]=6; 

} 
if(buffer[4]==48 && buffer[5]==55)      //07     
{ 

tmp[0]=7; 

} 
if(buffer[4]==48 && buffer[5]==56)      //08     
{ 

tmp[0]=8; 

} 
if(buffer[4]==48 && buffer[5]==57)      //09   
{ 

tmp[0]=9; 

} 

if(buffer[4]==48 && buffer[5]==65)      //0a 
{ 

tmp[0]=10; 

} 

if(buffer[4]==48 && buffer[5]==66)      //0b 
{ 

tmp[0]=11; 

} 
if(buffer[4]==48 && buffer[5]==67)      //0c 
{ 

tmp[0]=12; 

} 
if(buffer[4]==48 && buffer[5]==68)      //0d 
{ 

tmp[0]=13; 

} 
if(buffer[4]==48 && buffer[5]==69)      //0e  
{ 

tmp[0]=14; 

} 
if(buffer[4]==48 && buffer[5]==70)      //0f  
{ 

tmp[0]=15; 

} 

//----------- 

if(buffer[4]==49 && buffer[5]==48)      //        10 
{ 

tmp[0]=16; 

} 
if(buffer[4]==49 && buffer[5]==49)      //         11 
{ 

tmp[0]=17; 

} 
if(buffer[4]==49 && buffer[5]==50)      //         12 
{ 

tmp[0]=18; 

} 
if(buffer[4]==49 && buffer[5]==51)      //         13 
{ 

tmp[0]=19; 

} 
if(buffer[4]==49 && buffer[5]==52)      //         14 
{ 

tmp[0]=20; 

} 
if(buffer[4]==49 && buffer[5]==53)      //         15 
{ 

tmp[0]=21; 

} 
if(buffer[4]==49 && buffer[5]==54)      //         16 
{ 

tmp[0]=22; 

} 
if(buffer[4]==49 && buffer[5]==55)      //         17 
{ 

tmp[0]=23; 

} 
if(buffer[4]==49 && buffer[5]==56)      //         18 
{ 

tmp[0]=24; 

} 
if(buffer[4]==49 && buffer[5]==57)      //         19 
{ 

tmp[0]=25; 

} 

if(buffer[4]==49 && buffer[5]==65)      //         1a 
{ 

tmp[0]=26; 

} 
if(buffer[4]==49 && buffer[5]==66)      //         1b 
{ 

tmp[0]=27; 

} 
if(buffer[4]==49 && buffer[5]==67)      //         1c 
{ 

tmp[0]=28; 

} 
if(buffer[4]==49 && buffer[5]==68)      //         1d 
{ 

tmp[0]=29; 

} 
if(buffer[4]==49 && buffer[5]==69)      //         1e 
{ 

tmp[0]=30; 

} 
if(buffer[4]==49 && buffer[5]==70)      //         1f 
{ 

tmp[0]=31; 

} 


//--------------- 


if(buffer[4]==50 && buffer[5]==48)      //         20 
{ 

tmp[0]=32; 

} 

if(buffer[4]==50 && buffer[5]==49)      //         21 
{ 

tmp[0]=33; 

} 
if(buffer[4]==50 && buffer[5]==50)      //         22 
{ 

tmp[0]=34; 

} 
if(buffer[4]==50 && buffer[5]==51)      //         23 
{ 

tmp[0]=35; 

} 
if(buffer[4]==50 && buffer[5]==52)      //         24 
{ 

tmp[0]=36; 

} 
if(buffer[4]==50 && buffer[5]==53)      //         25 
{ 

tmp[0]=37; 

} 
if(buffer[4]==50 && buffer[5]==54)      //         26 
{ 

tmp[0]=38; 

} 
if(buffer[4]==50 && buffer[5]==55)      //         27 
{ 

tmp[0]=39; 

} 
if(buffer[4]==50 && buffer[5]==56)      //         28 
{ 

tmp[0]=40; 

} 
if(buffer[4]==50 && buffer[5]==57)      //         29 
{ 

tmp[0]=41; 

} 
if(buffer[4]==50 && buffer[5]==65)      //         2a 
{ 

tmp[0]=42; 

} 
if(buffer[4]==50 && buffer[5]==66)      //         2b 
{ 

tmp[0]=43; 

} 
if(buffer[4]==50 && buffer[5]==67)      //         2c 
{ 

tmp[0]=44; 

} 

if(buffer[4]==50 && buffer[5]==68)      //       2d  
{ 

tmp[0]=45; 

} 
if(buffer[4]==50 && buffer[5]==69)      //         2e 
{ 

tmp[0]=46; 

} 
if(buffer[4]==50 && buffer[5]==70)      //         2f 
{ 

tmp[0]=47; 
 
} 

//------------- 


if(buffer[4]==51 && buffer[5]==48)      // 30        
{ 

tmp[0]=48; 

} 

if(buffer[4]==51 && buffer[5]==49)      // 31        
{ 

tmp[0]=49; 

} 
if(buffer[4]==51 && buffer[5]==50)      // 32        
{ 

tmp[0]=50; 

} 
if(buffer[4]==51 && buffer[5]==51)      //33         
{ 

tmp[0]=51; 

} 
if(buffer[4]==51 && buffer[5]==52)      //34        
{ 

tmp[0]=52; 

} 
if(buffer[4]==51 && buffer[5]==53)      //35      
{ 

tmp[0]=53; 

} 
if(buffer[4]==51 && buffer[5]==54)      //36       
{ 

tmp[0]=54; 

} 
if(buffer[4]==51 && buffer[5]==55)      //37     
{ 

tmp[0]=55; 

} 
if(buffer[4]==51 && buffer[5]==56)      //38     
{ 

tmp[0]=56; 

} 
if(buffer[4]==51 && buffer[5]==57)      //39   
{ 

tmp[0]=57; 

} 

if(buffer[4]==51 && buffer[5]==65)      //3a 
{ 

tmp[0]=58; 

} 

if(buffer[4]==51 && buffer[5]==66)      //3b 
{ 

tmp[0]=59; 

} 
if(buffer[4]==51 && buffer[5]==67)      //3c 
{ 

tmp[0]=60; 

} 
if(buffer[4]==51 && buffer[5]==68)      //3d 
{ 

tmp[0]=61; 

} 
if(buffer[4]==51 && buffer[5]==69)      //3e  
{ 

tmp[0]=62; 

} 
if(buffer[4]==51 && buffer[5]==70)      //3f  
{ 

tmp[0]=63; 

} 

//------------ 


if(buffer[4]==52 && buffer[5]==48)      // 40       
{ 

tmp[0]=64; 

} 

if(buffer[4]==52 && buffer[5]==49)      // 41        
{ 

tmp[0]=65; 

} 
if(buffer[4]==52 && buffer[5]==50)      // 42        
{ 

tmp[0]=66; 

} 
if(buffer[4]==52 && buffer[5]==51)      //43         
{ 

tmp[0]=67; 

} 
if(buffer[4]==52 && buffer[5]==52)      //44        
{ 

tmp[0]=68; 

} 
if(buffer[4]==52 && buffer[5]==53)      //45      
{ 

tmp[0]=69; 

} 

if(buffer[4]==52 && buffer[5]==54)      //46       
{ 

tmp[0]=70; 

} 
if(buffer[4]==52 && buffer[5]==55)      //47     
{ 

tmp[0]=71; 

} 
if(buffer[4]==52 && buffer[5]==56)      //48     
{ 

tmp[0]=72; 

} 
if(buffer[4]==52 && buffer[5]==57)      //49   
{ 

tmp[0]=73; 

} 

if(buffer[4]==52 && buffer[5]==65)      //4a 
{ 

tmp[0]=74; 

} 

if(buffer[4]==52 && buffer[5]==66)      //4b 
{ 

tmp[0]=75; 

} 
if(buffer[4]==52 && buffer[5]==67)      //4c 
{ 

tmp[0]=76; 

} 
if(buffer[4]==52 && buffer[5]==68)      //4d 
{ 

tmp[0]=77; 

} 
if(buffer[4]==52 && buffer[5]==69)      //4e  
{ 

tmp[0]=78; 

} 
if(buffer[4]==52 && buffer[5]==70)      //4f  
{ 

tmp[0]=79; 

} 
//------------ 




if(buffer[4]==53 && buffer[5]==48)      //50       
{ 

tmp[0]=80; 

} 

if(buffer[4]==53 && buffer[5]==49)      //51        
{ 

tmp[0]=81; 

} 
if(buffer[4]==53 && buffer[5]==50)      //52        
{ 

tmp[0]=82; 

} 
if(buffer[4]==53 && buffer[5]==51)      //53         
{ 

tmp[0]=83; 

} 
if(buffer[4]==53 && buffer[5]==52)      //54        
{ 

tmp[0]=84; 

} 
if(buffer[4]==53 && buffer[5]==53)      //55      
{ 

tmp[0]=85; 

} 
if(buffer[4]==53 && buffer[5]==54)      //56       
{ 

tmp[0]=86; 

} 
if(buffer[4]==53 && buffer[5]==55)      //57     
{ 

tmp[0]=87; 

} 
if(buffer[4]==53 && buffer[5]==56)      //58     
{ 

tmp[0]=88; 

} 
if(buffer[4]==53 && buffer[5]==57)      //59   
{ 

tmp[0]=89; 

} 

if(buffer[4]==53 && buffer[5]==65)      //5a 
{ 

tmp[0]=90; 

} 

if(buffer[4]==53 && buffer[5]==66)      //5b 
{ 

tmp[0]=91; 

} 
if(buffer[4]==53 && buffer[5]==67)      //5c 
{ 

tmp[0]=92; 

} 
if(buffer[4]==53 && buffer[5]==68)      //5d 
{ 

tmp[0]=93; 

} 
if(buffer[4]==53 && buffer[5]==69)      //5e  
{ 

tmp[0]=94; 

} 
if(buffer[4]==53 && buffer[5]==70)      //5f  
{ 

tmp[0]=95; 

} 
//------------ 




if(buffer[4]==54 && buffer[5]==48)      //60       
{ 

tmp[0]=96; 

} 

if(buffer[4]==54 && buffer[5]==49)      //61        
{ 

tmp[0]=97; 

} 
if(buffer[4]==54 && buffer[5]==50)      //62        
{ 

tmp[0]=98; 

} 
if(buffer[4]==54 && buffer[5]==51)      //63         
{ 

tmp[0]=99; 

} 
if(buffer[4]==54 && buffer[5]==52)      //64        
{ 

tmp[0]=100; 

} 
if(buffer[4]==54 && buffer[5]==53)      //65      
{ 

tmp[0]=101; 

} 
if(buffer[4]==54 && buffer[5]==54)      //66       
{ 

tmp[0]=102; 

} 
if(buffer[4]==54 && buffer[5]==55)      //67     
{ 

tmp[0]=103; 

} 
if(buffer[4]==54 && buffer[5]==56)      //68     
{ 

tmp[0]=104; 

} 
if(buffer[4]==54 && buffer[5]==57)      //69   
{ 

tmp[0]=105; 

} 

if(buffer[4]==54 && buffer[5]==65)      //6a 
{ 

tmp[0]=106; 

} 

if(buffer[4]==54 && buffer[5]==66)      //6b 
{ 

tmp[0]=107; 

} 
if(buffer[4]==54 && buffer[5]==67)      //6c 
{ 

tmp[0]=108; 

} 
if(buffer[4]==54 && buffer[5]==68)      //6d 
{ 

tmp[0]=109; 

} 
if(buffer[4]==54 && buffer[5]==69)      //6e  
{ 

tmp[0]=110; 

} 
if(buffer[4]==54 && buffer[5]==70)      //6f  
{ 

tmp[0]=111; 

} 
//------------ 




if(buffer[4]==55 && buffer[5]==48)      //70       
{ 

tmp[0]=112; 

} 

if(buffer[4]==55 && buffer[5]==49)      //71        
{ 

tmp[0]=113; 

} 
if(buffer[4]==55 && buffer[5]==50)      //72        
{ 

tmp[0]=114; 

} 
if(buffer[4]==55 && buffer[5]==51)      //73         
{ 

tmp[0]=115; 

} 
if(buffer[4]==55 && buffer[5]==52)      //74        
{ 

tmp[0]=116; 

} 
if(buffer[4]==55 && buffer[5]==53)      //75      
{ 

tmp[0]=117; 

} 
if(buffer[4]==55 && buffer[5]==54)      //76       
{ 

tmp[0]=118; 

} 
if(buffer[4]==55 && buffer[5]==55)      //77     
{ 

tmp[0]=119; 

} 
if(buffer[4]==55 && buffer[5]==56)      //78     
{ 

tmp[0]=120; 

} 
if(buffer[4]==55 && buffer[5]==57)      //79   
{ 

tmp[0]=121; 

} 

if(buffer[4]==55 && buffer[5]==65)      //7a 
{ 

tmp[0]=122; 

} 

if(buffer[4]==55 && buffer[5]==66)      //7b 
{ 

tmp[0]=123; 

} 
if(buffer[4]==55 && buffer[5]==67)      //7c 
{ 

tmp[0]=124; 

} 
if(buffer[4]==55 && buffer[5]==68)      //7d 
{ 

tmp[0]=125; 

} 
if(buffer[4]==55 && buffer[5]==69)      //7e  
{ 

tmp[0]=126; 

} 
if(buffer[4]==55 && buffer[5]==70)      //7f  
{ 

tmp[0]=127; 

} 

//------------ 

if(buffer[4]==56 && buffer[5]==48)      //80       
{ 

tmp[0]=128; 

} 

if(buffer[4]==56 && buffer[5]==49)      //81        
{ 

tmp[0]=129; 

} 
if(buffer[4]==56 && buffer[5]==50)      //82        
{ 

tmp[0]=130; 

} 
if(buffer[4]==56 && buffer[5]==51)      //83         
{ 

tmp[0]=131; 

} 
if(buffer[4]==56 && buffer[5]==52)      //84        
{ 

tmp[0]=132; 

} 
if(buffer[4]==56 && buffer[5]==53)      //85      
{ 

tmp[0]=133; 

} 
if(buffer[4]==56 && buffer[5]==54)      //86       
{ 

tmp[0]=134; 

} 
if(buffer[4]==56 && buffer[5]==55)      //87     
{ 

tmp[0]=135; 

} 
if(buffer[4]==56 && buffer[5]==56)      //88     
{ 

tmp[0]=136; 

} 
if(buffer[4]==56 && buffer[5]==57)      //89   
{ 

tmp[0]=137; 

} 

if(buffer[4]==56 && buffer[5]==65)      //8a 
{ 

tmp[0]=138; 

} 

if(buffer[4]==56 && buffer[5]==66)      //8b 
{ 

tmp[0]=139; 

} 
if(buffer[4]==56 && buffer[5]==67)      //8c 
{ 

tmp[0]=140; 

} 
if(buffer[4]==56 && buffer[5]==68)      //8d 
{ 

tmp[0]=141; 

} 
if(buffer[4]==56 && buffer[5]==69)      //8e  
{ 

tmp[0]=142; 

} 
if(buffer[4]==56 && buffer[5]==70)      //8f  
{ 

tmp[0]=143; 

} 
//------------ 
 

if(buffer[4]==57 && buffer[5]==48)      //90       
{ 

tmp[0]=144; 

} 

if(buffer[4]==57 && buffer[5]==49)      //91        
{ 

tmp[0]=145; 

} 
if(buffer[4]==57 && buffer[5]==50)      //92        
{ 

tmp[0]=146; 

} 
if(buffer[4]==57 && buffer[5]==51)      //93         
{ 

tmp[0]=147; 

} 
if(buffer[4]==57 && buffer[5]==52)      //94        
{ 

tmp[0]=148; 

} 
if(buffer[4]==57 && buffer[5]==53)      //95      
{ 

tmp[0]=149; 

} 
if(buffer[4]==57 && buffer[5]==54)      //96       
{ 

tmp[0]=150; 

} 
if(buffer[4]==57 && buffer[5]==55)      //97     
{ 

tmp[0]=151; 

} 
if(buffer[4]==57 && buffer[5]==56)      //98     
{ 

tmp[0]=152; 

} 
if(buffer[4]==57 && buffer[5]==57)      //99   
{ 

tmp[0]=153; 

} 

if(buffer[4]==57 && buffer[5]==65)      //9a 
{ 

tmp[0]=154; 

} 

if(buffer[4]==57 && buffer[5]==66)      //9b 
{ 

tmp[0]=155; 

} 
if(buffer[4]==57 && buffer[5]==67)      //9c 
{ 

tmp[0]=156; 

} 
if(buffer[4]==57 && buffer[5]==68)      //9d 
{ 

tmp[0]=157; 

} 
if(buffer[4]==57 && buffer[5]==69)      //9e  
{ 

tmp[0]=158; 

} 
if(buffer[4]==57 && buffer[5]==70)      //9f  
{ 

tmp[0]=159; 

} 
//------------ 


if(buffer[4]==65 && buffer[5]==48)      //a0       
{ 

tmp[0]=160; 

} 

if(buffer[4]==65 && buffer[5]==49)      //a1        
{ 

tmp[0]=161; 

} 
if(buffer[4]==65 && buffer[5]==50)      //a2        
{ 

tmp[0]=162; 

} 
if(buffer[4]==65 && buffer[5]==51)      //a3         
{ 

tmp[0]=163; 

} 
if(buffer[4]==65 && buffer[5]==52)      //a4        
{ 

tmp[0]=164; 

} 
if(buffer[4]==65 && buffer[5]==53)      //a5      
{ 

tmp[0]=165; 

} 
if(buffer[4]==65 && buffer[5]==54)      //a6       
{ 

tmp[0]=166; 

} 
if(buffer[4]==65 && buffer[5]==55)      //a7     
{ 

tmp[0]=167; 

} 
if(buffer[4]==65 && buffer[5]==56)      //a8     
{ 

tmp[0]=168; 

} 
if(buffer[4]==65 && buffer[5]==57)      //a9   
{ 

tmp[0]=169; 

} 

if(buffer[4]==65 && buffer[5]==65)      //aa 
{ 

tmp[0]=170; 

} 

if(buffer[4]==65 && buffer[5]==66)      //ab 
{ 

tmp[0]=171; 

} 
if(buffer[4]==65 && buffer[5]==67)      //ac 
{ 

tmp[0]=172; 

} 
if(buffer[4]==65 && buffer[5]==68)      //ad 
{ 

tmp[0]=173; 

} 
if(buffer[4]==65 && buffer[5]==69)      //ae  
{ 

tmp[0]=174; 

} 
if(buffer[4]==65 && buffer[5]==70)      //af  
{ 

tmp[0]=175; 

} 
//------------ 


if(buffer[4]==66 && buffer[5]==48)      //b0       
{ 
 
tmp[0]=176; 

} 

if(buffer[4]==66 && buffer[5]==49)      //b1        
{ 

tmp[0]=177; 

} 
if(buffer[4]==66 && buffer[5]==50)      //b2        
{ 

tmp[0]=178; 

} 
if(buffer[4]==66 && buffer[5]==51)      //b3         
{ 

tmp[0]=179; 

} 
if(buffer[4]==66 && buffer[5]==52)      //b4        
{ 

tmp[0]=180; 

} 
if(buffer[4]==66 && buffer[5]==53)      //b5      
{ 

tmp[0]=181; 

} 
if(buffer[4]==66 && buffer[5]==54)      //b6       
{ 

tmp[0]=182; 

} 
if(buffer[4]==66 && buffer[5]==55)      //b7     
{ 

tmp[0]=183; 

} 
if(buffer[4]==66 && buffer[5]==56)      //b8     
{ 

tmp[0]=184; 

} 
if(buffer[4]==66 && buffer[5]==57)      //b9   
{ 

tmp[0]=185; 

} 

if(buffer[4]==66 && buffer[5]==65)      //ba 
{ 

tmp[0]=186; 

} 

if(buffer[4]==66 && buffer[5]==66)      //bb 
{ 

tmp[0]=187; 

} 
if(buffer[4]==66 && buffer[5]==67)      //bc 
{ 

tmp[0]=188; 

} 
if(buffer[4]==66 && buffer[5]==68)      //bd 
{ 

tmp[0]=189; 

} 
if(buffer[4]==66 && buffer[5]==69)      //be  
{ 

tmp[0]=190; 

} 
if(buffer[4]==66 && buffer[5]==70)      //bf  
{ 

tmp[0]=191; 

} 
//------------ 



if(buffer[4]==67 && buffer[5]==48)      //c0       
{ 

tmp[0]=192; 

} 

if(buffer[4]==67 && buffer[5]==49)      //c1        
{ 

tmp[0]=193; 

} 
if(buffer[4]==67 && buffer[5]==50)      //c2        
{ 

tmp[0]=194; 

} 
if(buffer[4]==67 && buffer[5]==51)      //c3         
{ 

tmp[0]=195; 

} 
if(buffer[4]==67 && buffer[5]==52)      //c4        
{ 

tmp[0]=196; 

} 
if(buffer[4]==67 && buffer[5]==53)      //c5      
{ 

tmp[0]=197; 

} 
if(buffer[4]==67 && buffer[5]==54)      //c6       
{ 

tmp[0]=198; 

} 
if(buffer[4]==67 && buffer[5]==55)      //c7     
{ 

tmp[0]=199; 

} 
if(buffer[4]==67 && buffer[5]==56)      //c8     
{ 

tmp[0]=200; 

} 
if(buffer[4]==67 && buffer[5]==57)      //c9   
{ 

tmp[0]=201; 

} 

if(buffer[4]==67 && buffer[5]==65)      //ca 
{ 

tmp[0]=202; 

} 

if(buffer[4]==67 && buffer[5]==66)      //cb 
{ 

tmp[0]=203; 

} 
if(buffer[4]==67 && buffer[5]==67)      //cc 
{ 

tmp[0]=204; 

} 
if(buffer[4]==67 && buffer[5]==68)      //cd 
{ 

tmp[0]=205; 

} 
if(buffer[4]==67 && buffer[5]==69)      //ce  
{ 

tmp[0]=206; 

} 
if(buffer[4]==67 && buffer[5]==70)      //cf  
{ 

tmp[0]=207; 

} 
//------------ 


if(buffer[4]==68 && buffer[5]==48)      //d0       
{ 

tmp[0]=208; 

} 

if(buffer[4]==68 && buffer[5]==49)      //d1        
{ 

tmp[0]=209; 

} 
if(buffer[4]==68 && buffer[5]==50)      //d2        
{ 

tmp[0]=210; 

} 
if(buffer[4]==68 && buffer[5]==51)      //d3         
{ 

tmp[0]=211; 

} 
if(buffer[4]==68 && buffer[5]==52)      //d4        
{ 

tmp[0]=212; 

} 
if(buffer[4]==68 && buffer[5]==53)      //d5      
{ 

tmp[0]=213; 

} 
if(buffer[4]==68 && buffer[5]==54)      //d6       
{ 

tmp[0]=214; 

} 
if(buffer[4]==68 && buffer[5]==55)      //d7     
{ 

tmp[0]=215; 

} 
if(buffer[4]==68 && buffer[5]==56)      //d8     
{ 

tmp[0]=216; 

} 
if(buffer[4]==68 && buffer[5]==57)      //d9   
{ 
 
tmp[0]=217; 

} 

if(buffer[4]==68 && buffer[5]==65)      //da 
{ 

tmp[0]=218; 

} 

if(buffer[4]==68 && buffer[5]==66)      //db 
{ 

tmp[0]=219; 

} 
if(buffer[4]==68 && buffer[5]==67)      //dc 
{ 

tmp[0]=220; 

} 
if(buffer[4]==68 && buffer[5]==68)      //dd 
{ 

tmp[0]=221; 

} 
if(buffer[4]==68 && buffer[5]==69)      //de  
{ 

tmp[0]=222; 

} 
if(buffer[4]==68 && buffer[5]==70)      //df  
{ 

tmp[0]=223; 

} 
//------------ 



if(buffer[4]==69 && buffer[5]==48)      //e0       
{ 

tmp[0]=224; 

} 
 
if(buffer[4]==69 && buffer[5]==49)      //e1        
{ 

tmp[0]=225; 

} 
if(buffer[4]==69 && buffer[5]==50)      //e2        
{ 

tmp[0]=226; 

} 
if(buffer[4]==69 && buffer[5]==51)      //e3         
{ 

tmp[0]=227; 

} 
if(buffer[4]==69 && buffer[5]==52)      //e4        
{ 

tmp[0]=228; 

} 
if(buffer[4]==69 && buffer[5]==53)      //e5      
{ 

tmp[0]=229; 

} 
if(buffer[4]==69 && buffer[5]==54)      //e6       
{ 

tmp[0]=230; 

} 
if(buffer[4]==69 && buffer[5]==55)      //e7     
{ 

tmp[0]=231; 

} 
if(buffer[4]==69 && buffer[5]==56)      //e8     
{ 

tmp[0]=232; 

} 
if(buffer[4]==69 && buffer[5]==57)      //e9   
{ 

tmp[0]=233; 

} 

if(buffer[4]==69 && buffer[5]==65)      //ea 
{ 

tmp[0]=234; 

} 

if(buffer[4]==69 && buffer[5]==66)      //eb 
{ 

tmp[0]=235; 

} 
if(buffer[4]==69 && buffer[5]==67)      //ec 
{ 

tmp[0]=236; 

} 
if(buffer[4]==69 && buffer[5]==68)      //ed 
{ 

tmp[0]=237; 

} 
if(buffer[4]==69 && buffer[5]==69)      //ee  
{ 

tmp[0]=238; 

} 
if(buffer[4]==69 && buffer[5]==70)      //ef  
{ 

tmp[0]=239; 

} 
//------------ 

if(buffer[4]==70 && buffer[5]==48)      //f0       
{ 

tmp[0]=240; 

} 

if(buffer[4]==70 && buffer[5]==49)      //f1        
{ 
 
tmp[0]=241; 

} 
if(buffer[4]==70 && buffer[5]==50)      //f2        
{ 

tmp[0]=242; 

} 
if(buffer[4]==70 && buffer[5]==51)      //f3         
{ 

tmp[0]=243; 

} 
if(buffer[4]==70 && buffer[5]==52)      //f4        
{ 

tmp[0]=244; 

} 
if(buffer[4]==70 && buffer[5]==53)      //f5      
{ 

tmp[0]=245; 

} 
if(buffer[4]==70 && buffer[5]==54)      //f6       
{ 

tmp[0]=246; 

} 
if(buffer[4]==70 && buffer[5]==55)      //f7     
{ 

tmp[0]=247; 

} 
if(buffer[4]==70 && buffer[5]==56)      //f8     
{ 

tmp[0]=248; 

} 
if(buffer[4]==70 && buffer[5]==57)      //f9   
{ 

tmp[0]=249; 

} 
 
if(buffer[4]==70 && buffer[5]==65)      //fa 
{ 

tmp[0]=250; 

} 

if(buffer[4]==70 && buffer[5]==66)      //fb 
{ 

tmp[0]=251; 

} 
if(buffer[4]==70 && buffer[5]==67)      //fc 
{ 

tmp[0]=252; 

} 
if(buffer[4]==70 && buffer[5]==68)      //fd 
{ 

tmp[0]=253; 

} 
if(buffer[4]==70 && buffer[5]==69)      //fe  
{ 

tmp[0]=254; 

} 
if(buffer[4]==70 && buffer[5]==70)      //ff  
{ 

tmp[0]=255; 

} 

//----------------------- end of tmp[0]--------------------------- 



//----------------------- start of tmp[1]--------------------------- 

if(buffer[6]==48 && buffer[7]==48)      //00        
{ 

tmp[1]=0; 

} 

if(buffer[6]==48 && buffer[7]==49)      //01        
{ 

tmp[1]=1; 

} 
if(buffer[6]==48 && buffer[7]==50)      //02        
{ 

tmp[1]=2; 

} 
if(buffer[6]==48 && buffer[7]==51)      //03         
{ 

tmp[1]=3; 

} 
if(buffer[6]==48 && buffer[7]==52)      //04        
{ 

tmp[1]=4; 

} 
if(buffer[6]==48 && buffer[7]==53)      //05      
{ 

tmp[1]=5; 

} 


if(buffer[6]==48 && buffer[7]==54)      //06       
{ 

tmp[1]=6; 

} 
if(buffer[6]==48 && buffer[7]==55)      //07     
{ 

tmp[1]=7; 

} 
if(buffer[6]==48 && buffer[7]==56)      //08     
{ 

tmp[1]=8; 

} 
if(buffer[6]==48 && buffer[7]==57)      //09   
{ 

tmp[1]=9; 

} 

if(buffer[6]==48 && buffer[7]==65)      //0a 
{ 

tmp[1]=10; 

} 

if(buffer[6]==48 && buffer[7]==66)      //0b 
{ 

tmp[1]=11; 

} 
if(buffer[6]==48 && buffer[7]==67)      //0c 
{ 

tmp[1]=12; 

} 
if(buffer[6]==48 && buffer[7]==68)      //0d 
{ 

tmp[1]=13; 

} 
if(buffer[6]==48 && buffer[7]==69)      //0e  
{ 

tmp[1]=14; 

} 
if(buffer[6]==48 && buffer[7]==70)      //0f  
{ 

tmp[1]=15; 

} 

//----------- 

if(buffer[6]==49 && buffer[7]==48)      //        10 
{ 

tmp[1]=16; 

} 
if(buffer[6]==49 && buffer[7]==49)      //         11 
{ 
 
tmp[1]=17; 

} 
if(buffer[6]==49 && buffer[7]==50)      //         12 
{ 

tmp[1]=18; 

} 
if(buffer[6]==49 && buffer[7]==51)      //         13 
{ 

tmp[1]=19; 

} 
if(buffer[6]==49 && buffer[7]==52)      //         14 
{ 

tmp[1]=20; 

} 
if(buffer[6]==49 && buffer[7]==53)      //         15 
{ 

tmp[1]=21; 

} 
if(buffer[6]==49 && buffer[7]==54)      //         16 
{ 

tmp[1]=22; 

} 
if(buffer[6]==49 && buffer[7]==55)      //         17 
{ 

tmp[1]=23; 

} 
if(buffer[6]==49 && buffer[7]==56)      //         18 
{ 

tmp[1]=24; 

} 
if(buffer[6]==49 && buffer[7]==57)      //         19 
{ 

tmp[1]=25; 

} 
 
if(buffer[6]==49 && buffer[7]==65)      //         1a 
{ 

tmp[1]=26; 

} 
if(buffer[6]==49 && buffer[7]==66)      //         1b 
{ 

tmp[1]=27; 

} 
if(buffer[6]==49 && buffer[7]==67)      //         1c 
{ 

tmp[1]=28; 

} 
if(buffer[6]==49 && buffer[7]==68)      //         1d 
{ 

tmp[1]=29; 

} 
if(buffer[6]==49 && buffer[7]==69)      //         1e 
{ 

tmp[1]=30; 

} 
if(buffer[6]==49 && buffer[7]==70)      //         1f 
{ 

tmp[1]=31; 

} 


//--------------- 


if(buffer[6]==50 && buffer[7]==48)      //         20 
{ 

tmp[1]=32; 

} 

if(buffer[6]==50 && buffer[7]==49)      //         21 
{ 

tmp[1]=33; 

} 
if(buffer[6]==50 && buffer[7]==50)      //         22 
{ 

tmp[1]=34; 

} 
if(buffer[6]==50 && buffer[7]==51)      //         23 
{ 

tmp[1]=35; 

} 
if(buffer[6]==50 && buffer[7]==52)      //         24 
{ 

tmp[1]=36; 

} 
if(buffer[6]==50 && buffer[7]==53)      //         25 
{ 

tmp[1]=37; 

} 
if(buffer[6]==50 && buffer[7]==54)      //         26 
{ 

tmp[1]=38; 

} 
if(buffer[6]==50 && buffer[7]==55)      //         27 
{ 

tmp[1]=39; 

} 
if(buffer[6]==50 && buffer[7]==56)      //         28 
{ 

tmp[1]=40; 

} 
if(buffer[6]==50 && buffer[7]==57)      //         29 
{ 

tmp[1]=41; 

} 
if(buffer[6]==50 && buffer[7]==65)      //         2a 
{ 

tmp[1]=42; 

} 
if(buffer[6]==50 && buffer[7]==66)      //         2b 
{ 

tmp[1]=43; 

} 
if(buffer[6]==50 && buffer[7]==67)      //         2c 
{ 

tmp[1]=44; 

} 

if(buffer[6]==50 && buffer[7]==68)      //       2d  
{ 

tmp[1]=45; 

} 
if(buffer[6]==50 && buffer[7]==69)      //         2e 
{ 

tmp[1]=46; 

} 
if(buffer[6]==50 && buffer[7]==70)      //         2f 
{ 

tmp[1]=47; 

} 

//------------- 


if(buffer[6]==51 && buffer[7]==48)      // 30        
{ 

tmp[1]=48; 

} 

if(buffer[6]==51 && buffer[7]==49)      // 31        
{ 

tmp[1]=49; 

} 
if(buffer[6]==51 && buffer[7]==50)      // 32        
{ 

tmp[1]=50; 

} 
if(buffer[6]==51 && buffer[7]==51)      //33         
{ 

tmp[1]=51; 

} 
if(buffer[6]==51 && buffer[7]==52)      //34        
{ 

tmp[1]=52; 

} 
if(buffer[6]==51 && buffer[7]==53)      //35      
{ 

tmp[1]=53; 

} 
if(buffer[6]==51 && buffer[7]==54)      //36       
{ 

tmp[1]=54; 

} 
if(buffer[6]==51 && buffer[7]==55)      //37     
{ 

tmp[1]=55; 

} 
if(buffer[6]==51 && buffer[7]==56)      //38     
{ 

tmp[1]=56; 

} 
if(buffer[6]==51 && buffer[7]==57)      //39   
{ 

tmp[1]=57; 

} 

if(buffer[6]==51 && buffer[7]==65)      //3a 
{ 
 
tmp[1]=58; 

} 

if(buffer[6]==51 && buffer[7]==66)      //3b 
{ 

tmp[1]=59; 

} 
if(buffer[6]==51 && buffer[7]==67)      //3c 
{ 

tmp[1]=60; 

} 
if(buffer[6]==51 && buffer[7]==68)      //3d 
{ 

tmp[1]=61; 

} 
if(buffer[6]==51 && buffer[7]==69)      //3e  
{ 

tmp[1]=62; 

} 
if(buffer[6]==51 && buffer[7]==70)      //3f  
{ 

tmp[1]=63; 

} 

//------------ 


if(buffer[6]==52 && buffer[7]==48)      // 40       
{ 

tmp[1]=64; 

} 

if(buffer[6]==52 && buffer[7]==49)      // 41        
{ 

tmp[1]=65; 

} 
if(buffer[6]==52 && buffer[7]==50)      // 42        
{ 

tmp[1]=66; 

} 
if(buffer[6]==52 && buffer[7]==51)      //43         
{ 

tmp[1]=67; 

} 
if(buffer[6]==52 && buffer[7]==52)      //44        
{ 

tmp[1]=68; 

} 
if(buffer[6]==52 && buffer[7]==53)      //45      
{ 

tmp[1]=69; 

} 

if(buffer[6]==52 && buffer[7]==54)      //46       
{ 

tmp[1]=70; 

} 
if(buffer[6]==52 && buffer[7]==55)      //47     
{ 

tmp[1]=71; 

} 
if(buffer[6]==52 && buffer[7]==56)      //48     
{ 

tmp[1]=72; 

} 
if(buffer[6]==52 && buffer[7]==57)      //49   
{ 

tmp[1]=73; 

} 

if(buffer[6]==52 && buffer[7]==65)      //4a 
{ 
 
tmp[1]=74; 

} 

if(buffer[6]==52 && buffer[7]==66)      //4b 
{ 

tmp[1]=75; 

} 
if(buffer[6]==52 && buffer[7]==67)      //4c 
{ 

tmp[1]=76; 

} 
if(buffer[6]==52 && buffer[7]==68)      //4d 
{ 

tmp[1]=77; 

} 
if(buffer[6]==52 && buffer[7]==69)      //4e  
{ 

tmp[1]=78; 

} 
if(buffer[6]==52 && buffer[7]==70)      //4f  
{ 

tmp[1]=79; 

} 
//------------ 




if(buffer[6]==53 && buffer[7]==48)      //50       
{ 

tmp[1]=80; 

} 

if(buffer[6]==53 && buffer[7]==49)      //51        
{ 

tmp[1]=81; 

} 
if(buffer[6]==53 && buffer[7]==50)      //52        
{ 

tmp[1]=82; 

} 
if(buffer[6]==53 && buffer[7]==51)      //53         
{ 

tmp[1]=83; 

} 
if(buffer[6]==53 && buffer[7]==52)      //54        
{ 

tmp[1]=84; 

} 
if(buffer[6]==53 && buffer[7]==53)      //55      
{ 

tmp[1]=85; 

} 
if(buffer[6]==53 && buffer[7]==54)      //56       
{ 

tmp[1]=86; 

} 
if(buffer[6]==53 && buffer[7]==55)      //57     
{ 

tmp[1]=87; 

} 
if(buffer[6]==53 && buffer[7]==56)      //58     
{ 

tmp[1]=88; 

} 
if(buffer[6]==53 && buffer[7]==57)      //59   
{ 

tmp[1]=89; 

} 

if(buffer[6]==53 && buffer[7]==65)      //5a 
{ 
 
tmp[1]=90; 

} 

if(buffer[6]==53 && buffer[7]==66)      //5b 
{ 

tmp[1]=91; 

} 
if(buffer[6]==53 && buffer[7]==67)      //5c 
{ 

tmp[1]=92; 

} 
if(buffer[6]==53 && buffer[7]==68)      //5d 
{ 

tmp[1]=93; 

} 
if(buffer[6]==53 && buffer[7]==69)      //5e  
{ 

tmp[1]=94; 

} 
if(buffer[6]==53 && buffer[7]==70)      //5f  
{ 

tmp[1]=95; 

} 
//------------ 




if(buffer[6]==54 && buffer[7]==48)      //60       
{ 

tmp[1]=96; 

} 

if(buffer[6]==54 && buffer[7]==49)      //61        
{ 

tmp[1]=97; 

} 
if(buffer[6]==54 && buffer[7]==50)      //62        
{ 

tmp[1]=98; 

} 
if(buffer[6]==54 && buffer[7]==51)      //63         
{ 

tmp[1]=99; 

} 
if(buffer[6]==54 && buffer[7]==52)      //64        
{ 

tmp[1]=100; 

} 
if(buffer[6]==54 && buffer[7]==53)      //65      
{ 

tmp[1]=101; 

} 
if(buffer[6]==54 && buffer[7]==54)      //66       
{ 

tmp[1]=102; 

} 
if(buffer[6]==54 && buffer[7]==55)      //67     
{ 

tmp[1]=103; 

} 
if(buffer[6]==54 && buffer[7]==56)      //68     
{ 

tmp[1]=104; 

} 
if(buffer[6]==54 && buffer[7]==57)      //69   
{ 

tmp[1]=105; 

} 

if(buffer[6]==54 && buffer[7]==65)      //6a 
{ 
 
tmp[1]=106; 

} 

if(buffer[6]==54 && buffer[7]==66)      //6b 
{ 

tmp[1]=107; 

} 
if(buffer[6]==54 && buffer[7]==67)      //6c 
{ 

tmp[1]=108; 

} 
if(buffer[6]==54 && buffer[7]==68)      //6d 
{ 

tmp[1]=109; 

} 
if(buffer[6]==54 && buffer[7]==69)      //6e  
{ 

tmp[1]=110; 

} 
if(buffer[6]==54 && buffer[7]==70)      //6f  
{ 

tmp[1]=111; 

} 
//------------ 




if(buffer[6]==55 && buffer[7]==48)      //70       
{ 

tmp[1]=112; 

} 

if(buffer[6]==55 && buffer[7]==49)      //71        
{ 

tmp[1]=113; 

} 
if(buffer[6]==55 && buffer[7]==50)      //72        
{ 

tmp[1]=114; 

} 
if(buffer[6]==55 && buffer[7]==51)      //73         
{ 

tmp[1]=115; 

} 
if(buffer[6]==55 && buffer[7]==52)      //74        
{ 

tmp[1]=116; 

} 
if(buffer[6]==55 && buffer[7]==53)      //75      
{ 

tmp[1]=117; 

} 
if(buffer[6]==55 && buffer[7]==54)      //76       
{ 

tmp[1]=118; 

} 
if(buffer[6]==55 && buffer[7]==55)      //77     
{ 

tmp[1]=119; 

} 
if(buffer[6]==55 && buffer[7]==56)      //78     
{ 

tmp[1]=120; 

} 
if(buffer[6]==55 && buffer[7]==57)      //79   
{ 

tmp[1]=121; 

} 

if(buffer[6]==55 && buffer[7]==65)      //7a 
{ 
 
tmp[1]=122; 

} 

if(buffer[6]==55 && buffer[7]==66)      //7b 
{ 

tmp[1]=123; 

} 
if(buffer[6]==55 && buffer[7]==67)      //7c 
{ 

tmp[1]=124; 

} 
if(buffer[6]==55 && buffer[7]==68)      //7d 
{ 

tmp[1]=125; 

} 
if(buffer[6]==55 && buffer[7]==69)      //7e  
{ 

tmp[1]=126; 

} 
if(buffer[6]==55 && buffer[7]==70)      //7f  
{ 

tmp[1]=127; 

} 

//------------ 

if(buffer[6]==56 && buffer[7]==48)      //80       
{ 

tmp[1]=128; 

} 

if(buffer[6]==56 && buffer[7]==49)      //81        
{ 

tmp[1]=129; 

} 
if(buffer[6]==56 && buffer[7]==50)      //82        
{ 

tmp[1]=130; 

} 
if(buffer[6]==56 && buffer[7]==51)      //83         
{ 

tmp[1]=131; 

} 
if(buffer[6]==56 && buffer[7]==52)      //84        
{ 

tmp[1]=132; 

} 
if(buffer[6]==56 && buffer[7]==53)      //85      
{ 

tmp[1]=133; 

} 
if(buffer[6]==56 && buffer[7]==54)      //86       
{ 

tmp[1]=134; 

} 
if(buffer[6]==56 && buffer[7]==55)      //87     
{ 

tmp[1]=135; 

} 
if(buffer[6]==56 && buffer[7]==56)      //88     
{ 

tmp[1]=136; 

} 
if(buffer[6]==56 && buffer[7]==57)      //89   
{ 

tmp[1]=137; 

} 

if(buffer[6]==56 && buffer[7]==65)      //8a 
{ 

tmp[1]=138; 
 
} 

if(buffer[6]==56 && buffer[7]==66)      //8b 
{ 

tmp[1]=139; 

} 
if(buffer[6]==56 && buffer[7]==67)      //8c 
{ 

tmp[1]=140; 

} 
if(buffer[6]==56 && buffer[7]==68)      //8d 
{ 

tmp[1]=141; 

} 
if(buffer[6]==56 && buffer[7]==69)      //8e  
{ 

tmp[1]=142; 

} 
if(buffer[6]==56 && buffer[7]==70)      //8f  
{ 

tmp[1]=143; 

} 
//------------ 


if(buffer[6]==57 && buffer[7]==48)      //90       
{ 

tmp[1]=144; 

} 

if(buffer[6]==57 && buffer[7]==49)      //91        
{ 

tmp[1]=145; 

} 
if(buffer[6]==57 && buffer[7]==50)      //92        
{ 

tmp[1]=146; 

} 
if(buffer[6]==57 && buffer[7]==51)      //93         
{ 

tmp[1]=147; 

} 
if(buffer[6]==57 && buffer[7]==52)      //94        
{ 

tmp[1]=148; 

} 
if(buffer[6]==57 && buffer[7]==53)      //95      
{ 

tmp[1]=149; 

} 
if(buffer[6]==57 && buffer[7]==54)      //96       
{ 

tmp[1]=150; 

} 
if(buffer[6]==57 && buffer[7]==55)      //97     
{ 

tmp[1]=151; 

} 
if(buffer[6]==57 && buffer[7]==56)      //98     
{ 

tmp[1]=152; 

} 
if(buffer[6]==57 && buffer[7]==57)      //99   
{ 

tmp[1]=153; 

} 

if(buffer[6]==57 && buffer[7]==65)      //9a 
{ 

tmp[1]=154; 

} 
 
if(buffer[6]==57 && buffer[7]==66)      //9b 
{ 

tmp[1]=155; 

} 
if(buffer[6]==57 && buffer[7]==67)      //9c 
{ 

tmp[1]=156; 

} 
if(buffer[6]==57 && buffer[7]==68)      //9d 
{ 

tmp[1]=157; 

} 
if(buffer[6]==57 && buffer[7]==69)      //9e  
{ 

tmp[1]=158; 

} 
if(buffer[6]==57 && buffer[7]==70)      //9f  
{ 

tmp[1]=159; 

} 
//------------ 


if(buffer[6]==65 && buffer[7]==48)      //a0       
{ 

tmp[1]=160; 

} 

if(buffer[6]==65 && buffer[7]==49)      //a1        
{ 

tmp[1]=161; 

} 
if(buffer[6]==65 && buffer[7]==50)      //a2        
{ 

tmp[1]=162; 

} 
if(buffer[6]==65 && buffer[7]==51)      //a3         
{ 

tmp[1]=163; 

} 
if(buffer[6]==65 && buffer[7]==52)      //a4        
{ 

tmp[1]=164; 

} 
if(buffer[6]==65 && buffer[7]==53)      //a5      
{ 

tmp[1]=165; 

} 
if(buffer[6]==65 && buffer[7]==54)      //a6       
{ 

tmp[1]=166; 

} 
if(buffer[6]==65 && buffer[7]==55)      //a7     
{ 

tmp[1]=167; 

} 
if(buffer[6]==65 && buffer[7]==56)      //a8     
{ 

tmp[1]=168; 

} 
if(buffer[6]==65 && buffer[7]==57)      //a9   
{ 

tmp[1]=169; 

} 

if(buffer[6]==65 && buffer[7]==65)      //aa 
{ 

tmp[1]=170; 

} 

if(buffer[6]==65 && buffer[7]==66)      //ab 
{ 

tmp[1]=171; 

} 
if(buffer[6]==65 && buffer[7]==67)      //ac 
{ 

tmp[1]=172; 

} 
if(buffer[6]==65 && buffer[7]==68)      //ad 
{ 

tmp[1]=173; 

} 
if(buffer[6]==65 && buffer[7]==69)      //ae  
{ 

tmp[1]=174; 

} 
if(buffer[6]==65 && buffer[7]==70)      //af  
{ 

tmp[1]=175; 

} 
//------------ 


if(buffer[6]==66 && buffer[7]==48)      //b0       
{ 

tmp[1]=176; 

} 

if(buffer[6]==66 && buffer[7]==49)      //b1        
{ 

tmp[1]=177; 

} 
if(buffer[6]==66 && buffer[7]==50)      //b2        
{ 

tmp[1]=178; 

} 
if(buffer[6]==66 && buffer[7]==51)      //b3         
{ 

tmp[1]=179; 

} 
if(buffer[6]==66 && buffer[7]==52)      //b4        
{ 

tmp[1]=180; 

} 
if(buffer[6]==66 && buffer[7]==53)      //b5      
{ 

tmp[1]=181; 

} 
if(buffer[6]==66 && buffer[7]==54)      //b6       
{ 

tmp[1]=182; 

} 
if(buffer[6]==66 && buffer[7]==55)      //b7     
{ 

tmp[1]=183; 

} 
if(buffer[6]==66 && buffer[7]==56)      //b8     
{ 

tmp[1]=184; 

} 
if(buffer[6]==66 && buffer[7]==57)      //b9   
{ 

tmp[1]=185; 

} 

if(buffer[6]==66 && buffer[7]==65)      //ba 
{ 

tmp[1]=186; 

} 

if(buffer[6]==66 && buffer[7]==66)      //bb 
{ 

tmp[1]=187; 

} 
if(buffer[6]==66 && buffer[7]==67)      //bc 
{ 

tmp[1]=188; 

} 
if(buffer[6]==66 && buffer[7]==68)      //bd 
{ 

tmp[1]=189; 

} 
if(buffer[6]==66 && buffer[7]==69)      //be  
{ 

tmp[1]=190; 

} 
if(buffer[6]==66 && buffer[7]==70)      //bf  
{ 

tmp[1]=191; 

} 
//------------ 



if(buffer[6]==67 && buffer[7]==48)      //c0       
{ 

tmp[1]=192; 

} 

if(buffer[6]==67 && buffer[7]==49)      //c1        
{ 

tmp[1]=193; 

} 
if(buffer[6]==67 && buffer[7]==50)      //c2        
{ 

tmp[1]=194; 

} 
if(buffer[6]==67 && buffer[7]==51)      //c3         
{ 
 
tmp[1]=195; 

} 
if(buffer[6]==67 && buffer[7]==52)      //c4        
{ 

tmp[1]=196; 

} 
if(buffer[6]==67 && buffer[7]==53)      //c5      
{ 

tmp[1]=197; 

} 
if(buffer[6]==67 && buffer[7]==54)      //c6       
{ 

tmp[1]=198; 

} 
if(buffer[6]==67 && buffer[7]==55)      //c7     
{ 

tmp[1]=199; 

} 
if(buffer[6]==67 && buffer[7]==56)      //c8     
{ 

tmp[1]=200; 

} 
if(buffer[6]==67 && buffer[7]==57)      //c9   
{ 

tmp[1]=201; 

} 

if(buffer[6]==67 && buffer[7]==65)      //ca 
{ 

tmp[1]=202; 

} 

if(buffer[6]==67 && buffer[7]==66)      //cb 
{ 

tmp[1]=203; 
 
} 
if(buffer[6]==67 && buffer[7]==67)      //cc 
{ 

tmp[1]=204; 

} 
if(buffer[6]==67 && buffer[7]==68)      //cd 
{ 

tmp[1]=205; 

} 
if(buffer[6]==67 && buffer[7]==69)      //ce  
{ 

tmp[1]=206; 

} 
if(buffer[6]==67 && buffer[7]==70)      //cf  
{ 

tmp[1]=207; 

} 
//------------ 


if(buffer[6]==68 && buffer[7]==48)      //d0       
{ 

tmp[1]=208; 

} 

if(buffer[6]==68 && buffer[7]==49)      //d1        
{ 

tmp[1]=209; 

} 
if(buffer[6]==68 && buffer[7]==50)      //d2        
{ 

tmp[1]=210; 

} 
if(buffer[6]==68 && buffer[7]==51)      //d3         
{ 

tmp[1]=211; 
 
} 
if(buffer[6]==68 && buffer[7]==52)      //d4        
{ 

tmp[1]=212; 

} 
if(buffer[6]==68 && buffer[7]==53)      //d5      
{ 

tmp[1]=213; 

} 
if(buffer[6]==68 && buffer[7]==54)      //d6       
{ 

tmp[1]=214; 

} 
if(buffer[6]==68 && buffer[7]==55)      //d7     
{ 

tmp[1]=215; 

} 
if(buffer[6]==68 && buffer[7]==56)      //d8     
{ 

tmp[1]=216; 

} 
if(buffer[6]==68 && buffer[7]==57)      //d9   
{ 

tmp[1]=217; 

} 

if(buffer[6]==68 && buffer[7]==65)      //da 
{ 

tmp[1]=218; 

} 

if(buffer[6]==68 && buffer[7]==66)      //db 
{ 

tmp[1]=219; 

} 
if(buffer[6]==68 && buffer[7]==67)      //dc 
{ 

tmp[1]=220; 

} 
if(buffer[6]==68 && buffer[7]==68)      //dd 
{ 

tmp[1]=221; 

} 
if(buffer[6]==68 && buffer[7]==69)      //de  
{ 

tmp[1]=222; 

} 
if(buffer[6]==68 && buffer[7]==70)      //df  
{ 

tmp[1]=223; 

} 
//------------ 



if(buffer[6]==69 && buffer[7]==48)      //e0       
{ 

tmp[1]=224; 

} 

if(buffer[6]==69 && buffer[7]==49)      //e1        
{ 

tmp[1]=225; 

} 
if(buffer[6]==69 && buffer[7]==50)      //e2        
{ 

tmp[1]=226; 

} 
if(buffer[6]==69 && buffer[7]==51)      //e3         
{ 

tmp[1]=227; 

} 
if(buffer[6]==69 && buffer[7]==52)      //e4        
{ 

tmp[1]=228; 

} 
if(buffer[6]==69 && buffer[7]==53)      //e5      
{ 

tmp[1]=229; 

} 
if(buffer[6]==69 && buffer[7]==54)      //e6       
{ 

tmp[1]=230; 

} 
if(buffer[6]==69 && buffer[7]==55)      //e7     
{ 

tmp[1]=231; 

} 
if(buffer[6]==69 && buffer[7]==56)      //e8     
{ 

tmp[1]=232; 

} 
if(buffer[6]==69 && buffer[7]==57)      //e9   
{ 

tmp[1]=233; 

} 

if(buffer[6]==69 && buffer[7]==65)      //ea 
{ 

tmp[1]=234; 

} 

if(buffer[6]==69 && buffer[7]==66)      //eb 
{ 

tmp[1]=235; 

} 
if(buffer[6]==69 && buffer[7]==67)      //ec 
{ 

tmp[1]=236; 

} 
if(buffer[6]==69 && buffer[7]==68)      //ed 
{ 

tmp[1]=237; 

} 
if(buffer[6]==69 && buffer[7]==69)      //ee  
{ 

tmp[1]=238; 

} 
if(buffer[6]==69 && buffer[7]==70)      //ef  
{ 

tmp[1]=239; 

} 
//------------ 

if(buffer[6]==70 && buffer[7]==48)      //f0       
{ 

tmp[1]=240; 

} 

if(buffer[6]==70 && buffer[7]==49)      //f1        
{ 

tmp[1]=241; 

} 
if(buffer[6]==70 && buffer[7]==50)      //f2        
{ 

tmp[1]=242; 

} 
if(buffer[6]==70 && buffer[7]==51)      //f3         
{ 

tmp[1]=243; 

} 
if(buffer[6]==70 && buffer[7]==52)      //f4        
{ 
 
tmp[1]=244; 

} 
if(buffer[6]==70 && buffer[7]==53)      //f5      
{ 

tmp[1]=245; 

} 
if(buffer[6]==70 && buffer[7]==54)      //f6       
{ 

tmp[1]=246; 

} 
if(buffer[6]==70 && buffer[7]==55)      //f7     
{ 

tmp[1]=247; 

} 
if(buffer[6]==70 && buffer[7]==56)      //f8     
{ 

tmp[1]=248; 

} 
if(buffer[6]==70 && buffer[7]==57)      //f9   
{ 

tmp[1]=249; 

} 

if(buffer[6]==70 && buffer[7]==65)      //fa 
{ 

tmp[1]=250; 

} 

if(buffer[6]==70 && buffer[7]==66)      //fb 
{ 

tmp[1]=251; 

} 
if(buffer[6]==70 && buffer[7]==67)      //fc 
{ 

tmp[1]=252; 
 
} 
if(buffer[6]==70 && buffer[7]==68)      //fd 
{ 

tmp[1]=253; 

} 
if(buffer[6]==70 && buffer[7]==69)      //fe  
{ 

tmp[1]=254; 

} 
if(buffer[6]==70 && buffer[7]==70)      //ff  
{ 

tmp[1]=255; 

} 

//----------------------- end of tmp[1]--------------------------- 


//----------------------- start of tmp[2]--------------------------- 

if(buffer[8]==48 && buffer[9]==48)      //00        
{ 

tmp[2]=0; 

} 

if(buffer[8]==48 && buffer[9]==49)      //01        
{ 

tmp[2]=1; 

} 
if(buffer[8]==48 && buffer[9]==50)      //02        
{ 

tmp[2]=2; 

} 
if(buffer[8]==48 && buffer[9]==51)      //03         
{ 

tmp[2]=3; 

} 
if(buffer[8]==48 && buffer[9]==52)      //04        
{ 

tmp[2]=4; 

} 
if(buffer[8]==48 && buffer[9]==53)      //05      
{ 

tmp[2]=5; 

} 


if(buffer[8]==48 && buffer[9]==54)      //06       
{ 

tmp[2]=6; 

} 
if(buffer[8]==48 && buffer[9]==55)      //07     
{ 

tmp[2]=7; 

} 
if(buffer[8]==48 && buffer[9]==56)      //08     
{ 

tmp[2]=8; 

} 
if(buffer[8]==48 && buffer[9]==57)      //09   
{ 

tmp[2]=9; 

} 

if(buffer[8]==48 && buffer[9]==65)      //0a 
{ 

tmp[2]=10; 

} 

if(buffer[8]==48 && buffer[9]==66)      //0b 
{ 

tmp[2]=11; 

} 
if(buffer[8]==48 && buffer[9]==67)      //0c 
{ 

tmp[2]=12; 

} 
if(buffer[8]==48 && buffer[9]==68)      //0d 
{ 

tmp[2]=13; 

} 
if(buffer[8]==48 && buffer[9]==69)      //0e  
{ 

tmp[2]=14; 

} 
if(buffer[8]==48 && buffer[9]==70)      //0f  
{ 

tmp[2]=15; 

} 

//----------- 

if(buffer[8]==49 && buffer[9]==48)      //        10 
{ 

tmp[2]=16; 

} 
if(buffer[8]==49 && buffer[9]==49)      //         11 
{ 

tmp[2]=17; 

} 
if(buffer[8]==49 && buffer[9]==50)      //         12 
{ 

tmp[2]=18; 

} 
if(buffer[8]==49 && buffer[9]==51)      //         13 
{ 

tmp[2]=19; 

} 
if(buffer[8]==49 && buffer[9]==52)      //         14 
{ 
 
tmp[2]=20; 

} 
if(buffer[8]==49 && buffer[9]==53)      //         15 
{ 

tmp[2]=21; 

} 
if(buffer[8]==49 && buffer[9]==54)      //         16 
{ 

tmp[2]=22; 

} 
if(buffer[8]==49 && buffer[9]==55)      //         17 
{ 

tmp[2]=23; 

} 
if(buffer[8]==49 && buffer[9]==56)      //         18 
{ 

tmp[2]=24; 

} 
if(buffer[8]==49 && buffer[9]==57)      //         19 
{ 

tmp[2]=25; 

} 

if(buffer[8]==49 && buffer[9]==65)      //         1a 
{ 

tmp[2]=26; 

} 
if(buffer[8]==49 && buffer[9]==66)      //         1b 
{ 

tmp[2]=27; 

} 
if(buffer[8]==49 && buffer[9]==67)      //         1c 
{ 

tmp[2]=28; 

} 
if(buffer[8]==49 && buffer[9]==68)      //         1d 
{ 

tmp[2]=29; 

} 
if(buffer[8]==49 && buffer[9]==69)      //         1e 
{ 

tmp[2]=30; 

} 
if(buffer[8]==49 && buffer[9]==70)      //         1f 
{ 

tmp[2]=31; 

} 


//--------------- 


if(buffer[8]==50 && buffer[9]==48)      //         20 
{ 

tmp[2]=32; 

} 

if(buffer[8]==50 && buffer[9]==49)      //         21 
{ 

tmp[2]=33; 

} 
if(buffer[8]==50 && buffer[9]==50)      //         22 
{ 

tmp[2]=34; 

} 
if(buffer[8]==50 && buffer[9]==51)      //         23 
{ 

tmp[2]=35; 

} 
if(buffer[8]==50 && buffer[9]==52)      //         24 
{ 

tmp[2]=36; 

} 
if(buffer[8]==50 && buffer[9]==53)      //         25 
{ 

tmp[2]=37; 

} 
if(buffer[8]==50 && buffer[9]==54)      //         26 
{ 

tmp[2]=38; 

} 
if(buffer[8]==50 && buffer[9]==55)      //         27 
{ 

tmp[2]=39; 

} 
if(buffer[8]==50 && buffer[9]==56)      //         28 
{ 

tmp[2]=40; 

} 
if(buffer[8]==50 && buffer[9]==57)      //         29 
{ 

tmp[2]=41; 

} 
if(buffer[8]==50 && buffer[9]==65)      //         2a 
{ 

tmp[2]=42; 

} 
if(buffer[8]==50 && buffer[9]==66)      //         2b 
{ 

tmp[2]=43; 

} 
if(buffer[8]==50 && buffer[9]==67)      //         2c 
{ 

tmp[2]=44; 

} 

if(buffer[8]==50 && buffer[9]==68)      //       2d  
{ 

tmp[2]=45; 

} 
if(buffer[8]==50 && buffer[9]==69)      //         2e 
{ 

tmp[2]=46; 

} 
if(buffer[8]==50 && buffer[9]==70)      //         2f 
{ 

tmp[2]=47; 

} 

//------------- 


if(buffer[8]==51 && buffer[9]==48)      // 30        
{ 

tmp[2]=48; 

} 

if(buffer[8]==51 && buffer[9]==49)      // 31        
{ 

tmp[2]=49; 

} 
if(buffer[8]==51 && buffer[9]==50)      // 32        
{ 

tmp[2]=50; 

} 
if(buffer[8]==51 && buffer[9]==51)      //33         
{ 

tmp[2]=51; 

} 
if(buffer[8]==51 && buffer[9]==52)      //34        
{ 

tmp[2]=52; 

} 
if(buffer[8]==51 && buffer[9]==53)      //35      
{ 

tmp[2]=53; 

} 
if(buffer[8]==51 && buffer[9]==54)      //36       
{ 

tmp[2]=54; 

} 
if(buffer[8]==51 && buffer[9]==55)      //37     
{ 

tmp[2]=55; 

} 
if(buffer[8]==51 && buffer[9]==56)      //38     
{ 

tmp[2]=56; 

} 
if(buffer[8]==51 && buffer[9]==57)      //39   
{ 

tmp[2]=57; 

} 

if(buffer[8]==51 && buffer[9]==65)      //3a 
{ 

tmp[2]=58; 

} 

if(buffer[8]==51 && buffer[9]==66)      //3b 
{ 

tmp[2]=59; 

} 
if(buffer[8]==51 && buffer[9]==67)      //3c 
{ 

tmp[2]=60; 

} 
if(buffer[8]==51 && buffer[9]==68)      //3d 
{ 

tmp[2]=61; 

} 
if(buffer[8]==51 && buffer[9]==69)      //3e  
{ 

tmp[2]=62; 

} 
if(buffer[8]==51 && buffer[9]==70)      //3f  
{ 

tmp[2]=63; 

} 

//------------ 


if(buffer[8]==52 && buffer[9]==48)      // 40       
{ 

tmp[2]=64; 

} 

if(buffer[8]==52 && buffer[9]==49)      // 41        
{ 

tmp[2]=65; 

} 
if(buffer[8]==52 && buffer[9]==50)      // 42        
{ 

tmp[2]=66; 

} 
if(buffer[8]==52 && buffer[9]==51)      //43         
{ 

tmp[2]=67; 

} 
if(buffer[8]==52 && buffer[9]==52)      //44        
{ 

tmp[2]=68; 

} 
if(buffer[8]==52 && buffer[9]==53)      //45      
{ 

tmp[2]=69; 

} 

if(buffer[8]==52 && buffer[9]==54)      //46       
{ 

tmp[2]=70; 

} 
if(buffer[8]==52 && buffer[9]==55)      //47     
{ 

tmp[2]=71; 

} 
if(buffer[8]==52 && buffer[9]==56)      //48     
{ 

tmp[2]=72; 

} 
if(buffer[8]==52 && buffer[9]==57)      //49   
{ 

tmp[2]=73; 

} 

if(buffer[8]==52 && buffer[9]==65)      //4a 
{ 

tmp[2]=74; 

} 

if(buffer[8]==52 && buffer[9]==66)      //4b 
{ 

tmp[2]=75; 

} 
if(buffer[8]==52 && buffer[9]==67)      //4c 
{ 

tmp[2]=76; 

} 
if(buffer[8]==52 && buffer[9]==68)      //4d 
{ 

tmp[2]=77; 

} 
if(buffer[8]==52 && buffer[9]==69)      //4e  
{ 

tmp[2]=78; 

} 
if(buffer[8]==52 && buffer[9]==70)      //4f  
{ 

tmp[2]=79; 

} 
//------------ 




if(buffer[8]==53 && buffer[9]==48)      //50       
{ 

tmp[2]=80; 

} 

if(buffer[8]==53 && buffer[9]==49)      //51        
{ 

tmp[2]=81; 

} 
if(buffer[8]==53 && buffer[9]==50)      //52        
{ 

tmp[2]=82; 

} 
if(buffer[8]==53 && buffer[9]==51)      //53         
{ 

tmp[2]=83; 

} 
if(buffer[8]==53 && buffer[9]==52)      //54        
{ 

tmp[2]=84; 

} 
if(buffer[8]==53 && buffer[9]==53)      //55      
{ 

tmp[2]=85; 

} 
if(buffer[8]==53 && buffer[9]==54)      //56       
{ 

tmp[2]=86; 

} 
if(buffer[8]==53 && buffer[9]==55)      //57     
{ 

tmp[2]=87; 

} 
if(buffer[8]==53 && buffer[9]==56)      //58     
{ 

tmp[2]=88; 

} 
if(buffer[8]==53 && buffer[9]==57)      //59   
{ 

tmp[2]=89; 

} 

if(buffer[8]==53 && buffer[9]==65)      //5a 
{ 

tmp[2]=90; 

} 

if(buffer[8]==53 && buffer[9]==66)      //5b 
{ 

tmp[2]=91; 

} 
if(buffer[8]==53 && buffer[9]==67)      //5c 
{ 

tmp[2]=92; 

} 
if(buffer[8]==53 && buffer[9]==68)      //5d 
{ 

tmp[2]=93; 

} 
if(buffer[8]==53 && buffer[9]==69)      //5e  
{ 

tmp[2]=94; 

} 
if(buffer[8]==53 && buffer[9]==70)      //5f  
{ 

tmp[2]=95; 

} 
//------------ 




if(buffer[8]==54 && buffer[9]==48)      //60       
{ 

tmp[2]=96; 

} 

if(buffer[8]==54 && buffer[9]==49)      //61        
{ 

tmp[2]=97; 

} 
if(buffer[8]==54 && buffer[9]==50)      //62        
{ 

tmp[2]=98; 

} 
if(buffer[8]==54 && buffer[9]==51)      //63         
{ 

tmp[2]=99; 

} 
if(buffer[8]==54 && buffer[9]==52)      //64        
{ 

tmp[2]=100; 

} 
if(buffer[8]==54 && buffer[9]==53)      //65      
{ 

tmp[2]=101; 

} 
if(buffer[8]==54 && buffer[9]==54)      //66       
{ 

tmp[2]=102; 

} 
if(buffer[8]==54 && buffer[9]==55)      //67     
{ 

tmp[2]=103; 

} 
if(buffer[8]==54 && buffer[9]==56)      //68     
{ 

tmp[2]=104; 

} 
if(buffer[8]==54 && buffer[9]==57)      //69   
{ 

tmp[2]=105; 

} 

if(buffer[8]==54 && buffer[9]==65)      //6a 
{ 

tmp[2]=106; 

} 

if(buffer[8]==54 && buffer[9]==66)      //6b 
{ 

tmp[2]=107; 

} 
if(buffer[8]==54 && buffer[9]==67)      //6c 
{ 

tmp[2]=108; 

} 
if(buffer[8]==54 && buffer[9]==68)      //6d 
{ 

tmp[2]=109; 

} 
if(buffer[8]==54 && buffer[9]==69)      //6e  
{ 

tmp[2]=110; 

} 
if(buffer[8]==54 && buffer[9]==70)      //6f  
{ 

tmp[2]=111; 

} 
//------------ 




if(buffer[8]==55 && buffer[9]==48)      //70       
{ 

tmp[2]=112; 

} 

if(buffer[8]==55 && buffer[9]==49)      //71        
{ 

tmp[2]=113; 

} 
if(buffer[8]==55 && buffer[9]==50)      //72        
{ 

tmp[2]=114; 

} 
if(buffer[8]==55 && buffer[9]==51)      //73         
{ 

tmp[2]=115; 

} 
if(buffer[8]==55 && buffer[9]==52)      //74        
{ 

tmp[2]=116; 

} 
if(buffer[8]==55 && buffer[9]==53)      //75      
{ 

tmp[2]=117; 

} 
if(buffer[8]==55 && buffer[9]==54)      //76       
{ 

tmp[2]=118; 

} 
if(buffer[8]==55 && buffer[9]==55)      //77     
{ 

tmp[2]=119; 

} 
if(buffer[8]==55 && buffer[9]==56)      //78     
{ 

tmp[2]=120; 

} 
if(buffer[8]==55 && buffer[9]==57)      //79   
{ 

tmp[2]=121; 

} 

if(buffer[8]==55 && buffer[9]==65)      //7a 
{ 

tmp[2]=122; 

} 

if(buffer[8]==55 && buffer[9]==66)      //7b 
{ 

tmp[2]=123; 

} 
if(buffer[8]==55 && buffer[9]==67)      //7c 
{ 

tmp[2]=124; 

} 
if(buffer[8]==55 && buffer[9]==68)      //7d 
{ 

tmp[2]=125; 

} 
if(buffer[8]==55 && buffer[9]==69)      //7e  
{ 

tmp[2]=126; 

} 
if(buffer[8]==55 && buffer[9]==70)      //7f  
{ 

tmp[2]=127; 

} 

//------------ 

if(buffer[8]==56 && buffer[9]==48)      //80       
{ 

tmp[2]=128; 

} 

if(buffer[8]==56 && buffer[9]==49)      //81        
{ 

tmp[2]=129; 

} 
if(buffer[8]==56 && buffer[9]==50)      //82        
{ 

tmp[2]=130; 

} 
if(buffer[8]==56 && buffer[9]==51)      //83         
{ 

tmp[2]=131; 

} 
if(buffer[8]==56 && buffer[9]==52)      //84        
{ 

tmp[2]=132; 

} 
if(buffer[8]==56 && buffer[9]==53)      //85      
{ 

tmp[2]=133; 

} 
if(buffer[8]==56 && buffer[9]==54)      //86       
{ 

tmp[2]=134; 

} 
if(buffer[8]==56 && buffer[9]==55)      //87     
{ 

tmp[2]=135; 

} 
if(buffer[8]==56 && buffer[9]==56)      //88     
{ 

tmp[2]=136; 

} 
if(buffer[8]==56 && buffer[9]==57)      //89   
{ 

tmp[2]=137; 

} 

if(buffer[8]==56 && buffer[9]==65)      //8a 
{ 

tmp[2]=138; 

} 

if(buffer[8]==56 && buffer[9]==66)      //8b 
{ 

tmp[2]=139; 

} 
if(buffer[8]==56 && buffer[9]==67)      //8c 
{ 

tmp[2]=140; 

} 
if(buffer[8]==56 && buffer[9]==68)      //8d 
{ 

tmp[2]=141; 

} 
if(buffer[8]==56 && buffer[9]==69)      //8e  
{ 

tmp[2]=142; 

} 
if(buffer[8]==56 && buffer[9]==70)      //8f  
{ 

tmp[2]=143; 

} 
//------------ 


if(buffer[8]==57 && buffer[9]==48)      //90       
{ 

tmp[2]=144; 

} 

if(buffer[8]==57 && buffer[9]==49)      //91        
{ 

tmp[2]=145; 

} 
if(buffer[8]==57 && buffer[9]==50)      //92        
{ 

tmp[2]=146; 

} 
if(buffer[8]==57 && buffer[9]==51)      //93         
{ 

tmp[2]=147; 

} 
if(buffer[8]==57 && buffer[9]==52)      //94        
{ 

tmp[2]=148; 

} 
if(buffer[8]==57 && buffer[9]==53)      //95      
{ 

tmp[2]=149; 

} 
if(buffer[8]==57 && buffer[9]==54)      //96       
{ 

tmp[2]=150; 

} 
if(buffer[8]==57 && buffer[9]==55)      //97     
{ 

tmp[2]=151; 

} 
if(buffer[8]==57 && buffer[9]==56)      //98     
{ 

tmp[2]=152; 

} 
if(buffer[8]==57 && buffer[9]==57)      //99   
{ 

tmp[2]=153; 

} 

if(buffer[8]==57 && buffer[9]==65)      //9a 
{ 

tmp[2]=154; 

} 

if(buffer[8]==57 && buffer[9]==66)      //9b 
{ 

tmp[2]=155; 

} 
if(buffer[8]==57 && buffer[9]==67)      //9c 
{ 

tmp[2]=156; 

} 
if(buffer[8]==57 && buffer[9]==68)      //9d 
{ 

tmp[2]=157; 

} 
if(buffer[8]==57 && buffer[9]==69)      //9e  
{ 

tmp[2]=158; 

} 
if(buffer[8]==57 && buffer[9]==70)      //9f  
{ 

tmp[2]=159; 

} 
//------------ 


if(buffer[8]==65 && buffer[9]==48)      //a0       
{ 

tmp[2]=160; 

} 

if(buffer[8]==65 && buffer[9]==49)      //a1        
{ 

tmp[2]=161; 

} 
if(buffer[8]==65 && buffer[9]==50)      //a2        
{ 

tmp[2]=162; 

} 
if(buffer[8]==65 && buffer[9]==51)      //a3         
{ 

tmp[2]=163; 

} 
if(buffer[8]==65 && buffer[9]==52)      //a4        
{ 

tmp[2]=164; 

} 
if(buffer[8]==65 && buffer[9]==53)      //a5      
{ 

tmp[2]=165; 

} 
if(buffer[8]==65 && buffer[9]==54)      //a6       
{ 

tmp[2]=166; 

} 
if(buffer[8]==65 && buffer[9]==55)      //a7     
{ 

tmp[2]=167; 

} 
if(buffer[8]==65 && buffer[9]==56)      //a8     
{ 

tmp[2]=168; 

} 
if(buffer[8]==65 && buffer[9]==57)      //a9   
{ 

tmp[2]=169; 

} 

if(buffer[8]==65 && buffer[9]==65)      //aa 
{ 

tmp[2]=170; 

} 

if(buffer[8]==65 && buffer[9]==66)      //ab 
{ 

tmp[2]=171; 

} 
if(buffer[8]==65 && buffer[9]==67)      //ac 
{ 

tmp[2]=172; 

} 
if(buffer[8]==65 && buffer[9]==68)      //ad 
{ 

tmp[2]=173; 

} 
if(buffer[8]==65 && buffer[9]==69)      //ae  
{ 

tmp[2]=174; 

} 
if(buffer[8]==65 && buffer[9]==70)      //af  
{ 

tmp[2]=175; 

} 
//------------ 


if(buffer[8]==66 && buffer[9]==48)      //b0       
{ 

tmp[2]=176; 

} 

if(buffer[8]==66 && buffer[9]==49)      //b1        
{ 

tmp[2]=177; 

} 
if(buffer[8]==66 && buffer[9]==50)      //b2        
{ 

tmp[2]=178; 

} 
if(buffer[8]==66 && buffer[9]==51)      //b3         
{ 

tmp[2]=179; 

} 
if(buffer[8]==66 && buffer[9]==52)      //b4        
{ 

tmp[2]=180; 

} 
if(buffer[8]==66 && buffer[9]==53)      //b5      
{ 

tmp[2]=181; 

} 
if(buffer[8]==66 && buffer[9]==54)      //b6       
{ 

tmp[2]=182; 

} 
if(buffer[8]==66 && buffer[9]==55)      //b7     
{ 

tmp[2]=183; 

} 
if(buffer[8]==66 && buffer[9]==56)      //b8     
{ 

tmp[2]=184; 

} 
if(buffer[8]==66 && buffer[9]==57)      //b9   
{ 

tmp[2]=185; 

} 

if(buffer[8]==66 && buffer[9]==65)      //ba 
{ 

tmp[2]=186; 

} 

if(buffer[8]==66 && buffer[9]==66)      //bb 
{ 

tmp[2]=187; 

} 
if(buffer[8]==66 && buffer[9]==67)      //bc 
{ 

tmp[2]=188; 

} 
if(buffer[8]==66 && buffer[9]==68)      //bd 
{ 

tmp[2]=189; 

} 
if(buffer[8]==66 && buffer[9]==69)      //be  
{ 

tmp[2]=190; 

} 
if(buffer[8]==66 && buffer[9]==70)      //bf  
{ 

tmp[2]=191; 

} 
//------------ 



if(buffer[8]==67 && buffer[9]==48)      //c0       
{ 

tmp[2]=192; 

} 

if(buffer[8]==67 && buffer[9]==49)      //c1        
{ 

tmp[2]=193; 

} 
if(buffer[8]==67 && buffer[9]==50)      //c2        
{ 

tmp[2]=194; 

} 
if(buffer[8]==67 && buffer[9]==51)      //c3         
{ 

tmp[2]=195; 

} 
if(buffer[8]==67 && buffer[9]==52)      //c4        
{ 

tmp[2]=196; 

} 
if(buffer[8]==67 && buffer[9]==53)      //c5      
{ 

tmp[2]=197; 

} 
if(buffer[8]==67 && buffer[9]==54)      //c6       
{ 
 
tmp[2]=198; 

} 
if(buffer[8]==67 && buffer[9]==55)      //c7     
{ 

tmp[2]=199; 

} 
if(buffer[8]==67 && buffer[9]==56)      //c8     
{ 

tmp[2]=200; 

} 
if(buffer[8]==67 && buffer[9]==57)      //c9   
{ 

tmp[2]=201; 

} 

if(buffer[8]==67 && buffer[9]==65)      //ca 
{ 

tmp[2]=202; 

} 

if(buffer[8]==67 && buffer[9]==66)      //cb 
{ 

tmp[2]=203; 

} 
if(buffer[8]==67 && buffer[9]==67)      //cc 
{ 

tmp[2]=204; 

} 
if(buffer[8]==67 && buffer[9]==68)      //cd 
{ 

tmp[2]=205; 

} 
if(buffer[8]==67 && buffer[9]==69)      //ce  
{ 

tmp[2]=206; 
 
} 
if(buffer[8]==67 && buffer[9]==70)      //cf  
{ 

tmp[2]=207; 

} 
//------------ 


if(buffer[8]==68 && buffer[9]==48)      //d0       
{ 

tmp[2]=208; 

} 

if(buffer[8]==68 && buffer[9]==49)      //d1        
{ 

tmp[2]=209; 

} 
if(buffer[8]==68 && buffer[9]==50)      //d2        
{ 

tmp[2]=210; 

} 
if(buffer[8]==68 && buffer[9]==51)      //d3         
{ 

tmp[2]=211; 

} 
if(buffer[8]==68 && buffer[9]==52)      //d4        
{ 

tmp[2]=212; 

} 
if(buffer[8]==68 && buffer[9]==53)      //d5      
{ 

tmp[2]=213; 

} 
if(buffer[8]==68 && buffer[9]==54)      //d6       
{ 

tmp[2]=214; 
 
} 
if(buffer[8]==68 && buffer[9]==55)      //d7     
{ 

tmp[2]=215; 

} 
if(buffer[8]==68 && buffer[9]==56)      //d8     
{ 

tmp[2]=216; 

} 
if(buffer[8]==68 && buffer[9]==57)      //d9   
{ 

tmp[2]=217; 

} 

if(buffer[8]==68 && buffer[9]==65)      //da 
{ 

tmp[2]=218; 

} 

if(buffer[8]==68 && buffer[9]==66)      //db 
{ 

tmp[2]=219; 

} 
if(buffer[8]==68 && buffer[9]==67)      //dc 
{ 

tmp[2]=220; 

} 
if(buffer[8]==68 && buffer[9]==68)      //dd 
{ 

tmp[2]=221; 

} 
if(buffer[8]==68 && buffer[9]==69)      //de  
{ 

tmp[2]=222; 

} 
if(buffer[8]==68 && buffer[9]==70)      //df  
{ 

tmp[2]=223; 

} 
//------------ 



if(buffer[8]==69 && buffer[9]==48)      //e0       
{ 

tmp[2]=224; 

} 

if(buffer[8]==69 && buffer[9]==49)      //e1        
{ 

tmp[2]=225; 

} 
if(buffer[8]==69 && buffer[9]==50)      //e2        
{ 

tmp[2]=226; 

} 
if(buffer[8]==69 && buffer[9]==51)      //e3         
{ 

tmp[2]=227; 

} 
if(buffer[8]==69 && buffer[9]==52)      //e4        
{ 

tmp[2]=228; 

} 
if(buffer[8]==69 && buffer[9]==53)      //e5      
{ 

tmp[2]=229; 

} 
if(buffer[8]==69 && buffer[9]==54)      //e6       
{ 

tmp[2]=230; 

} 
if(buffer[8]==69 && buffer[9]==55)      //e7     
{ 

tmp[2]=231; 

} 
if(buffer[8]==69 && buffer[9]==56)      //e8     
{ 

tmp[2]=232; 

} 
if(buffer[8]==69 && buffer[9]==57)      //e9   
{ 

tmp[2]=233; 

} 

if(buffer[8]==69 && buffer[9]==65)      //ea 
{ 

tmp[2]=234; 

} 

if(buffer[8]==69 && buffer[9]==66)      //eb 
{ 

tmp[2]=235; 

} 
if(buffer[8]==69 && buffer[9]==67)      //ec 
{ 

tmp[2]=236; 

} 
if(buffer[8]==69 && buffer[9]==68)      //ed 
{ 

tmp[2]=237; 

} 
if(buffer[8]==69 && buffer[9]==69)      //ee  
{ 

tmp[2]=238; 

} 
if(buffer[8]==69 && buffer[9]==70)      //ef  
{ 

tmp[2]=239; 

} 
//------------ 

if(buffer[8]==70 && buffer[9]==48)      //f0       
{ 

tmp[2]=240; 

} 

if(buffer[8]==70 && buffer[9]==49)      //f1        
{ 

tmp[2]=241; 

} 
if(buffer[8]==70 && buffer[9]==50)      //f2        
{ 

tmp[2]=242; 

} 
if(buffer[8]==70 && buffer[9]==51)      //f3         
{ 

tmp[2]=243; 

} 
if(buffer[8]==70 && buffer[9]==52)      //f4        
{ 

tmp[2]=244; 

} 
if(buffer[8]==70 && buffer[9]==53)      //f5      
{ 

tmp[2]=245; 

} 
if(buffer[8]==70 && buffer[9]==54)      //f6       
{ 

tmp[2]=246; 

} 
if(buffer[8]==70 && buffer[9]==55)      //f7     
{ 
 
tmp[2]=247; 

} 
if(buffer[8]==70 && buffer[9]==56)      //f8     
{ 

tmp[2]=248; 

} 
if(buffer[8]==70 && buffer[9]==57)      //f9   
{ 

tmp[2]=249; 

} 

if(buffer[8]==70 && buffer[9]==65)      //fa 
{ 

tmp[2]=250; 

} 

if(buffer[8]==70 && buffer[9]==66)      //fb 
{ 

tmp[2]=251; 

} 
if(buffer[8]==70 && buffer[9]==67)      //fc 
{ 

tmp[2]=252; 

} 
if(buffer[8]==70 && buffer[9]==68)      //fd 
{ 

tmp[2]=253; 

} 
if(buffer[8]==70 && buffer[9]==69)      //fe  
{ 

tmp[2]=254; 

} 
if(buffer[8]==70 && buffer[9]==70)      //ff  
{ 

tmp[2]=255; 
 
} 

//----------------------- end of tmp[2]--------------------------- 


//----------------------- start of tmp[3]--------------------------- 

if(buffer[10]==48 && buffer[11]==48)      //00        
{ 

tmp[3]=0; 

} 

if(buffer[10]==48 && buffer[11]==49)      //01        
{ 

tmp[3]=1; 

} 
if(buffer[10]==48 && buffer[11]==50)      //02        
{ 

tmp[3]=2; 

} 
if(buffer[10]==48 && buffer[11]==51)      //03         
{ 

tmp[3]=3; 

} 
if(buffer[10]==48 && buffer[11]==52)      //04        
{ 

tmp[3]=4; 

} 
if(buffer[10]==48 && buffer[11]==53)      //05      
{ 

tmp[3]=5; 

} 


if(buffer[10]==48 && buffer[11]==54)      //06       
{ 

tmp[3]=6; 

} 
if(buffer[10]==48 && buffer[11]==55)      //07     
{ 

tmp[3]=7; 

} 
if(buffer[10]==48 && buffer[11]==56)      //08     
{ 

tmp[3]=8; 

} 
if(buffer[10]==48 && buffer[11]==57)      //09   
{ 

tmp[3]=9; 

} 

if(buffer[10]==48 && buffer[11]==65)      //0a 
{ 

tmp[3]=10; 

} 

if(buffer[10]==48 && buffer[11]==66)      //0b 
{ 

tmp[3]=11; 

} 
if(buffer[10]==48 && buffer[11]==67)      //0c 
{ 

tmp[3]=12; 

} 
if(buffer[10]==48 && buffer[11]==68)      //0d 
{ 

tmp[3]=13; 

} 
if(buffer[10]==48 && buffer[11]==69)      //0e  
{ 

tmp[3]=14; 

} 
if(buffer[10]==48 && buffer[11]==70)      //0f  
{ 

tmp[3]=15; 

} 

//----------- 

if(buffer[10]==49 && buffer[11]==48)      //        10 
{ 

tmp[3]=16; 

} 
if(buffer[10]==49 && buffer[11]==49)      //         11 
{ 

tmp[3]=17; 

} 
if(buffer[10]==49 && buffer[11]==50)      //         12 
{ 

tmp[3]=18; 

} 
if(buffer[10]==49 && buffer[11]==51)      //         13 
{ 

tmp[3]=19; 

} 
if(buffer[10]==49 && buffer[11]==52)      //         14 
{ 

tmp[3]=20; 

} 
if(buffer[10]==49 && buffer[11]==53)      //         15 
{ 

tmp[3]=21; 

} 
if(buffer[10]==49 && buffer[11]==54)      //         16 
{ 

tmp[3]=22; 

} 
if(buffer[10]==49 && buffer[11]==55)      //         17 
{ 
 
tmp[3]=23; 

} 
if(buffer[10]==49 && buffer[11]==56)      //         18 
{ 

tmp[3]=24; 

} 
if(buffer[10]==49 && buffer[11]==57)      //         19 
{ 

tmp[3]=25; 

} 

if(buffer[10]==49 && buffer[11]==65)      //         1a 
{ 

tmp[3]=26; 

} 
if(buffer[10]==49 && buffer[11]==66)      //         1b 
{ 

tmp[3]=27; 

} 
if(buffer[10]==49 && buffer[11]==67)      //         1c 
{ 

tmp[3]=28; 

} 
if(buffer[10]==49 && buffer[11]==68)      //         1d 
{ 

tmp[3]=29; 

} 
if(buffer[10]==49 && buffer[11]==69)      //         1e 
{ 

tmp[3]=30; 

} 
if(buffer[10]==49 && buffer[11]==70)      //         1f 
{ 

tmp[3]=31; 

} 


//--------------- 


if(buffer[10]==50 && buffer[11]==48)      //         20 
{ 

tmp[3]=32; 

} 

if(buffer[10]==50 && buffer[11]==49)      //         21 
{ 

tmp[3]=33; 

} 
if(buffer[10]==50 && buffer[11]==50)      //         22 
{ 

tmp[3]=34; 

} 
if(buffer[10]==50 && buffer[11]==51)      //         23 
{ 

tmp[3]=35; 

} 
if(buffer[10]==50 && buffer[11]==52)      //         24 
{ 

tmp[3]=36; 

} 
if(buffer[10]==50 && buffer[11]==53)      //         25 
{ 

tmp[3]=37; 

} 
if(buffer[10]==50 && buffer[11]==54)      //         26 
{ 

tmp[3]=38; 

} 
if(buffer[10]==50 && buffer[11]==55)      //         27 
{ 

tmp[3]=39; 

} 
if(buffer[10]==50 && buffer[11]==56)      //         28 
{ 

tmp[3]=40; 

} 
if(buffer[10]==50 && buffer[11]==57)      //         29 
{ 

tmp[3]=41; 

} 
if(buffer[10]==50 && buffer[11]==65)      //         2a 
{ 

tmp[3]=42; 

} 
if(buffer[10]==50 && buffer[11]==66)      //         2b 
{ 

tmp[3]=43; 

} 
if(buffer[10]==50 && buffer[11]==67)      //         2c 
{ 

tmp[3]=44; 

} 

if(buffer[10]==50 && buffer[11]==68)      //       2d  
{ 

tmp[3]=45; 

} 
if(buffer[10]==50 && buffer[11]==69)      //         2e 
{ 

tmp[3]=46; 

} 
if(buffer[10]==50 && buffer[11]==70)      //         2f 
{ 

tmp[3]=47; 

} 
 
//------------- 


if(buffer[10]==51 && buffer[11]==48)      // 30        
{ 

tmp[3]=48; 

} 

if(buffer[10]==51 && buffer[11]==49)      // 31        
{ 

tmp[3]=49; 

} 
if(buffer[10]==51 && buffer[11]==50)      // 32        
{ 

tmp[3]=50; 

} 
if(buffer[10]==51 && buffer[11]==51)      //33         
{ 

tmp[3]=51; 

} 
if(buffer[10]==51 && buffer[11]==52)      //34        
{ 

tmp[3]=52; 

} 
if(buffer[10]==51 && buffer[11]==53)      //35      
{ 

tmp[3]=53; 

} 
if(buffer[10]==51 && buffer[11]==54)      //36       
{ 

tmp[3]=54; 

} 
if(buffer[10]==51 && buffer[11]==55)      //37     
{ 

tmp[3]=55; 

} 
if(buffer[10]==51 && buffer[11]==56)      //38     
{ 

tmp[3]=56; 

} 
if(buffer[10]==51 && buffer[11]==57)      //39   
{ 

tmp[3]=57; 

} 

if(buffer[10]==51 && buffer[11]==65)      //3a 
{ 

tmp[3]=58; 

} 

if(buffer[10]==51 && buffer[11]==66)      //3b 
{ 

tmp[3]=59; 

} 
if(buffer[10]==51 && buffer[11]==67)      //3c 
{ 

tmp[3]=60; 

} 
if(buffer[10]==51 && buffer[11]==68)      //3d 
{ 

tmp[3]=61; 

} 
if(buffer[10]==51 && buffer[11]==69)      //3e  
{ 

tmp[3]=62; 

} 
if(buffer[10]==51 && buffer[11]==70)      //3f  
{ 

tmp[3]=63; 

} 

//------------ 


if(buffer[10]==52 && buffer[11]==48)      // 40       
{ 

tmp[3]=64; 

} 

if(buffer[10]==52 && buffer[11]==49)      // 41        
{ 

tmp[3]=65; 

} 
if(buffer[10]==52 && buffer[11]==50)      // 42        
{ 

tmp[3]=66; 

} 
if(buffer[10]==52 && buffer[11]==51)      //43         
{ 

tmp[3]=67; 

} 
if(buffer[10]==52 && buffer[11]==52)      //44        
{ 

tmp[3]=68; 

} 
if(buffer[10]==52 && buffer[11]==53)      //45      
{ 

tmp[3]=69; 

} 

if(buffer[10]==52 && buffer[11]==54)      //46       
{ 

tmp[3]=70; 

} 
if(buffer[10]==52 && buffer[11]==55)      //47     
{ 

tmp[3]=71; 

} 
if(buffer[10]==52 && buffer[11]==56)      //48     
{ 

tmp[3]=72; 

} 
if(buffer[10]==52 && buffer[11]==57)      //49   
{ 

tmp[3]=73; 

} 

if(buffer[10]==52 && buffer[11]==65)      //4a 
{ 

tmp[3]=74; 

} 

if(buffer[10]==52 && buffer[11]==66)      //4b 
{ 

tmp[3]=75; 

} 
if(buffer[10]==52 && buffer[11]==67)      //4c 
{ 

tmp[3]=76; 

} 
if(buffer[10]==52 && buffer[11]==68)      //4d 
{ 

tmp[3]=77; 

} 
if(buffer[10]==52 && buffer[11]==69)      //4e  
{ 

tmp[3]=78; 

} 
if(buffer[10]==52 && buffer[11]==70)      //4f  
{ 

tmp[3]=79; 

} 
//------------ 
 



if(buffer[10]==53 && buffer[11]==48)      //50       
{ 

tmp[3]=80; 

} 

if(buffer[10]==53 && buffer[11]==49)      //51        
{ 

tmp[3]=81; 

} 
if(buffer[10]==53 && buffer[11]==50)      //52        
{ 

tmp[3]=82; 

} 
if(buffer[10]==53 && buffer[11]==51)      //53         
{ 

tmp[3]=83; 

} 
if(buffer[10]==53 && buffer[11]==52)      //54        
{ 

tmp[3]=84; 

} 
if(buffer[10]==53 && buffer[11]==53)      //55      
{ 

tmp[3]=85; 

} 
if(buffer[10]==53 && buffer[11]==54)      //56       
{ 

tmp[3]=86; 

} 
if(buffer[10]==53 && buffer[11]==55)      //57     
{ 

tmp[3]=87; 

} 
if(buffer[10]==53 && buffer[11]==56)      //58     
{ 

tmp[3]=88; 

} 
if(buffer[10]==53 && buffer[11]==57)      //59   
{ 

tmp[3]=89; 

} 

if(buffer[10]==53 && buffer[11]==65)      //5a 
{ 

tmp[3]=90; 

} 

if(buffer[10]==53 && buffer[11]==66)      //5b 
{ 

tmp[3]=91; 

} 
if(buffer[10]==53 && buffer[11]==67)      //5c 
{ 

tmp[3]=92; 

} 
if(buffer[10]==53 && buffer[11]==68)      //5d 
{ 

tmp[3]=93; 

} 
if(buffer[10]==53 && buffer[11]==69)      //5e  
{ 

tmp[3]=94; 

} 
if(buffer[10]==53 && buffer[11]==70)      //5f  
{ 

tmp[3]=95; 

} 
//------------ 
 



if(buffer[10]==54 && buffer[11]==48)      //60       
{ 

tmp[3]=96; 

} 

if(buffer[10]==54 && buffer[11]==49)      //61        
{ 

tmp[3]=97; 

} 
if(buffer[10]==54 && buffer[11]==50)      //62        
{ 

tmp[3]=98; 

} 
if(buffer[10]==54 && buffer[11]==51)      //63         
{ 

tmp[3]=99; 

} 
if(buffer[10]==54 && buffer[11]==52)      //64        
{ 

tmp[3]=100; 

} 
if(buffer[10]==54 && buffer[11]==53)      //65      
{ 

tmp[3]=101; 

} 
if(buffer[10]==54 && buffer[11]==54)      //66       
{ 

tmp[3]=102; 

} 
if(buffer[10]==54 && buffer[11]==55)      //67     
{ 

tmp[3]=103; 

} 
if(buffer[10]==54 && buffer[11]==56)      //68     
{ 

tmp[3]=104; 

} 
if(buffer[10]==54 && buffer[11]==57)      //69   
{ 

tmp[3]=105; 

} 

if(buffer[10]==54 && buffer[11]==65)      //6a 
{ 

tmp[3]=106; 

} 

if(buffer[10]==54 && buffer[11]==66)      //6b 
{ 

tmp[3]=107; 

} 
if(buffer[10]==54 && buffer[11]==67)      //6c 
{ 

tmp[3]=108; 

} 
if(buffer[10]==54 && buffer[11]==68)      //6d 
{ 

tmp[3]=109; 

} 
if(buffer[10]==54 && buffer[11]==69)      //6e  
{ 

tmp[3]=110; 

} 
if(buffer[10]==54 && buffer[11]==70)      //6f  
{ 

tmp[3]=111; 

} 
//------------ 
 



if(buffer[10]==55 && buffer[11]==48)      //70       
{ 

tmp[3]=112; 

} 

if(buffer[10]==55 && buffer[11]==49)      //71        
{ 

tmp[3]=113; 

} 
if(buffer[10]==55 && buffer[11]==50)      //72        
{ 

tmp[3]=114; 

} 
if(buffer[10]==55 && buffer[11]==51)      //73         
{ 

tmp[3]=115; 

} 
if(buffer[10]==55 && buffer[11]==52)      //74        
{ 

tmp[3]=116; 

} 
if(buffer[10]==55 && buffer[11]==53)      //75      
{ 

tmp[3]=117; 

} 
if(buffer[10]==55 && buffer[11]==54)      //76       
{ 

tmp[3]=118; 

} 
if(buffer[10]==55 && buffer[11]==55)      //77     
{ 

tmp[3]=119; 

} 
if(buffer[10]==55 && buffer[11]==56)      //78     
{ 

tmp[3]=120; 

} 
if(buffer[10]==55 && buffer[11]==57)      //79   
{ 

tmp[3]=121; 

} 

if(buffer[10]==55 && buffer[11]==65)      //7a 
{ 

tmp[3]=122; 

} 

if(buffer[10]==55 && buffer[11]==66)      //7b 
{ 

tmp[3]=123; 

} 
if(buffer[10]==55 && buffer[11]==67)      //7c 
{ 

tmp[3]=124; 

} 
if(buffer[10]==55 && buffer[11]==68)      //7d 
{ 

tmp[3]=125; 

} 
if(buffer[10]==55 && buffer[11]==69)      //7e  
{ 

tmp[3]=126; 

} 
if(buffer[10]==55 && buffer[11]==70)      //7f  
{ 

tmp[3]=127; 

} 

//------------ 

if(buffer[10]==56 && buffer[11]==48)      //80       
{ 

tmp[3]=128; 

} 

if(buffer[10]==56 && buffer[11]==49)      //81        
{ 

tmp[3]=129; 

} 
if(buffer[10]==56 && buffer[11]==50)      //82        
{ 

tmp[3]=130; 

} 
if(buffer[10]==56 && buffer[11]==51)      //83         
{ 

tmp[3]=131; 

} 
if(buffer[10]==56 && buffer[11]==52)      //84        
{ 

tmp[3]=132; 

} 
if(buffer[10]==56 && buffer[11]==53)      //85      
{ 

tmp[3]=133; 

} 
if(buffer[10]==56 && buffer[11]==54)      //86       
{ 

tmp[3]=134; 

} 
if(buffer[10]==56 && buffer[11]==55)      //87     
{ 

tmp[3]=135; 

} 
if(buffer[10]==56 && buffer[11]==56)      //88     
{ 

tmp[3]=136; 

} 
if(buffer[10]==56 && buffer[11]==57)      //89   
{ 

tmp[3]=137; 

} 

if(buffer[10]==56 && buffer[11]==65)      //8a 
{ 

tmp[3]=138; 

} 

if(buffer[10]==56 && buffer[11]==66)      //8b 
{ 

tmp[3]=139; 

} 
if(buffer[10]==56 && buffer[11]==67)      //8c 
{ 

tmp[3]=140; 

} 
if(buffer[10]==56 && buffer[11]==68)      //8d 
{ 

tmp[3]=141; 

} 
if(buffer[10]==56 && buffer[11]==69)      //8e  
{ 

tmp[3]=142; 

} 
if(buffer[10]==56 && buffer[11]==70)      //8f  
{ 

tmp[3]=143; 

} 
//------------ 


if(buffer[10]==57 && buffer[11]==48)      //90       
{ 

tmp[3]=144; 

} 

if(buffer[10]==57 && buffer[11]==49)      //91        
{ 

tmp[3]=145; 

} 
if(buffer[10]==57 && buffer[11]==50)      //92        
{ 

tmp[3]=146; 

} 
if(buffer[10]==57 && buffer[11]==51)      //93         
{ 

tmp[3]=147; 

} 
if(buffer[10]==57 && buffer[11]==52)      //94        
{ 

tmp[3]=148; 

} 
if(buffer[10]==57 && buffer[11]==53)      //95      
{ 

tmp[3]=149; 

} 
if(buffer[10]==57 && buffer[11]==54)      //96       
{ 

tmp[3]=150; 

} 
if(buffer[10]==57 && buffer[11]==55)      //97     
{ 

tmp[3]=151; 

} 
if(buffer[10]==57 && buffer[11]==56)      //98     
{ 

tmp[3]=152; 

} 
if(buffer[10]==57 && buffer[11]==57)      //99   
{ 

tmp[3]=153; 

} 

if(buffer[10]==57 && buffer[11]==65)      //9a 
{ 

tmp[3]=154; 

} 

if(buffer[10]==57 && buffer[11]==66)      //9b 
{ 

tmp[3]=155; 

} 
if(buffer[10]==57 && buffer[11]==67)      //9c 
{ 

tmp[3]=156; 

} 
if(buffer[10]==57 && buffer[11]==68)      //9d 
{ 

tmp[3]=157; 

} 
if(buffer[10]==57 && buffer[11]==69)      //9e  
{ 

tmp[3]=158; 

} 
if(buffer[10]==57 && buffer[11]==70)      //9f  
{ 

tmp[3]=159; 

} 
//------------ 


if(buffer[10]==65 && buffer[11]==48)      //a0       
{ 
 
tmp[3]=160; 

} 

if(buffer[10]==65 && buffer[11]==49)      //a1        
{ 

tmp[3]=161; 

} 
if(buffer[10]==65 && buffer[11]==50)      //a2        
{ 

tmp[3]=162; 

} 
if(buffer[10]==65 && buffer[11]==51)      //a3         
{ 

tmp[3]=163; 

} 
if(buffer[10]==65 && buffer[11]==52)      //a4        
{ 

tmp[3]=164; 

} 
if(buffer[10]==65 && buffer[11]==53)      //a5      
{ 

tmp[3]=165; 

} 
if(buffer[10]==65 && buffer[11]==54)      //a6       
{ 

tmp[3]=166; 

} 
if(buffer[10]==65 && buffer[11]==55)      //a7     
{ 

tmp[3]=167; 

} 
if(buffer[10]==65 && buffer[11]==56)      //a8     
{ 

tmp[3]=168; 

} 
if(buffer[10]==65 && buffer[11]==57)      //a9   
{ 

tmp[3]=169; 

} 

if(buffer[10]==65 && buffer[11]==65)      //aa 
{ 

tmp[3]=170; 

} 

if(buffer[10]==65 && buffer[11]==66)      //ab 
{ 

tmp[3]=171; 

} 
if(buffer[10]==65 && buffer[11]==67)      //ac 
{ 

tmp[3]=172; 

} 
if(buffer[10]==65 && buffer[11]==68)      //ad 
{ 

tmp[3]=173; 

} 
if(buffer[10]==65 && buffer[11]==69)      //ae  
{ 

tmp[3]=174; 

} 
if(buffer[10]==65 && buffer[11]==70)      //af  
{ 

tmp[3]=175; 

} 
//------------ 


if(buffer[10]==66 && buffer[11]==48)      //b0       
{ 

tmp[3]=176; 
 
} 

if(buffer[10]==66 && buffer[11]==49)      //b1        
{ 

tmp[3]=177; 

} 
if(buffer[10]==66 && buffer[11]==50)      //b2        
{ 

tmp[3]=178; 

} 
if(buffer[10]==66 && buffer[11]==51)      //b3         
{ 

tmp[3]=179; 

} 
if(buffer[10]==66 && buffer[11]==52)      //b4        
{ 

tmp[3]=180; 

} 
if(buffer[10]==66 && buffer[11]==53)      //b5      
{ 

tmp[3]=181; 

} 
if(buffer[10]==66 && buffer[11]==54)      //b6       
{ 

tmp[3]=182; 

} 
if(buffer[10]==66 && buffer[11]==55)      //b7     
{ 

tmp[3]=183; 

} 
if(buffer[10]==66 && buffer[11]==56)      //b8     
{ 

tmp[3]=184; 

} 
if(buffer[10]==66 && buffer[11]==57)      //b9   
{ 

tmp[3]=185; 

} 

if(buffer[10]==66 && buffer[11]==65)      //ba 
{ 

tmp[3]=186; 

} 

if(buffer[10]==66 && buffer[11]==66)      //bb 
{ 

tmp[3]=187; 

} 
if(buffer[10]==66 && buffer[11]==67)      //bc 
{ 

tmp[3]=188; 

} 
if(buffer[10]==66 && buffer[11]==68)      //bd 
{ 

tmp[3]=189; 

} 
if(buffer[10]==66 && buffer[11]==69)      //be  
{ 

tmp[3]=190; 

} 
if(buffer[10]==66 && buffer[11]==70)      //bf  
{ 

tmp[3]=191; 

} 
//------------ 



if(buffer[10]==67 && buffer[11]==48)      //c0       
{ 

tmp[3]=192; 

} 

if(buffer[10]==67 && buffer[11]==49)      //c1        
{ 

tmp[3]=193; 

} 
if(buffer[10]==67 && buffer[11]==50)      //c2        
{ 

tmp[3]=194; 

} 
if(buffer[10]==67 && buffer[11]==51)      //c3         
{ 

tmp[3]=195; 

} 
if(buffer[10]==67 && buffer[11]==52)      //c4        
{ 

tmp[3]=196; 

} 
if(buffer[10]==67 && buffer[11]==53)      //c5      
{ 

tmp[3]=197; 

} 
if(buffer[10]==67 && buffer[11]==54)      //c6       
{ 

tmp[3]=198; 

} 
if(buffer[10]==67 && buffer[11]==55)      //c7     
{ 

tmp[3]=199; 

} 
if(buffer[10]==67 && buffer[11]==56)      //c8     
{ 

tmp[3]=200; 

} 
if(buffer[10]==67 && buffer[11]==57)      //c9   
{ 
 
tmp[3]=201; 

} 

if(buffer[10]==67 && buffer[11]==65)      //ca 
{ 

tmp[3]=202; 

} 

if(buffer[10]==67 && buffer[11]==66)      //cb 
{ 

tmp[3]=203; 

} 
if(buffer[10]==67 && buffer[11]==67)      //cc 
{ 

tmp[3]=204; 

} 
if(buffer[10]==67 && buffer[11]==68)      //cd 
{ 

tmp[3]=205; 

} 
if(buffer[10]==67 && buffer[11]==69)      //ce  
{ 

tmp[3]=206; 

} 
if(buffer[10]==67 && buffer[11]==70)      //cf  
{ 

tmp[3]=207; 

} 
//------------ 


if(buffer[10]==68 && buffer[11]==48)      //d0       
{ 

tmp[3]=208; 

} 

if(buffer[10]==68 && buffer[11]==49)      //d1        
{ 

tmp[3]=209; 

} 
if(buffer[10]==68 && buffer[11]==50)      //d2        
{ 

tmp[3]=210; 

} 
if(buffer[10]==68 && buffer[11]==51)      //d3         
{ 

tmp[3]=211; 

} 
if(buffer[10]==68 && buffer[11]==52)      //d4        
{ 

tmp[3]=212; 

} 
if(buffer[10]==68 && buffer[11]==53)      //d5      
{ 

tmp[3]=213; 

} 
if(buffer[10]==68 && buffer[11]==54)      //d6       
{ 

tmp[3]=214; 

} 
if(buffer[10]==68 && buffer[11]==55)      //d7     
{ 

tmp[3]=215; 

} 
if(buffer[10]==68 && buffer[11]==56)      //d8     
{ 

tmp[3]=216; 

} 
if(buffer[10]==68 && buffer[11]==57)      //d9   
{ 

tmp[3]=217; 
 
} 

if(buffer[10]==68 && buffer[11]==65)      //da 
{ 

tmp[3]=218; 

} 

if(buffer[10]==68 && buffer[11]==66)      //db 
{ 

tmp[3]=219; 

} 
if(buffer[10]==68 && buffer[11]==67)      //dc 
{ 

tmp[3]=220; 

} 
if(buffer[10]==68 && buffer[11]==68)      //dd 
{ 

tmp[3]=221; 

} 
if(buffer[10]==68 && buffer[11]==69)      //de  
{ 

tmp[3]=222; 

} 
if(buffer[10]==68 && buffer[11]==70)      //df  
{ 

tmp[3]=223; 

} 
//------------ 



if(buffer[10]==69 && buffer[11]==48)      //e0       
{ 

tmp[3]=224; 

} 

if(buffer[10]==69 && buffer[11]==49)      //e1        
{ 

tmp[3]=225; 

} 
if(buffer[10]==69 && buffer[11]==50)      //e2        
{ 

tmp[3]=226; 

} 
if(buffer[10]==69 && buffer[11]==51)      //e3         
{ 

tmp[3]=227; 

} 
if(buffer[10]==69 && buffer[11]==52)      //e4        
{ 

tmp[3]=228; 

} 
if(buffer[10]==69 && buffer[11]==53)      //e5      
{ 

tmp[3]=229; 

} 
if(buffer[10]==69 && buffer[11]==54)      //e6       
{ 

tmp[3]=230; 

} 
if(buffer[10]==69 && buffer[11]==55)      //e7     
{ 

tmp[3]=231; 

} 
if(buffer[10]==69 && buffer[11]==56)      //e8     
{ 

tmp[3]=232; 

} 
if(buffer[10]==69 && buffer[11]==57)      //e9   
{ 

tmp[3]=233; 

} 

if(buffer[10]==69 && buffer[11]==65)      //ea 
{ 

tmp[3]=234; 

} 

if(buffer[10]==69 && buffer[11]==66)      //eb 
{ 

tmp[3]=235; 

} 
if(buffer[10]==69 && buffer[11]==67)      //ec 
{ 

tmp[3]=236; 

} 
if(buffer[10]==69 && buffer[11]==68)      //ed 
{ 

tmp[3]=237; 

} 
if(buffer[10]==69 && buffer[11]==69)      //ee  
{ 

tmp[3]=238; 

} 
if(buffer[10]==69 && buffer[11]==70)      //ef  
{ 

tmp[3]=239; 

} 
//------------ 

if(buffer[10]==70 && buffer[11]==48)      //f0       
{ 

tmp[3]=240; 

} 

if(buffer[10]==70 && buffer[11]==49)      //f1        
{ 

tmp[3]=241; 
 
} 
if(buffer[10]==70 && buffer[11]==50)      //f2        
{ 

tmp[3]=242; 

} 
if(buffer[10]==70 && buffer[11]==51)      //f3         
{ 

tmp[3]=243; 

} 
if(buffer[10]==70 && buffer[11]==52)      //f4        
{ 

tmp[3]=244; 

} 
if(buffer[10]==70 && buffer[11]==53)      //f5      
{ 

tmp[3]=245; 

} 
if(buffer[10]==70 && buffer[11]==54)      //f6       
{ 

tmp[3]=246; 

} 
if(buffer[10]==70 && buffer[11]==55)      //f7     
{ 

tmp[3]=247; 

} 
if(buffer[10]==70 && buffer[11]==56)      //f8     
{ 

tmp[3]=248; 

} 
if(buffer[10]==70 && buffer[11]==57)      //f9   
{ 

tmp[3]=249; 

} 

if(buffer[10]==70 && buffer[11]==65)      //fa 
{ 

tmp[3]=250; 

} 

if(buffer[10]==70 && buffer[11]==66)      //fb 
{ 

tmp[3]=251; 

} 
if(buffer[10]==70 && buffer[11]==67)      //fc 
{ 

tmp[3]=252; 

} 
if(buffer[10]==70 && buffer[11]==68)      //fd 
{ 

tmp[3]=253; 

} 
if(buffer[10]==70 && buffer[11]==69)      //fe  
{ 

tmp[3]=254; 

} 
if(buffer[10]==70 && buffer[11]==70)      //ff  
{ 

tmp[3]=255; 

} 

//----------------------- end of tmp[3]--------------------------- 

//----------------------- start of tmp[4]--------------------------- 

if(buffer[12]==48 && buffer[13]==48)      //00        
{ 

tmp[4]=0; 

} 

if(buffer[12]==48 && buffer[13]==49)      //01        
{ 

tmp[4]=1; 
 
} 
if(buffer[12]==48 && buffer[13]==50)      //02        
{ 

tmp[4]=2; 

} 
if(buffer[12]==48 && buffer[13]==51)      //03         
{ 

tmp[4]=3; 

} 
if(buffer[12]==48 && buffer[13]==52)      //04        
{ 

tmp[4]=4; 

} 
if(buffer[12]==48 && buffer[13]==53)      //05      
{ 

tmp[4]=5; 

} 


if(buffer[12]==48 && buffer[13]==54)      //06       
{ 

tmp[4]=6; 

} 
if(buffer[12]==48 && buffer[13]==55)      //07     
{ 

tmp[4]=7; 

} 
if(buffer[12]==48 && buffer[13]==56)      //08     
{ 

tmp[4]=8; 

} 
if(buffer[12]==48 && buffer[13]==57)      //09   
{ 

tmp[4]=9; 

} 
 
if(buffer[12]==48 && buffer[13]==65)      //0a 
{ 

tmp[4]=10; 

} 

if(buffer[12]==48 && buffer[13]==66)      //0b 
{ 

tmp[4]=11; 

} 
if(buffer[12]==48 && buffer[13]==67)      //0c 
{ 

tmp[4]=12; 

} 
if(buffer[12]==48 && buffer[13]==68)      //0d 
{ 

tmp[4]=13; 

} 
if(buffer[12]==48 && buffer[13]==69)      //0e  
{ 

tmp[4]=14; 

} 
if(buffer[12]==48 && buffer[13]==70)      //0f  
{ 

tmp[4]=15; 

} 

//----------- 

if(buffer[12]==49 && buffer[13]==48)      //        10 
{ 

tmp[4]=16; 

} 
if(buffer[12]==49 && buffer[13]==49)      //         11 
{ 

tmp[4]=17; 

} 
if(buffer[12]==49 && buffer[13]==50)      //         12 
{ 

tmp[4]=18; 

} 
if(buffer[12]==49 && buffer[13]==51)      //         13 
{ 

tmp[4]=19; 

} 
if(buffer[12]==49 && buffer[13]==52)      //         14 
{ 

tmp[4]=20; 

} 
if(buffer[12]==49 && buffer[13]==53)      //         15 
{ 

tmp[4]=21; 

} 
if(buffer[12]==49 && buffer[13]==54)      //         16 
{ 

tmp[4]=22; 

} 
if(buffer[12]==49 && buffer[13]==55)      //         17 
{ 

tmp[4]=23; 

} 
if(buffer[12]==49 && buffer[13]==56)      //         18 
{ 

tmp[4]=24; 

} 
if(buffer[12]==49 && buffer[13]==57)      //         19 
{ 

tmp[4]=25; 

} 

if(buffer[12]==49 && buffer[13]==65)      //         1a 
{ 
 
tmp[4]=26; 

} 
if(buffer[12]==49 && buffer[13]==66)      //         1b 
{ 

tmp[4]=27; 

} 
if(buffer[12]==49 && buffer[13]==67)      //         1c 
{ 

tmp[4]=28; 

} 
if(buffer[12]==49 && buffer[13]==68)      //         1d 
{ 

tmp[4]=29; 

} 
if(buffer[12]==49 && buffer[13]==69)      //         1e 
{ 

tmp[4]=30; 

} 
if(buffer[12]==49 && buffer[13]==70)      //         1f 
{ 

tmp[4]=31; 

} 


//--------------- 


if(buffer[12]==50 && buffer[13]==48)      //         20 
{ 

tmp[4]=32; 

} 

if(buffer[12]==50 && buffer[13]==49)      //         21 
{ 

tmp[4]=33; 

} 
if(buffer[12]==50 && buffer[13]==50)      //         22 
{ 

tmp[4]=34; 

} 
if(buffer[12]==50 && buffer[13]==51)      //         23 
{ 

tmp[4]=35; 

} 
if(buffer[12]==50 && buffer[13]==52)      //         24 
{ 

tmp[4]=36; 

} 
if(buffer[12]==50 && buffer[13]==53)      //         25 
{ 

tmp[4]=37; 

} 
if(buffer[12]==50 && buffer[13]==54)      //         26 
{ 

tmp[4]=38; 

} 
if(buffer[12]==50 && buffer[13]==55)      //         27 
{ 

tmp[4]=39; 

} 
if(buffer[12]==50 && buffer[13]==56)      //         28 
{ 

tmp[4]=40; 

} 
if(buffer[12]==50 && buffer[13]==57)      //         29 
{ 

tmp[4]=41; 

} 
if(buffer[12]==50 && buffer[13]==65)      //         2a 
{ 

tmp[4]=42; 
 
} 
if(buffer[12]==50 && buffer[13]==66)      //         2b 
{ 

tmp[4]=43; 

} 
if(buffer[12]==50 && buffer[13]==67)      //         2c 
{ 

tmp[4]=44; 

} 

if(buffer[12]==50 && buffer[13]==68)      //       2d  
{ 

tmp[4]=45; 

} 
if(buffer[12]==50 && buffer[13]==69)      //         2e 
{ 

tmp[4]=46; 

} 
if(buffer[12]==50 && buffer[13]==70)      //         2f 
{ 

tmp[4]=47; 

} 

//------------- 


if(buffer[12]==51 && buffer[13]==48)      // 30        
{ 

tmp[4]=48; 

} 

if(buffer[12]==51 && buffer[13]==49)      // 31        
{ 

tmp[4]=49; 

} 
if(buffer[12]==51 && buffer[13]==50)      // 32        
{ 
 
tmp[4]=50; 

} 
if(buffer[12]==51 && buffer[13]==51)      //33         
{ 

tmp[4]=51; 

} 
if(buffer[12]==51 && buffer[13]==52)      //34        
{ 

tmp[4]=52; 

} 
if(buffer[12]==51 && buffer[13]==53)      //35      
{ 

tmp[4]=53; 

} 
if(buffer[12]==51 && buffer[13]==54)      //36       
{ 

tmp[4]=54; 

} 
if(buffer[12]==51 && buffer[13]==55)      //37     
{ 

tmp[4]=55; 

} 
if(buffer[12]==51 && buffer[13]==56)      //38     
{ 

tmp[4]=56; 

} 
if(buffer[12]==51 && buffer[13]==57)      //39   
{ 

tmp[4]=57; 

} 

if(buffer[12]==51 && buffer[13]==65)      //3a 
{ 

tmp[4]=58; 

} 

if(buffer[12]==51 && buffer[13]==66)      //3b 
{ 

tmp[4]=59; 

} 
if(buffer[12]==51 && buffer[13]==67)      //3c 
{ 

tmp[4]=60; 

} 
if(buffer[12]==51 && buffer[13]==68)      //3d 
{ 

tmp[4]=61; 

} 
if(buffer[12]==51 && buffer[13]==69)      //3e  
{ 

tmp[4]=62; 

} 
if(buffer[12]==51 && buffer[13]==70)      //3f  
{ 

tmp[4]=63; 

} 

//------------ 


if(buffer[12]==52 && buffer[13]==48)      // 40       
{ 

tmp[4]=64; 

} 

if(buffer[12]==52 && buffer[13]==49)      // 41        
{ 

tmp[4]=65; 

} 
if(buffer[12]==52 && buffer[13]==50)      // 42        
{ 

tmp[4]=66; 

} 
if(buffer[12]==52 && buffer[13]==51)      //43         
{ 

tmp[4]=67; 

} 
if(buffer[12]==52 && buffer[13]==52)      //44        
{ 

tmp[4]=68; 

} 
if(buffer[12]==52 && buffer[13]==53)      //45      
{ 

tmp[4]=69; 

} 

if(buffer[12]==52 && buffer[13]==54)      //46       
{ 

tmp[4]=70; 

} 
if(buffer[12]==52 && buffer[13]==55)      //47     
{ 

tmp[4]=71; 

} 
if(buffer[12]==52 && buffer[13]==56)      //48     
{ 

tmp[4]=72; 

} 
if(buffer[12]==52 && buffer[13]==57)      //49   
{ 

tmp[4]=73; 

} 

if(buffer[12]==52 && buffer[13]==65)      //4a 
{ 

tmp[4]=74; 

} 

if(buffer[12]==52 && buffer[13]==66)      //4b 
{ 

tmp[4]=75; 

} 
if(buffer[12]==52 && buffer[13]==67)      //4c 
{ 

tmp[4]=76; 

} 
if(buffer[12]==52 && buffer[13]==68)      //4d 
{ 

tmp[4]=77; 

} 
if(buffer[12]==52 && buffer[13]==69)      //4e  
{ 

tmp[4]=78; 

} 
if(buffer[12]==52 && buffer[13]==70)      //4f  
{ 

tmp[4]=79; 

} 
//------------ 




if(buffer[12]==53 && buffer[13]==48)      //50       
{ 

tmp[4]=80; 

} 

if(buffer[12]==53 && buffer[13]==49)      //51        
{ 

tmp[4]=81; 

} 
if(buffer[12]==53 && buffer[13]==50)      //52        
{ 
 
tmp[4]=82; 

} 
if(buffer[12]==53 && buffer[13]==51)      //53         
{ 

tmp[4]=83; 

} 
if(buffer[12]==53 && buffer[13]==52)      //54        
{ 

tmp[4]=84; 

} 
if(buffer[12]==53 && buffer[13]==53)      //55      
{ 

tmp[4]=85; 

} 
if(buffer[12]==53 && buffer[13]==54)      //56       
{ 

tmp[4]=86; 

} 
if(buffer[12]==53 && buffer[13]==55)      //57     
{ 

tmp[4]=87; 

} 
if(buffer[12]==53 && buffer[13]==56)      //58     
{ 

tmp[4]=88; 

} 
if(buffer[12]==53 && buffer[13]==57)      //59   
{ 

tmp[4]=89; 

} 

if(buffer[12]==53 && buffer[13]==65)      //5a 
{ 

tmp[4]=90; 

} 

if(buffer[12]==53 && buffer[13]==66)      //5b 
{ 

tmp[4]=91; 

} 
if(buffer[12]==53 && buffer[13]==67)      //5c 
{ 

tmp[4]=92; 

} 
if(buffer[12]==53 && buffer[13]==68)      //5d 
{ 

tmp[4]=93; 

} 
if(buffer[12]==53 && buffer[13]==69)      //5e  
{ 

tmp[4]=94; 

} 
if(buffer[12]==53 && buffer[13]==70)      //5f  
{ 

tmp[4]=95; 

} 
//------------ 




if(buffer[12]==54 && buffer[13]==48)      //60       
{ 

tmp[4]=96; 

} 

if(buffer[12]==54 && buffer[13]==49)      //61        
{ 

tmp[4]=97; 

} 
if(buffer[12]==54 && buffer[13]==50)      //62        
{ 
 
tmp[4]=98; 

} 
if(buffer[12]==54 && buffer[13]==51)      //63         
{ 

tmp[4]=99; 

} 
if(buffer[12]==54 && buffer[13]==52)      //64        
{ 

tmp[4]=100; 

} 
if(buffer[12]==54 && buffer[13]==53)      //65      
{ 

tmp[4]=101; 

} 
if(buffer[12]==54 && buffer[13]==54)      //66       
{ 

tmp[4]=102; 

} 
if(buffer[12]==54 && buffer[13]==55)      //67     
{ 

tmp[4]=103; 

} 
if(buffer[12]==54 && buffer[13]==56)      //68     
{ 

tmp[4]=104; 

} 
if(buffer[12]==54 && buffer[13]==57)      //69   
{ 

tmp[4]=105; 

} 

if(buffer[12]==54 && buffer[13]==65)      //6a 
{ 

tmp[4]=106; 

} 

if(buffer[12]==54 && buffer[13]==66)      //6b 
{ 

tmp[4]=107; 

} 
if(buffer[12]==54 && buffer[13]==67)      //6c 
{ 

tmp[4]=108; 

} 
if(buffer[12]==54 && buffer[13]==68)      //6d 
{ 

tmp[4]=109; 

} 
if(buffer[12]==54 && buffer[13]==69)      //6e  
{ 

tmp[4]=110; 

} 
if(buffer[12]==54 && buffer[13]==70)      //6f  
{ 

tmp[4]=111; 

} 
//------------ 




if(buffer[12]==55 && buffer[13]==48)      //70       
{ 

tmp[4]=112; 

} 

if(buffer[12]==55 && buffer[13]==49)      //71        
{ 

tmp[4]=113; 

} 
if(buffer[12]==55 && buffer[13]==50)      //72        
{ 
 
tmp[4]=114; 

} 
if(buffer[12]==55 && buffer[13]==51)      //73         
{ 

tmp[4]=115; 

} 
if(buffer[12]==55 && buffer[13]==52)      //74        
{ 

tmp[4]=116; 

} 
if(buffer[12]==55 && buffer[13]==53)      //75      
{ 

tmp[4]=117; 

} 
if(buffer[12]==55 && buffer[13]==54)      //76       
{ 

tmp[4]=118; 

} 
if(buffer[12]==55 && buffer[13]==55)      //77     
{ 

tmp[4]=119; 

} 
if(buffer[12]==55 && buffer[13]==56)      //78     
{ 

tmp[4]=120; 

} 
if(buffer[12]==55 && buffer[13]==57)      //79   
{ 

tmp[4]=121; 

} 

if(buffer[12]==55 && buffer[13]==65)      //7a 
{ 

tmp[4]=122; 

} 

if(buffer[12]==55 && buffer[13]==66)      //7b 
{ 

tmp[4]=123; 

} 
if(buffer[12]==55 && buffer[13]==67)      //7c 
{ 

tmp[4]=124; 

} 
if(buffer[12]==55 && buffer[13]==68)      //7d 
{ 

tmp[4]=125; 

} 
if(buffer[12]==55 && buffer[13]==69)      //7e  
{ 

tmp[4]=126; 

} 
if(buffer[12]==55 && buffer[13]==70)      //7f  
{ 

tmp[4]=127; 

} 

//------------ 

if(buffer[12]==56 && buffer[13]==48)      //80       
{ 

tmp[4]=128; 

} 

if(buffer[12]==56 && buffer[13]==49)      //81        
{ 

tmp[4]=129; 

} 
if(buffer[12]==56 && buffer[13]==50)      //82        
{ 

tmp[4]=130; 
 
} 
if(buffer[12]==56 && buffer[13]==51)      //83         
{ 

tmp[4]=131; 

} 
if(buffer[12]==56 && buffer[13]==52)      //84        
{ 

tmp[4]=132; 

} 
if(buffer[12]==56 && buffer[13]==53)      //85      
{ 

tmp[4]=133; 

} 
if(buffer[12]==56 && buffer[13]==54)      //86       
{ 

tmp[4]=134; 

} 
if(buffer[12]==56 && buffer[13]==55)      //87     
{ 

tmp[4]=135; 

} 
if(buffer[12]==56 && buffer[13]==56)      //88     
{ 

tmp[4]=136; 

} 
if(buffer[12]==56 && buffer[13]==57)      //89   
{ 

tmp[4]=137; 

} 

if(buffer[12]==56 && buffer[13]==65)      //8a 
{ 

tmp[4]=138; 

} 

if(buffer[12]==56 && buffer[13]==66)      //8b 
{ 

tmp[4]=139; 

} 
if(buffer[12]==56 && buffer[13]==67)      //8c 
{ 

tmp[4]=140; 

} 
if(buffer[12]==56 && buffer[13]==68)      //8d 
{ 

tmp[4]=141; 

} 
if(buffer[12]==56 && buffer[13]==69)      //8e  
{ 

tmp[4]=142; 

} 
if(buffer[12]==56 && buffer[13]==70)      //8f  
{ 

tmp[4]=143; 

} 
//------------ 


if(buffer[12]==57 && buffer[13]==48)      //90       
{ 

tmp[4]=144; 

} 

if(buffer[12]==57 && buffer[13]==49)      //91        
{ 

tmp[4]=145; 

} 
if(buffer[12]==57 && buffer[13]==50)      //92        
{ 

tmp[4]=146; 

} 
if(buffer[12]==57 && buffer[13]==51)      //93         
{ 

tmp[4]=147; 

} 
if(buffer[12]==57 && buffer[13]==52)      //94        
{ 

tmp[4]=148; 

} 
if(buffer[12]==57 && buffer[13]==53)      //95      
{ 

tmp[4]=149; 

} 
if(buffer[12]==57 && buffer[13]==54)      //96       
{ 

tmp[4]=150; 

} 
if(buffer[12]==57 && buffer[13]==55)      //97     
{ 

tmp[4]=151; 

} 
if(buffer[12]==57 && buffer[13]==56)      //98     
{ 

tmp[4]=152; 

} 
if(buffer[12]==57 && buffer[13]==57)      //99   
{ 

tmp[4]=153; 

} 

if(buffer[12]==57 && buffer[13]==65)      //9a 
{ 

tmp[4]=154; 

} 

if(buffer[12]==57 && buffer[13]==66)      //9b 
{ 
 
tmp[4]=155; 

} 
if(buffer[12]==57 && buffer[13]==67)      //9c 
{ 

tmp[4]=156; 

} 
if(buffer[12]==57 && buffer[13]==68)      //9d 
{ 

tmp[4]=157; 

} 
if(buffer[12]==57 && buffer[13]==69)      //9e  
{ 

tmp[4]=158; 

} 
if(buffer[12]==57 && buffer[13]==70)      //9f  
{ 

tmp[4]=159; 

} 
//------------ 


if(buffer[12]==65 && buffer[13]==48)      //a0       
{ 

tmp[4]=160; 

} 

if(buffer[12]==65 && buffer[13]==49)      //a1        
{ 

tmp[4]=161; 

} 
if(buffer[12]==65 && buffer[13]==50)      //a2        
{ 

tmp[4]=162; 

} 
if(buffer[12]==65 && buffer[13]==51)      //a3         
{ 
 
tmp[4]=163; 

} 
if(buffer[12]==65 && buffer[13]==52)      //a4        
{ 

tmp[4]=164; 

} 
if(buffer[12]==65 && buffer[13]==53)      //a5      
{ 

tmp[4]=165; 

} 
if(buffer[12]==65 && buffer[13]==54)      //a6       
{ 

tmp[4]=166; 

} 
if(buffer[12]==65 && buffer[13]==55)      //a7     
{ 

tmp[4]=167; 

} 
if(buffer[12]==65 && buffer[13]==56)      //a8     
{ 

tmp[4]=168; 

} 
if(buffer[12]==65 && buffer[13]==57)      //a9   
{ 

tmp[4]=169; 

} 

if(buffer[12]==65 && buffer[13]==65)      //aa 
{ 

tmp[4]=170; 

} 

if(buffer[12]==65 && buffer[13]==66)      //ab 
{ 

tmp[4]=171; 
 
} 
if(buffer[12]==65 && buffer[13]==67)      //ac 
{ 

tmp[4]=172; 

} 
if(buffer[12]==65 && buffer[13]==68)      //ad 
{ 

tmp[4]=173; 

} 
if(buffer[12]==65 && buffer[13]==69)      //ae  
{ 

tmp[4]=174; 

} 
if(buffer[12]==65 && buffer[13]==70)      //af  
{ 

tmp[4]=175; 

} 
//------------ 


if(buffer[12]==66 && buffer[13]==48)      //b0       
{ 

tmp[4]=176; 

} 

if(buffer[12]==66 && buffer[13]==49)      //b1        
{ 

tmp[4]=177; 

} 
if(buffer[12]==66 && buffer[13]==50)      //b2        
{ 

tmp[4]=178; 

} 
if(buffer[12]==66 && buffer[13]==51)      //b3         
{ 

tmp[4]=179; 
 
} 
if(buffer[12]==66 && buffer[13]==52)      //b4        
{ 

tmp[4]=180; 

} 
if(buffer[12]==66 && buffer[13]==53)      //b5      
{ 

tmp[4]=181; 

} 
if(buffer[12]==66 && buffer[13]==54)      //b6       
{ 

tmp[4]=182; 

} 
if(buffer[12]==66 && buffer[13]==55)      //b7     
{ 

tmp[4]=183; 

} 
if(buffer[12]==66 && buffer[13]==56)      //b8     
{ 

tmp[4]=184; 

} 
if(buffer[12]==66 && buffer[13]==57)      //b9   
{ 

tmp[4]=185; 

} 

if(buffer[12]==66 && buffer[13]==65)      //ba 
{ 

tmp[4]=186; 

} 

if(buffer[12]==66 && buffer[13]==66)      //bb 
{ 

tmp[4]=187; 

} 
if(buffer[12]==66 && buffer[13]==67)      //bc 
{ 

tmp[4]=188; 

} 
if(buffer[12]==66 && buffer[13]==68)      //bd 
{ 

tmp[4]=189; 

} 
if(buffer[12]==66 && buffer[13]==69)      //be  
{ 

tmp[4]=190; 

} 
if(buffer[12]==66 && buffer[13]==70)      //bf  
{ 

tmp[4]=191; 

} 
//------------ 



if(buffer[12]==67 && buffer[13]==48)      //c0       
{ 

tmp[4]=192; 

} 

if(buffer[12]==67 && buffer[13]==49)      //c1        
{ 

tmp[4]=193; 

} 
if(buffer[12]==67 && buffer[13]==50)      //c2        
{ 

tmp[4]=194; 

} 
if(buffer[12]==67 && buffer[13]==51)      //c3         
{ 

tmp[4]=195; 

} 
if(buffer[12]==67 && buffer[13]==52)      //c4        
{ 

tmp[4]=196; 

} 
if(buffer[12]==67 && buffer[13]==53)      //c5      
{ 

tmp[4]=197; 

} 
if(buffer[12]==67 && buffer[13]==54)      //c6       
{ 

tmp[4]=198; 

} 
if(buffer[12]==67 && buffer[13]==55)      //c7     
{ 

tmp[4]=199; 

} 
if(buffer[12]==67 && buffer[13]==56)      //c8     
{ 

tmp[4]=200; 

} 
if(buffer[12]==67 && buffer[13]==57)      //c9   
{ 

tmp[4]=201; 

} 

if(buffer[12]==67 && buffer[13]==65)      //ca 
{ 

tmp[4]=202; 

} 

if(buffer[12]==67 && buffer[13]==66)      //cb 
{ 

tmp[4]=203; 

} 
if(buffer[12]==67 && buffer[13]==67)      //cc 
{ 

tmp[4]=204; 

} 
if(buffer[12]==67 && buffer[13]==68)      //cd 
{ 

tmp[4]=205; 

} 
if(buffer[12]==67 && buffer[13]==69)      //ce  
{ 

tmp[4]=206; 

} 
if(buffer[12]==67 && buffer[13]==70)      //cf  
{ 

tmp[4]=207; 

} 
//------------ 


if(buffer[12]==68 && buffer[13]==48)      //d0       
{ 

tmp[4]=208; 

} 

if(buffer[12]==68 && buffer[13]==49)      //d1        
{ 

tmp[4]=209; 

} 
if(buffer[12]==68 && buffer[13]==50)      //d2        
{ 

tmp[4]=210; 

} 
if(buffer[12]==68 && buffer[13]==51)      //d3         
{ 

tmp[4]=211; 

} 
if(buffer[12]==68 && buffer[13]==52)      //d4        
{ 

tmp[4]=212; 

} 
if(buffer[12]==68 && buffer[13]==53)      //d5      
{ 

tmp[4]=213; 

} 
if(buffer[12]==68 && buffer[13]==54)      //d6       
{ 

tmp[4]=214; 

} 
if(buffer[12]==68 && buffer[13]==55)      //d7     
{ 

tmp[4]=215; 

} 
if(buffer[12]==68 && buffer[13]==56)      //d8     
{ 

tmp[4]=216; 

} 
if(buffer[12]==68 && buffer[13]==57)      //d9   
{ 

tmp[4]=217; 

} 

if(buffer[12]==68 && buffer[13]==65)      //da 
{ 

tmp[4]=218; 

} 

if(buffer[12]==68 && buffer[13]==66)      //db 
{ 

tmp[4]=219; 

} 
if(buffer[12]==68 && buffer[13]==67)      //dc 
{ 

tmp[4]=220; 

} 
if(buffer[12]==68 && buffer[13]==68)      //dd 
{ 

tmp[4]=221; 

} 
if(buffer[12]==68 && buffer[13]==69)      //de  
{ 

tmp[4]=222; 

} 
if(buffer[12]==68 && buffer[13]==70)      //df  
{ 

tmp[4]=223; 

} 
//------------ 



if(buffer[12]==69 && buffer[13]==48)      //e0       
{ 

tmp[4]=224; 

} 

if(buffer[12]==69 && buffer[13]==49)      //e1        
{ 

tmp[4]=225; 

} 
if(buffer[12]==69 && buffer[13]==50)      //e2        
{ 

tmp[4]=226; 

} 
if(buffer[12]==69 && buffer[13]==51)      //e3         
{ 

tmp[4]=227; 

} 
if(buffer[12]==69 && buffer[13]==52)      //e4        
{ 
 
tmp[4]=228; 

} 
if(buffer[12]==69 && buffer[13]==53)      //e5      
{ 

tmp[4]=229; 

} 
if(buffer[12]==69 && buffer[13]==54)      //e6       
{ 

tmp[4]=230; 

} 
if(buffer[12]==69 && buffer[13]==55)      //e7     
{ 

tmp[4]=231; 

} 
if(buffer[12]==69 && buffer[13]==56)      //e8     
{ 

tmp[4]=232; 

} 
if(buffer[12]==69 && buffer[13]==57)      //e9   
{ 

tmp[4]=233; 

} 

if(buffer[12]==69 && buffer[13]==65)      //ea 
{ 

tmp[4]=234; 

} 

if(buffer[12]==69 && buffer[13]==66)      //eb 
{ 

tmp[4]=235; 

} 
if(buffer[12]==69 && buffer[13]==67)      //ec 
{ 

tmp[4]=236; 
 
} 
if(buffer[12]==69 && buffer[13]==68)      //ed 
{ 

tmp[4]=237; 

} 
if(buffer[12]==69 && buffer[13]==69)      //ee  
{ 

tmp[4]=238; 

} 
if(buffer[12]==69 && buffer[13]==70)      //ef  
{ 

tmp[4]=239; 

} 
//------------ 

if(buffer[12]==70 && buffer[13]==48)      //f0       
{ 

tmp[4]=240; 

} 

if(buffer[12]==70 && buffer[13]==49)      //f1        
{ 

tmp[4]=241; 

} 
if(buffer[12]==70 && buffer[13]==50)      //f2        
{ 

tmp[4]=242; 

} 
if(buffer[12]==70 && buffer[13]==51)      //f3         
{ 

tmp[4]=243; 

} 
if(buffer[12]==70 && buffer[13]==52)      //f4        
{ 

tmp[4]=244; 

} 
if(buffer[12]==70 && buffer[13]==53)      //f5      
{ 

tmp[4]=245; 

} 
if(buffer[12]==70 && buffer[13]==54)      //f6       
{ 

tmp[4]=246; 

} 
if(buffer[12]==70 && buffer[13]==55)      //f7     
{ 

tmp[4]=247; 

} 
if(buffer[12]==70 && buffer[13]==56)      //f8     
{ 

tmp[4]=248; 

} 
if(buffer[12]==70 && buffer[13]==57)      //f9   
{ 

tmp[4]=249; 

} 

if(buffer[12]==70 && buffer[13]==65)      //fa 
{ 

tmp[4]=250; 

} 

if(buffer[12]==70 && buffer[13]==66)      //fb 
{ 

tmp[4]=251; 

} 
if(buffer[12]==70 && buffer[13]==67)      //fc 
{ 

tmp[4]=252; 

} 
if(buffer[12]==70 && buffer[13]==68)      //fd 
{ 

tmp[4]=253; 

} 
if(buffer[12]==70 && buffer[13]==69)      //fe  
{ 

tmp[4]=254; 

} 
if(buffer[12]==70 && buffer[13]==70)      //ff  
{ 

tmp[4]=255; 

} 

//----------------------- end of tmp[4]--------------------------- 


//----------------------- start of tmp[5]--------------------------- 

if(buffer[14]==48 && buffer[15]==48)      //00        
{ 

tmp[5]=0; 

} 

if(buffer[14]==48 && buffer[15]==49)      //01        
{ 

tmp[5]=1; 

} 
if(buffer[14]==48 && buffer[15]==50)      //02        
{ 

tmp[5]=2; 

} 
if(buffer[14]==48 && buffer[15]==51)      //03         
{ 

tmp[5]=3; 

} 
if(buffer[14]==48 && buffer[15]==52)      //04        
{ 

tmp[5]=4; 
 
} 
if(buffer[14]==48 && buffer[15]==53)      //05      
{ 

tmp[5]=5; 

} 


if(buffer[14]==48 && buffer[15]==54)      //06       
{ 

tmp[5]=6; 

} 
if(buffer[14]==48 && buffer[15]==55)      //07     
{ 

tmp[5]=7; 

} 
if(buffer[14]==48 && buffer[15]==56)      //08     
{ 

tmp[5]=8; 

} 
if(buffer[14]==48 && buffer[15]==57)      //09   
{ 

tmp[5]=9; 

} 

if(buffer[14]==48 && buffer[15]==65)      //0a 
{ 

tmp[5]=10; 

} 

if(buffer[14]==48 && buffer[15]==66)      //0b 
{ 

tmp[5]=11; 

} 
if(buffer[14]==48 && buffer[15]==67)      //0c 
{ 

tmp[5]=12; 
 
} 
if(buffer[14]==48 && buffer[15]==68)      //0d 
{ 

tmp[5]=13; 

} 
if(buffer[14]==48 && buffer[15]==69)      //0e  
{ 

tmp[5]=14; 

} 
if(buffer[14]==48 && buffer[15]==70)      //0f  
{ 

tmp[5]=15; 

} 

//----------- 

if(buffer[14]==49 && buffer[15]==48)      //        10 
{ 

tmp[5]=16; 

} 
if(buffer[14]==49 && buffer[15]==49)      //         11 
{ 

tmp[5]=17; 

} 
if(buffer[14]==49 && buffer[15]==50)      //         12 
{ 

tmp[5]=18; 

} 
if(buffer[14]==49 && buffer[15]==51)      //         13 
{ 

tmp[5]=19; 

} 
if(buffer[14]==49 && buffer[15]==52)      //         14 
{ 

tmp[5]=20; 

} 
if(buffer[14]==49 && buffer[15]==53)      //         15 
{ 

tmp[5]=21; 

} 
if(buffer[14]==49 && buffer[15]==54)      //         16 
{ 

tmp[5]=22; 

} 
if(buffer[14]==49 && buffer[15]==55)      //         17 
{ 

tmp[5]=23; 

} 
if(buffer[14]==49 && buffer[15]==56)      //         18 
{ 

tmp[5]=24; 

} 
if(buffer[14]==49 && buffer[15]==57)      //         19 
{ 

tmp[5]=25; 

} 

if(buffer[14]==49 && buffer[15]==65)      //         1a 
{ 

tmp[5]=26; 

} 
if(buffer[14]==49 && buffer[15]==66)      //         1b 
{ 

tmp[5]=27; 

} 
if(buffer[14]==49 && buffer[15]==67)      //         1c 
{ 

tmp[5]=28; 

} 
if(buffer[14]==49 && buffer[15]==68)      //         1d 
{ 
 
tmp[5]=29; 

} 
if(buffer[14]==49 && buffer[15]==69)      //         1e 
{ 

tmp[5]=30; 

} 
if(buffer[14]==49 && buffer[15]==70)      //         1f 
{ 

tmp[5]=31; 

} 


//--------------- 


if(buffer[14]==50 && buffer[15]==48)      //         20 
{ 

tmp[5]=32; 

} 

if(buffer[14]==50 && buffer[15]==49)      //         21 
{ 

tmp[5]=33; 

} 
if(buffer[14]==50 && buffer[15]==50)      //         22 
{ 

tmp[5]=34; 

} 
if(buffer[14]==50 && buffer[15]==51)      //         23 
{ 

tmp[5]=35; 

} 
if(buffer[14]==50 && buffer[15]==52)      //         24 
{ 

tmp[5]=36; 

} 
if(buffer[14]==50 && buffer[15]==53)      //         25 
{ 

tmp[5]=37; 

} 
if(buffer[14]==50 && buffer[15]==54)      //         26 
{ 

tmp[5]=38; 

} 
if(buffer[14]==50 && buffer[15]==55)      //         27 
{ 

tmp[5]=39; 

} 
if(buffer[14]==50 && buffer[15]==56)      //         28 
{ 

tmp[5]=40; 

} 
if(buffer[14]==50 && buffer[15]==57)      //         29 
{ 

tmp[5]=41; 

} 
if(buffer[14]==50 && buffer[15]==65)      //         2a 
{ 

tmp[5]=42; 

} 
if(buffer[14]==50 && buffer[15]==66)      //         2b 
{ 

tmp[5]=43; 

} 
if(buffer[14]==50 && buffer[15]==67)      //         2c 
{ 

tmp[5]=44; 

} 

if(buffer[14]==50 && buffer[15]==68)      //       2d  
{ 

tmp[5]=45; 

} 
if(buffer[14]==50 && buffer[15]==69)      //         2e 
{ 

tmp[5]=46; 

} 
if(buffer[14]==50 && buffer[15]==70)      //         2f 
{ 

tmp[5]=47; 

} 

//------------- 


if(buffer[14]==51 && buffer[15]==48)      // 30        
{ 

tmp[5]=48; 

} 

if(buffer[14]==51 && buffer[15]==49)      // 31        
{ 

tmp[5]=49; 

} 
if(buffer[14]==51 && buffer[15]==50)      // 32        
{ 

tmp[5]=50; 

} 
if(buffer[14]==51 && buffer[15]==51)      //33         
{ 

tmp[5]=51; 

} 
if(buffer[14]==51 && buffer[15]==52)      //34        
{ 

tmp[5]=52; 

} 
if(buffer[14]==51 && buffer[15]==53)      //35      
{ 
 
tmp[5]=53; 

} 
if(buffer[14]==51 && buffer[15]==54)      //36       
{ 

tmp[5]=54; 

} 
if(buffer[14]==51 && buffer[15]==55)      //37     
{ 

tmp[5]=55; 

} 
if(buffer[14]==51 && buffer[15]==56)      //38     
{ 

tmp[5]=56; 

} 
if(buffer[14]==51 && buffer[15]==57)      //39   
{ 

tmp[5]=57; 

} 

if(buffer[14]==51 && buffer[15]==65)      //3a 
{ 

tmp[5]=58; 

} 

if(buffer[14]==51 && buffer[15]==66)      //3b 
{ 

tmp[5]=59; 

} 
if(buffer[14]==51 && buffer[15]==67)      //3c 
{ 

tmp[5]=60; 

} 
if(buffer[14]==51 && buffer[15]==68)      //3d 
{ 

tmp[5]=61; 
 
} 
if(buffer[14]==51 && buffer[15]==69)      //3e  
{ 

tmp[5]=62; 

} 
if(buffer[14]==51 && buffer[15]==70)      //3f  
{ 

tmp[5]=63; 

} 

//------------ 


if(buffer[14]==52 && buffer[15]==48)      // 40       
{ 

tmp[5]=64; 

} 

if(buffer[14]==52 && buffer[15]==49)      // 41        
{ 

tmp[5]=65; 

} 
if(buffer[14]==52 && buffer[15]==50)      // 42        
{ 

tmp[5]=66; 

} 
if(buffer[14]==52 && buffer[15]==51)      //43         
{ 

tmp[5]=67; 

} 
if(buffer[14]==52 && buffer[15]==52)      //44        
{ 

tmp[5]=68; 

} 
if(buffer[14]==52 && buffer[15]==53)      //45      
{ 

tmp[5]=69; 

} 

if(buffer[14]==52 && buffer[15]==54)      //46       
{ 

tmp[5]=70; 

} 
if(buffer[14]==52 && buffer[15]==55)      //47     
{ 

tmp[5]=71; 

} 
if(buffer[14]==52 && buffer[15]==56)      //48     
{ 

tmp[5]=72; 

} 
if(buffer[14]==52 && buffer[15]==57)      //49   
{ 

tmp[5]=73; 

} 

if(buffer[14]==52 && buffer[15]==65)      //4a 
{ 

tmp[5]=74; 

} 

if(buffer[14]==52 && buffer[15]==66)      //4b 
{ 

tmp[5]=75; 

} 
if(buffer[14]==52 && buffer[15]==67)      //4c 
{ 

tmp[5]=76; 

} 
if(buffer[14]==52 && buffer[15]==68)      //4d 
{ 

tmp[5]=77; 
 
} 
if(buffer[14]==52 && buffer[15]==69)      //4e  
{ 

tmp[5]=78; 

} 
if(buffer[14]==52 && buffer[15]==70)      //4f  
{ 

tmp[5]=79; 

} 
//------------ 




if(buffer[14]==53 && buffer[15]==48)      //50       
{ 

tmp[5]=80; 

} 

if(buffer[14]==53 && buffer[15]==49)      //51        
{ 

tmp[5]=81; 

} 
if(buffer[14]==53 && buffer[15]==50)      //52        
{ 

tmp[5]=82; 

} 
if(buffer[14]==53 && buffer[15]==51)      //53         
{ 

tmp[5]=83; 

} 
if(buffer[14]==53 && buffer[15]==52)      //54        
{ 

tmp[5]=84; 

} 
if(buffer[14]==53 && buffer[15]==53)      //55      
{ 
 
tmp[5]=85; 

} 
if(buffer[14]==53 && buffer[15]==54)      //56       
{ 

tmp[5]=86; 

} 
if(buffer[14]==53 && buffer[15]==55)      //57     
{ 

tmp[5]=87; 

} 
if(buffer[14]==53 && buffer[15]==56)      //58     
{ 

tmp[5]=88; 

} 
if(buffer[14]==53 && buffer[15]==57)      //59   
{ 

tmp[5]=89; 

} 

if(buffer[14]==53 && buffer[15]==65)      //5a 
{ 

tmp[5]=90; 

} 

if(buffer[14]==53 && buffer[15]==66)      //5b 
{ 

tmp[5]=91; 

} 
if(buffer[14]==53 && buffer[15]==67)      //5c 
{ 

tmp[5]=92; 

} 
if(buffer[14]==53 && buffer[15]==68)      //5d 
{ 

tmp[5]=93; 
 
} 
if(buffer[14]==53 && buffer[15]==69)      //5e  
{ 

tmp[5]=94; 

} 
if(buffer[14]==53 && buffer[15]==70)      //5f  
{ 

tmp[5]=95; 

} 
//------------ 




if(buffer[14]==54 && buffer[15]==48)      //60       
{ 

tmp[5]=96; 

} 

if(buffer[14]==54 && buffer[15]==49)      //61        
{ 

tmp[5]=97; 

} 
if(buffer[14]==54 && buffer[15]==50)      //62        
{ 

tmp[5]=98; 

} 
if(buffer[14]==54 && buffer[15]==51)      //63         
{ 

tmp[5]=99; 

} 
if(buffer[14]==54 && buffer[15]==52)      //64        
{ 

tmp[5]=100; 

} 
if(buffer[14]==54 && buffer[15]==53)      //65      
{ 
 
tmp[5]=101; 

} 
if(buffer[14]==54 && buffer[15]==54)      //66       
{ 

tmp[5]=102; 

} 
if(buffer[14]==54 && buffer[15]==55)      //67     
{ 

tmp[5]=103; 

} 
if(buffer[14]==54 && buffer[15]==56)      //68     
{ 

tmp[5]=104; 

} 
if(buffer[14]==54 && buffer[15]==57)      //69   
{ 

tmp[5]=105; 

} 

if(buffer[14]==54 && buffer[15]==65)      //6a 
{ 

tmp[5]=106; 

} 

if(buffer[14]==54 && buffer[15]==66)      //6b 
{ 

tmp[5]=107; 

} 
if(buffer[14]==54 && buffer[15]==67)      //6c 
{ 

tmp[5]=108; 

} 
if(buffer[14]==54 && buffer[15]==68)      //6d 
{ 

tmp[5]=109; 
 
} 
if(buffer[14]==54 && buffer[15]==69)      //6e  
{ 

tmp[5]=110; 

} 
if(buffer[14]==54 && buffer[15]==70)      //6f  
{ 

tmp[5]=111; 

} 
//------------ 




if(buffer[14]==55 && buffer[15]==48)      //70       
{ 

tmp[5]=112; 

} 

if(buffer[14]==55 && buffer[15]==49)      //71        
{ 

tmp[5]=113; 

} 
if(buffer[14]==55 && buffer[15]==50)      //72        
{ 

tmp[5]=114; 

} 
if(buffer[14]==55 && buffer[15]==51)      //73         
{ 

tmp[5]=115; 

} 
if(buffer[14]==55 && buffer[15]==52)      //74        
{ 

tmp[5]=116; 

} 
if(buffer[14]==55 && buffer[15]==53)      //75      
{ 
 
tmp[5]=117; 

} 
if(buffer[14]==55 && buffer[15]==54)      //76       
{ 

tmp[5]=118; 

} 
if(buffer[14]==55 && buffer[15]==55)      //77     
{ 

tmp[5]=119; 

} 
if(buffer[14]==55 && buffer[15]==56)      //78     
{ 

tmp[5]=120; 

} 
if(buffer[14]==55 && buffer[15]==57)      //79   
{ 

tmp[5]=121; 

} 

if(buffer[14]==55 && buffer[15]==65)      //7a 
{ 

tmp[5]=122; 

} 

if(buffer[14]==55 && buffer[15]==66)      //7b 
{ 

tmp[5]=123; 

} 
if(buffer[14]==55 && buffer[15]==67)      //7c 
{ 

tmp[5]=124; 

} 
if(buffer[14]==55 && buffer[15]==68)      //7d 
{ 

tmp[5]=125; 
 
} 
if(buffer[14]==55 && buffer[15]==69)      //7e  
{ 

tmp[5]=126; 

} 
if(buffer[14]==55 && buffer[15]==70)      //7f  
{ 

tmp[5]=127; 

} 

//------------ 

if(buffer[14]==56 && buffer[15]==48)      //80       
{ 

tmp[5]=128; 

} 

if(buffer[14]==56 && buffer[15]==49)      //81        
{ 

tmp[5]=129; 

} 
if(buffer[14]==56 && buffer[15]==50)      //82        
{ 

tmp[5]=130; 

} 
if(buffer[14]==56 && buffer[15]==51)      //83         
{ 

tmp[5]=131; 

} 
if(buffer[14]==56 && buffer[15]==52)      //84        
{ 

tmp[5]=132; 

} 
if(buffer[14]==56 && buffer[15]==53)      //85      
{ 

tmp[5]=133; 
 
} 
if(buffer[14]==56 && buffer[15]==54)      //86       
{ 

tmp[5]=134; 

} 
if(buffer[14]==56 && buffer[15]==55)      //87     
{ 

tmp[5]=135; 

} 
if(buffer[14]==56 && buffer[15]==56)      //88     
{ 

tmp[5]=136; 

} 
if(buffer[14]==56 && buffer[15]==57)      //89   
{ 

tmp[5]=137; 

} 

if(buffer[14]==56 && buffer[15]==65)      //8a 
{ 

tmp[5]=138; 

} 

if(buffer[14]==56 && buffer[15]==66)      //8b 
{ 

tmp[5]=139; 

} 
if(buffer[14]==56 && buffer[15]==67)      //8c 
{ 

tmp[5]=140; 

} 
if(buffer[14]==56 && buffer[15]==68)      //8d 
{ 

tmp[5]=141; 

} 
if(buffer[14]==56 && buffer[15]==69)      //8e  
{ 

tmp[5]=142; 

} 
if(buffer[14]==56 && buffer[15]==70)      //8f  
{ 

tmp[5]=143; 

} 
//------------ 


if(buffer[14]==57 && buffer[15]==48)      //90       
{ 

tmp[5]=144; 

} 

if(buffer[14]==57 && buffer[15]==49)      //91        
{ 

tmp[5]=145; 

} 
if(buffer[14]==57 && buffer[15]==50)      //92        
{ 

tmp[5]=146; 

} 
if(buffer[14]==57 && buffer[15]==51)      //93         
{ 

tmp[5]=147; 

} 
if(buffer[14]==57 && buffer[15]==52)      //94        
{ 

tmp[5]=148; 

} 
if(buffer[14]==57 && buffer[15]==53)      //95      
{ 

tmp[5]=149; 

} 
if(buffer[14]==57 && buffer[15]==54)      //96       
{ 

tmp[5]=150; 

} 
if(buffer[14]==57 && buffer[15]==55)      //97     
{ 

tmp[5]=151; 

} 
if(buffer[14]==57 && buffer[15]==56)      //98     
{ 

tmp[5]=152; 

} 
if(buffer[14]==57 && buffer[15]==57)      //99   
{ 

tmp[5]=153; 

} 

if(buffer[14]==57 && buffer[15]==65)      //9a 
{ 

tmp[5]=154; 

} 

if(buffer[14]==57 && buffer[15]==66)      //9b 
{ 

tmp[5]=155; 

} 
if(buffer[14]==57 && buffer[15]==67)      //9c 
{ 

tmp[5]=156; 

} 
if(buffer[14]==57 && buffer[15]==68)      //9d 
{ 

tmp[5]=157; 

} 
if(buffer[14]==57 && buffer[15]==69)      //9e  
{ 
 
tmp[5]=158; 

} 
if(buffer[14]==57 && buffer[15]==70)      //9f  
{ 

tmp[5]=159; 

} 
//------------ 


if(buffer[14]==65 && buffer[15]==48)      //a0       
{ 

tmp[5]=160; 

} 

if(buffer[14]==65 && buffer[15]==49)      //a1        
{ 

tmp[5]=161; 

} 
if(buffer[14]==65 && buffer[15]==50)      //a2        
{ 

tmp[5]=162; 

} 
if(buffer[14]==65 && buffer[15]==51)      //a3         
{ 

tmp[5]=163; 

} 
if(buffer[14]==65 && buffer[15]==52)      //a4        
{ 

tmp[5]=164; 

} 
if(buffer[14]==65 && buffer[15]==53)      //a5      
{ 

tmp[5]=165; 

} 
if(buffer[14]==65 && buffer[15]==54)      //a6       
{ 
 
tmp[5]=166; 

} 
if(buffer[14]==65 && buffer[15]==55)      //a7     
{ 

tmp[5]=167; 

} 
if(buffer[14]==65 && buffer[15]==56)      //a8     
{ 

tmp[5]=168; 

} 
if(buffer[14]==65 && buffer[15]==57)      //a9   
{ 

tmp[5]=169; 

} 

if(buffer[14]==65 && buffer[15]==65)      //aa 
{ 

tmp[5]=170; 

} 

if(buffer[14]==65 && buffer[15]==66)      //ab 
{ 

tmp[5]=171; 

} 
if(buffer[14]==65 && buffer[15]==67)      //ac 
{ 

tmp[5]=172; 

} 
if(buffer[14]==65 && buffer[15]==68)      //ad 
{ 

tmp[5]=173; 

} 
if(buffer[14]==65 && buffer[15]==69)      //ae  
{ 

tmp[5]=174; 
 
} 
if(buffer[14]==65 && buffer[15]==70)      //af  
{ 

tmp[5]=175; 

} 
//------------ 


if(buffer[14]==66 && buffer[15]==48)      //b0       
{ 

tmp[5]=176; 

} 

if(buffer[14]==66 && buffer[15]==49)      //b1        
{ 

tmp[5]=177; 

} 
if(buffer[14]==66 && buffer[15]==50)      //b2        
{ 

tmp[5]=178; 

} 
if(buffer[14]==66 && buffer[15]==51)      //b3         
{ 

tmp[5]=179; 

} 
if(buffer[14]==66 && buffer[15]==52)      //b4        
{ 

tmp[5]=180; 

} 
if(buffer[14]==66 && buffer[15]==53)      //b5      
{ 

tmp[5]=181; 

} 
if(buffer[14]==66 && buffer[15]==54)      //b6       
{ 

tmp[5]=182; 
 
} 
if(buffer[14]==66 && buffer[15]==55)      //b7     
{ 

tmp[5]=183; 

} 
if(buffer[14]==66 && buffer[15]==56)      //b8     
{ 

tmp[5]=184; 

} 
if(buffer[14]==66 && buffer[15]==57)      //b9   
{ 

tmp[5]=185; 

} 

if(buffer[14]==66 && buffer[15]==65)      //ba 
{ 

tmp[5]=186; 

} 

if(buffer[14]==66 && buffer[15]==66)      //bb 
{ 

tmp[5]=187; 

} 
if(buffer[14]==66 && buffer[15]==67)      //bc 
{ 

tmp[5]=188; 

} 
if(buffer[14]==66 && buffer[15]==68)      //bd 
{ 

tmp[5]=189; 

} 
if(buffer[14]==66 && buffer[15]==69)      //be  
{ 

tmp[5]=190; 

} 
if(buffer[14]==66 && buffer[15]==70)      //bf  
{ 

tmp[5]=191; 

} 
//------------ 



if(buffer[14]==67 && buffer[15]==48)      //c0       
{ 

tmp[5]=192; 

} 

if(buffer[14]==67 && buffer[15]==49)      //c1        
{ 

tmp[5]=193; 

} 
if(buffer[14]==67 && buffer[15]==50)      //c2        
{ 

tmp[5]=194; 

} 
if(buffer[14]==67 && buffer[15]==51)      //c3         
{ 

tmp[5]=195; 

} 
if(buffer[14]==67 && buffer[15]==52)      //c4        
{ 

tmp[5]=196; 

} 
if(buffer[14]==67 && buffer[15]==53)      //c5      
{ 

tmp[5]=197; 

} 
if(buffer[14]==67 && buffer[15]==54)      //c6       
{ 

tmp[5]=198; 

} 
if(buffer[14]==67 && buffer[15]==55)      //c7     
{ 

tmp[5]=199; 

} 
if(buffer[14]==67 && buffer[15]==56)      //c8     
{ 

tmp[5]=200; 

} 
if(buffer[14]==67 && buffer[15]==57)      //c9   
{ 

tmp[5]=201; 

} 

if(buffer[14]==67 && buffer[15]==65)      //ca 
{ 

tmp[5]=202; 

} 

if(buffer[14]==67 && buffer[15]==66)      //cb 
{ 

tmp[5]=203; 

} 
if(buffer[14]==67 && buffer[15]==67)      //cc 
{ 

tmp[5]=204; 

} 
if(buffer[14]==67 && buffer[15]==68)      //cd 
{ 

tmp[5]=205; 

} 
if(buffer[14]==67 && buffer[15]==69)      //ce  
{ 

tmp[5]=206; 

} 
if(buffer[14]==67 && buffer[15]==70)      //cf  
{ 

tmp[5]=207; 

} 
//------------ 


if(buffer[14]==68 && buffer[15]==48)      //d0       
{ 

tmp[5]=208; 

} 

if(buffer[14]==68 && buffer[15]==49)      //d1        
{ 

tmp[5]=209; 

} 
if(buffer[14]==68 && buffer[15]==50)      //d2        
{ 

tmp[5]=210; 

} 
if(buffer[14]==68 && buffer[15]==51)      //d3         
{ 

tmp[5]=211; 

} 
if(buffer[14]==68 && buffer[15]==52)      //d4        
{ 

tmp[5]=212; 

} 
if(buffer[14]==68 && buffer[15]==53)      //d5      
{ 

tmp[5]=213; 

} 
if(buffer[14]==68 && buffer[15]==54)      //d6       
{ 

tmp[5]=214; 

} 
if(buffer[14]==68 && buffer[15]==55)      //d7     
{ 

tmp[5]=215; 

} 
if(buffer[14]==68 && buffer[15]==56)      //d8     
{ 

tmp[5]=216; 

} 
if(buffer[14]==68 && buffer[15]==57)      //d9   
{ 

tmp[5]=217; 

} 

if(buffer[14]==68 && buffer[15]==65)      //da 
{ 

tmp[5]=218; 

} 

if(buffer[14]==68 && buffer[15]==66)      //db 
{ 

tmp[5]=219; 

} 
if(buffer[14]==68 && buffer[15]==67)      //dc 
{ 

tmp[5]=220; 

} 
if(buffer[14]==68 && buffer[15]==68)      //dd 
{ 

tmp[5]=221; 

} 
if(buffer[14]==68 && buffer[15]==69)      //de  
{ 

tmp[5]=222; 

} 
if(buffer[14]==68 && buffer[15]==70)      //df  
{ 

tmp[5]=223; 

} 
//------------ 



if(buffer[14]==69 && buffer[15]==48)      //e0       
{ 

tmp[5]=224; 

} 

if(buffer[14]==69 && buffer[15]==49)      //e1        
{ 

tmp[5]=225; 

} 
if(buffer[14]==69 && buffer[15]==50)      //e2        
{ 

tmp[5]=226; 

} 
if(buffer[14]==69 && buffer[15]==51)      //e3         
{ 

tmp[5]=227; 

} 
if(buffer[14]==69 && buffer[15]==52)      //e4        
{ 

tmp[5]=228; 

} 
if(buffer[14]==69 && buffer[15]==53)      //e5      
{ 

tmp[5]=229; 

} 
if(buffer[14]==69 && buffer[15]==54)      //e6       
{ 

tmp[5]=230; 

} 
if(buffer[14]==69 && buffer[15]==55)      //e7     
{ 
 
tmp[5]=231; 

} 
if(buffer[14]==69 && buffer[15]==56)      //e8     
{ 

tmp[5]=232; 

} 
if(buffer[14]==69 && buffer[15]==57)      //e9   
{ 

tmp[5]=233; 

} 

if(buffer[14]==69 && buffer[15]==65)      //ea 
{ 

tmp[5]=234; 

} 

if(buffer[14]==69 && buffer[15]==66)      //eb 
{ 

tmp[5]=235; 

} 
if(buffer[14]==69 && buffer[15]==67)      //ec 
{ 

tmp[5]=236; 

} 
if(buffer[14]==69 && buffer[15]==68)      //ed 
{ 

tmp[5]=237; 

} 
if(buffer[14]==69 && buffer[15]==69)      //ee  
{ 

tmp[5]=238; 

} 
if(buffer[14]==69 && buffer[15]==70)      //ef  
{ 

tmp[5]=239; 
 
} 
//------------ 

if(buffer[14]==70 && buffer[15]==48)      //f0       
{ 

tmp[5]=240; 

} 

if(buffer[14]==70 && buffer[15]==49)      //f1        
{ 

tmp[5]=241; 

} 
if(buffer[14]==70 && buffer[15]==50)      //f2        
{ 

tmp[5]=242; 

} 
if(buffer[14]==70 && buffer[15]==51)      //f3         
{ 

tmp[5]=243; 

} 
if(buffer[14]==70 && buffer[15]==52)      //f4        
{ 

tmp[5]=244; 

} 
if(buffer[14]==70 && buffer[15]==53)      //f5      
{ 

tmp[5]=245; 

} 
if(buffer[14]==70 && buffer[15]==54)      //f6       
{ 

tmp[5]=246; 

} 
if(buffer[14]==70 && buffer[15]==55)      //f7     
{ 

tmp[5]=247; 

} 
if(buffer[14]==70 && buffer[15]==56)      //f8     
{ 

tmp[5]=248; 

} 
if(buffer[14]==70 && buffer[15]==57)      //f9   
{ 

tmp[5]=249; 

} 

if(buffer[14]==70 && buffer[15]==65)      //fa 
{ 

tmp[5]=250; 

} 

if(buffer[14]==70 && buffer[15]==66)      //fb 
{ 

tmp[5]=251; 

} 
if(buffer[14]==70 && buffer[15]==67)      //fc 
{ 

tmp[5]=252; 

} 
if(buffer[14]==70 && buffer[15]==68)      //fd 
{ 

tmp[5]=253; 

} 
if(buffer[14]==70 && buffer[15]==69)      //fe  
{ 

tmp[5]=254; 

} 
if(buffer[14]==70 && buffer[15]==70)      //ff  
{ 

tmp[5]=255; 

} 

//----------------------- end of tmp[5]--------------------------- 
//----------------------- start of tmp[6]--------------------------- 

if(buffer[16]==48 && buffer[17]==48)      //00        
{ 

tmp[6]=0; 

} 

if(buffer[16]==48 && buffer[17]==49)      //01        
{ 

tmp[6]=1; 

} 
if(buffer[16]==48 && buffer[17]==50)      //02        
{ 

tmp[6]=2; 

} 
if(buffer[16]==48 && buffer[17]==51)      //03         
{ 

tmp[6]=3; 

} 
if(buffer[16]==48 && buffer[17]==52)      //04        
{ 

tmp[6]=4; 

} 
if(buffer[16]==48 && buffer[17]==53)      //05      
{ 

tmp[6]=5; 

} 


if(buffer[16]==48 && buffer[17]==54)      //06       
{ 

tmp[6]=6; 

} 
if(buffer[16]==48 && buffer[17]==55)      //07     
{ 

tmp[6]=7; 
 
} 
if(buffer[16]==48 && buffer[17]==56)      //08     
{ 

tmp[6]=8; 

} 
if(buffer[16]==48 && buffer[17]==57)      //09   
{ 

tmp[6]=9; 

} 

if(buffer[16]==48 && buffer[17]==65)      //0a 
{ 

tmp[6]=10; 

} 

if(buffer[16]==48 && buffer[17]==66)      //0b 
{ 

tmp[6]=11; 

} 
if(buffer[16]==48 && buffer[17]==67)      //0c 
{ 

tmp[6]=12; 

} 
if(buffer[16]==48 && buffer[17]==68)      //0d 
{ 

tmp[6]=13; 

} 
if(buffer[16]==48 && buffer[17]==69)      //0e  
{ 

tmp[6]=14; 

} 
if(buffer[16]==48 && buffer[17]==70)      //0f  
{ 

tmp[6]=15; 

} 
 
//----------- 

if(buffer[16]==49 && buffer[17]==48)      //        10 
{ 

tmp[6]=16; 

} 
if(buffer[16]==49 && buffer[17]==49)      //         11 
{ 

tmp[6]=17; 

} 
if(buffer[16]==49 && buffer[17]==50)      //         12 
{ 

tmp[6]=18; 

} 
if(buffer[16]==49 && buffer[17]==51)      //         13 
{ 

tmp[6]=19; 

} 
if(buffer[16]==49 && buffer[17]==52)      //         14 
{ 

tmp[6]=20; 

} 
if(buffer[16]==49 && buffer[17]==53)      //         15 
{ 

tmp[6]=21; 

} 
if(buffer[16]==49 && buffer[17]==54)      //         16 
{ 

tmp[6]=22; 

} 
if(buffer[16]==49 && buffer[17]==55)      //         17 
{ 

tmp[6]=23; 

} 
if(buffer[16]==49 && buffer[17]==56)      //         18 
{ 

tmp[6]=24; 

} 
if(buffer[16]==49 && buffer[17]==57)      //         19 
{ 

tmp[6]=25; 

} 

if(buffer[16]==49 && buffer[17]==65)      //         1a 
{ 

tmp[6]=26; 

} 
if(buffer[16]==49 && buffer[17]==66)      //         1b 
{ 

tmp[6]=27; 

} 
if(buffer[16]==49 && buffer[17]==67)      //         1c 
{ 

tmp[6]=28; 

} 
if(buffer[16]==49 && buffer[17]==68)      //         1d 
{ 

tmp[6]=29; 

} 
if(buffer[16]==49 && buffer[17]==69)      //         1e 
{ 

tmp[6]=30; 

} 
if(buffer[16]==49 && buffer[17]==70)      //         1f 
{ 

tmp[6]=31; 

} 


//--------------- 

 
if(buffer[16]==50 && buffer[17]==48)      //         20 
{ 

tmp[6]=32; 

} 

if(buffer[16]==50 && buffer[17]==49)      //         21 
{ 

tmp[6]=33; 

} 
if(buffer[16]==50 && buffer[17]==50)      //         22 
{ 

tmp[6]=34; 

} 
if(buffer[16]==50 && buffer[17]==51)      //         23 
{ 

tmp[6]=35; 

} 
if(buffer[16]==50 && buffer[17]==52)      //         24 
{ 

tmp[6]=36; 

} 
if(buffer[16]==50 && buffer[17]==53)      //         25 
{ 

tmp[6]=37; 

} 
if(buffer[16]==50 && buffer[17]==54)      //         26 
{ 

tmp[6]=38; 

} 
if(buffer[16]==50 && buffer[17]==55)      //         27 
{ 

tmp[6]=39; 

} 
if(buffer[16]==50 && buffer[17]==56)      //         28 
{ 
 
tmp[6]=40; 

} 
if(buffer[16]==50 && buffer[17]==57)      //         29 
{ 

tmp[6]=41; 

} 
if(buffer[16]==50 && buffer[17]==65)      //         2a 
{ 

tmp[6]=42; 

} 
if(buffer[16]==50 && buffer[17]==66)      //         2b 
{ 

tmp[6]=43; 

} 
if(buffer[16]==50 && buffer[17]==67)      //         2c 
{ 

tmp[6]=44; 

} 

if(buffer[16]==50 && buffer[17]==68)      //       2d  
{ 

tmp[6]=45; 

} 
if(buffer[16]==50 && buffer[17]==69)      //         2e 
{ 

tmp[6]=46; 

} 
if(buffer[16]==50 && buffer[17]==70)      //         2f 
{ 

tmp[6]=47; 

} 

//------------- 


if(buffer[16]==51 && buffer[17]==48)      // 30        
{ 

tmp[6]=48; 

} 

if(buffer[16]==51 && buffer[17]==49)      // 31        
{ 

tmp[6]=49; 

} 
if(buffer[16]==51 && buffer[17]==50)      // 32        
{ 

tmp[6]=50; 

} 
if(buffer[16]==51 && buffer[17]==51)      //33         
{ 

tmp[6]=51; 

} 
if(buffer[16]==51 && buffer[17]==52)      //34        
{ 

tmp[6]=52; 

} 
if(buffer[16]==51 && buffer[17]==53)      //35      
{ 

tmp[6]=53; 

} 
if(buffer[16]==51 && buffer[17]==54)      //36       
{ 

tmp[6]=54; 

} 
if(buffer[16]==51 && buffer[17]==55)      //37     
{ 

tmp[6]=55; 

} 
if(buffer[16]==51 && buffer[17]==56)      //38     
{ 

tmp[6]=56; 
 
} 
if(buffer[16]==51 && buffer[17]==57)      //39   
{ 

tmp[6]=57; 

} 

if(buffer[16]==51 && buffer[17]==65)      //3a 
{ 

tmp[6]=58; 

} 

if(buffer[16]==51 && buffer[17]==66)      //3b 
{ 

tmp[6]=59; 

} 
if(buffer[16]==51 && buffer[17]==67)      //3c 
{ 

tmp[6]=60; 

} 
if(buffer[16]==51 && buffer[17]==68)      //3d 
{ 

tmp[6]=61; 

} 
if(buffer[16]==51 && buffer[17]==69)      //3e  
{ 

tmp[6]=62; 

} 
if(buffer[16]==51 && buffer[17]==70)      //3f  
{ 

tmp[6]=63; 

} 

//------------ 


if(buffer[16]==52 && buffer[17]==48)      // 40       
{ 
 
tmp[6]=64; 

} 

if(buffer[16]==52 && buffer[17]==49)      // 41        
{ 

tmp[6]=65; 

} 
if(buffer[16]==52 && buffer[17]==50)      // 42        
{ 

tmp[6]=66; 

} 
if(buffer[16]==52 && buffer[17]==51)      //43         
{ 

tmp[6]=67; 

} 
if(buffer[16]==52 && buffer[17]==52)      //44        
{ 

tmp[6]=68; 

} 
if(buffer[16]==52 && buffer[17]==53)      //45      
{ 

tmp[6]=69; 

} 

if(buffer[16]==52 && buffer[17]==54)      //46       
{ 

tmp[6]=70; 

} 
if(buffer[16]==52 && buffer[17]==55)      //47     
{ 

tmp[6]=71; 

} 
if(buffer[16]==52 && buffer[17]==56)      //48     
{ 

tmp[6]=72; 
 
} 
if(buffer[16]==52 && buffer[17]==57)      //49   
{ 

tmp[6]=73; 

} 

if(buffer[16]==52 && buffer[17]==65)      //4a 
{ 

tmp[6]=74; 

} 

if(buffer[16]==52 && buffer[17]==66)      //4b 
{ 

tmp[6]=75; 

} 
if(buffer[16]==52 && buffer[17]==67)      //4c 
{ 

tmp[6]=76; 

} 
if(buffer[16]==52 && buffer[17]==68)      //4d 
{ 

tmp[6]=77; 

} 
if(buffer[16]==52 && buffer[17]==69)      //4e  
{ 

tmp[6]=78; 

} 
if(buffer[16]==52 && buffer[17]==70)      //4f  
{ 

tmp[6]=79; 

} 
//------------ 




if(buffer[16]==53 && buffer[17]==48)      //50       
{ 

tmp[6]=80; 

} 

if(buffer[16]==53 && buffer[17]==49)      //51        
{ 

tmp[6]=81; 

} 
if(buffer[16]==53 && buffer[17]==50)      //52        
{ 

tmp[6]=82; 

} 
if(buffer[16]==53 && buffer[17]==51)      //53         
{ 

tmp[6]=83; 

} 
if(buffer[16]==53 && buffer[17]==52)      //54        
{ 

tmp[6]=84; 

} 
if(buffer[16]==53 && buffer[17]==53)      //55      
{ 

tmp[6]=85; 

} 
if(buffer[16]==53 && buffer[17]==54)      //56       
{ 

tmp[6]=86; 

} 
if(buffer[16]==53 && buffer[17]==55)      //57     
{ 

tmp[6]=87; 

} 
if(buffer[16]==53 && buffer[17]==56)      //58     
{ 

tmp[6]=88; 
 
} 
if(buffer[16]==53 && buffer[17]==57)      //59   
{ 

tmp[6]=89; 

} 

if(buffer[16]==53 && buffer[17]==65)      //5a 
{ 

tmp[6]=90; 

} 

if(buffer[16]==53 && buffer[17]==66)      //5b 
{ 

tmp[6]=91; 

} 
if(buffer[16]==53 && buffer[17]==67)      //5c 
{ 

tmp[6]=92; 

} 
if(buffer[16]==53 && buffer[17]==68)      //5d 
{ 

tmp[6]=93; 

} 
if(buffer[16]==53 && buffer[17]==69)      //5e  
{ 

tmp[6]=94; 

} 
if(buffer[16]==53 && buffer[17]==70)      //5f  
{ 

tmp[6]=95; 

} 
//------------ 




if(buffer[16]==54 && buffer[17]==48)      //60       
{ 

tmp[6]=96; 

} 

if(buffer[16]==54 && buffer[17]==49)      //61        
{ 

tmp[6]=97; 

} 
if(buffer[16]==54 && buffer[17]==50)      //62        
{ 

tmp[6]=98; 

} 
if(buffer[16]==54 && buffer[17]==51)      //63         
{ 

tmp[6]=99; 

} 
if(buffer[16]==54 && buffer[17]==52)      //64        
{ 

tmp[6]=100; 

} 
if(buffer[16]==54 && buffer[17]==53)      //65      
{ 

tmp[6]=101; 

} 
if(buffer[16]==54 && buffer[17]==54)      //66       
{ 

tmp[6]=102; 

} 
if(buffer[16]==54 && buffer[17]==55)      //67     
{ 

tmp[6]=103; 

} 
if(buffer[16]==54 && buffer[17]==56)      //68     
{ 

tmp[6]=104; 
 
} 
if(buffer[16]==54 && buffer[17]==57)      //69   
{ 

tmp[6]=105; 

} 

if(buffer[16]==54 && buffer[17]==65)      //6a 
{ 

tmp[6]=106; 

} 

if(buffer[16]==54 && buffer[17]==66)      //6b 
{ 

tmp[6]=107; 

} 
if(buffer[16]==54 && buffer[17]==67)      //6c 
{ 

tmp[6]=108; 

} 
if(buffer[16]==54 && buffer[17]==68)      //6d 
{ 

tmp[6]=109; 

} 
if(buffer[16]==54 && buffer[17]==69)      //6e  
{ 

tmp[6]=110; 

} 
if(buffer[16]==54 && buffer[17]==70)      //6f  
{ 

tmp[6]=111; 

} 
//------------ 




if(buffer[16]==55 && buffer[17]==48)      //70       
{ 

tmp[6]=112; 

} 

if(buffer[16]==55 && buffer[17]==49)      //71        
{ 

tmp[6]=113; 

} 
if(buffer[16]==55 && buffer[17]==50)      //72        
{ 

tmp[6]=114; 

} 
if(buffer[16]==55 && buffer[17]==51)      //73         
{ 

tmp[6]=115; 

} 
if(buffer[16]==55 && buffer[17]==52)      //74        
{ 

tmp[6]=116; 

} 
if(buffer[16]==55 && buffer[17]==53)      //75      
{ 

tmp[6]=117; 

} 
if(buffer[16]==55 && buffer[17]==54)      //76       
{ 

tmp[6]=118; 

} 
if(buffer[16]==55 && buffer[17]==55)      //77     
{ 

tmp[6]=119; 

} 
if(buffer[16]==55 && buffer[17]==56)      //78     
{ 

tmp[6]=120; 
 
} 
if(buffer[16]==55 && buffer[17]==57)      //79   
{ 

tmp[6]=121; 

} 

if(buffer[16]==55 && buffer[17]==65)      //7a 
{ 

tmp[6]=122; 

} 

if(buffer[16]==55 && buffer[17]==66)      //7b 
{ 

tmp[6]=123; 

} 
if(buffer[16]==55 && buffer[17]==67)      //7c 
{ 

tmp[6]=124; 

} 
if(buffer[16]==55 && buffer[17]==68)      //7d 
{ 

tmp[6]=125; 

} 
if(buffer[16]==55 && buffer[17]==69)      //7e  
{ 

tmp[6]=126; 

} 
if(buffer[16]==55 && buffer[17]==70)      //7f  
{ 

tmp[6]=127; 

} 

//------------ 

if(buffer[16]==56 && buffer[17]==48)      //80       
{ 

tmp[6]=128; 

} 

if(buffer[16]==56 && buffer[17]==49)      //81        
{ 

tmp[6]=129; 

} 
if(buffer[16]==56 && buffer[17]==50)      //82        
{ 

tmp[6]=130; 

} 
if(buffer[16]==56 && buffer[17]==51)      //83         
{ 

tmp[6]=131; 

} 
if(buffer[16]==56 && buffer[17]==52)      //84        
{ 

tmp[6]=132; 

} 
if(buffer[16]==56 && buffer[17]==53)      //85      
{ 

tmp[6]=133; 

} 
if(buffer[16]==56 && buffer[17]==54)      //86       
{ 

tmp[6]=134; 

} 
if(buffer[16]==56 && buffer[17]==55)      //87     
{ 

tmp[6]=135; 

} 
if(buffer[16]==56 && buffer[17]==56)      //88     
{ 

tmp[6]=136; 

} 
if(buffer[16]==56 && buffer[17]==57)      //89   
{ 

tmp[6]=137; 

} 

if(buffer[16]==56 && buffer[17]==65)      //8a 
{ 

tmp[6]=138; 

} 

if(buffer[16]==56 && buffer[17]==66)      //8b 
{ 

tmp[6]=139; 

} 
if(buffer[16]==56 && buffer[17]==67)      //8c 
{ 

tmp[6]=140; 

} 
if(buffer[16]==56 && buffer[17]==68)      //8d 
{ 

tmp[6]=141; 

} 
if(buffer[16]==56 && buffer[17]==69)      //8e  
{ 

tmp[6]=142; 

} 
if(buffer[16]==56 && buffer[17]==70)      //8f  
{ 

tmp[6]=143; 

} 
//------------ 


if(buffer[16]==57 && buffer[17]==48)      //90       
{ 

tmp[6]=144; 

} 

if(buffer[16]==57 && buffer[17]==49)      //91        
{ 

tmp[6]=145; 

} 
if(buffer[16]==57 && buffer[17]==50)      //92        
{ 

tmp[6]=146; 

} 
if(buffer[16]==57 && buffer[17]==51)      //93         
{ 

tmp[6]=147; 

} 
if(buffer[16]==57 && buffer[17]==52)      //94        
{ 

tmp[6]=148; 

} 
if(buffer[16]==57 && buffer[17]==53)      //95      
{ 

tmp[6]=149; 

} 
if(buffer[16]==57 && buffer[17]==54)      //96       
{ 

tmp[6]=150; 

} 
if(buffer[16]==57 && buffer[17]==55)      //97     
{ 

tmp[6]=151; 

} 
if(buffer[16]==57 && buffer[17]==56)      //98     
{ 

tmp[6]=152; 

} 
if(buffer[16]==57 && buffer[17]==57)      //99   
{ 
 
tmp[6]=153; 

} 

if(buffer[16]==57 && buffer[17]==65)      //9a 
{ 

tmp[6]=154; 

} 

if(buffer[16]==57 && buffer[17]==66)      //9b 
{ 

tmp[6]=155; 

} 
if(buffer[16]==57 && buffer[17]==67)      //9c 
{ 

tmp[6]=156; 

} 
if(buffer[16]==57 && buffer[17]==68)      //9d 
{ 

tmp[6]=157; 

} 
if(buffer[16]==57 && buffer[17]==69)      //9e  
{ 

tmp[6]=158; 

} 
if(buffer[16]==57 && buffer[17]==70)      //9f  
{ 

tmp[6]=159; 

} 
//------------ 


if(buffer[16]==65 && buffer[17]==48)      //a0       
{ 

tmp[6]=160; 

} 

if(buffer[16]==65 && buffer[17]==49)      //a1        
{ 

tmp[6]=161; 

} 
if(buffer[16]==65 && buffer[17]==50)      //a2        
{ 

tmp[6]=162; 

} 
if(buffer[16]==65 && buffer[17]==51)      //a3         
{ 

tmp[6]=163; 

} 
if(buffer[16]==65 && buffer[17]==52)      //a4        
{ 

tmp[6]=164; 

} 
if(buffer[16]==65 && buffer[17]==53)      //a5      
{ 

tmp[6]=165; 

} 
if(buffer[16]==65 && buffer[17]==54)      //a6       
{ 

tmp[6]=166; 

} 
if(buffer[16]==65 && buffer[17]==55)      //a7     
{ 

tmp[6]=167; 

} 
if(buffer[16]==65 && buffer[17]==56)      //a8     
{ 

tmp[6]=168; 

} 
if(buffer[16]==65 && buffer[17]==57)      //a9   
{ 

tmp[6]=169; 
 
} 

if(buffer[16]==65 && buffer[17]==65)      //aa 
{ 

tmp[6]=170; 

} 

if(buffer[16]==65 && buffer[17]==66)      //ab 
{ 

tmp[6]=171; 

} 
if(buffer[16]==65 && buffer[17]==67)      //ac 
{ 

tmp[6]=172; 

} 
if(buffer[16]==65 && buffer[17]==68)      //ad 
{ 

tmp[6]=173; 

} 
if(buffer[16]==65 && buffer[17]==69)      //ae  
{ 

tmp[6]=174; 

} 
if(buffer[16]==65 && buffer[17]==70)      //af  
{ 

tmp[6]=175; 

} 
//------------ 


if(buffer[16]==66 && buffer[17]==48)      //b0       
{ 

tmp[6]=176; 

} 

if(buffer[16]==66 && buffer[17]==49)      //b1        
{ 
 
tmp[6]=177; 

} 
if(buffer[16]==66 && buffer[17]==50)      //b2        
{ 

tmp[6]=178; 

} 
if(buffer[16]==66 && buffer[17]==51)      //b3         
{ 

tmp[6]=179; 

} 
if(buffer[16]==66 && buffer[17]==52)      //b4        
{ 

tmp[6]=180; 

} 
if(buffer[16]==66 && buffer[17]==53)      //b5      
{ 

tmp[6]=181; 

} 
if(buffer[16]==66 && buffer[17]==54)      //b6       
{ 

tmp[6]=182; 

} 
if(buffer[16]==66 && buffer[17]==55)      //b7     
{ 

tmp[6]=183; 

} 
if(buffer[16]==66 && buffer[17]==56)      //b8     
{ 

tmp[6]=184; 

} 
if(buffer[16]==66 && buffer[17]==57)      //b9   
{ 

tmp[6]=185; 

} 
 
if(buffer[16]==66 && buffer[17]==65)      //ba 
{ 

tmp[6]=186; 

} 

if(buffer[16]==66 && buffer[17]==66)      //bb 
{ 

tmp[6]=187; 

} 
if(buffer[16]==66 && buffer[17]==67)      //bc 
{ 

tmp[6]=188; 

} 
if(buffer[16]==66 && buffer[17]==68)      //bd 
{ 

tmp[6]=189; 

} 
if(buffer[16]==66 && buffer[17]==69)      //be  
{ 

tmp[6]=190; 

} 
if(buffer[16]==66 && buffer[17]==70)      //bf  
{ 

tmp[6]=191; 

} 
//------------ 



if(buffer[16]==67 && buffer[17]==48)      //c0       
{ 

tmp[6]=192; 

} 

if(buffer[16]==67 && buffer[17]==49)      //c1        
{ 

tmp[6]=193; 

} 
if(buffer[16]==67 && buffer[17]==50)      //c2        
{ 

tmp[6]=194; 

} 
if(buffer[16]==67 && buffer[17]==51)      //c3         
{ 

tmp[6]=195; 

} 
if(buffer[16]==67 && buffer[17]==52)      //c4        
{ 

tmp[6]=196; 

} 
if(buffer[16]==67 && buffer[17]==53)      //c5      
{ 

tmp[6]=197; 

} 
if(buffer[16]==67 && buffer[17]==54)      //c6       
{ 

tmp[6]=198; 

} 
if(buffer[16]==67 && buffer[17]==55)      //c7     
{ 

tmp[6]=199; 

} 
if(buffer[16]==67 && buffer[17]==56)      //c8     
{ 

tmp[6]=200; 

} 
if(buffer[16]==67 && buffer[17]==57)      //c9   
{ 

tmp[6]=201; 

} 

if(buffer[16]==67 && buffer[17]==65)      //ca 
{ 

tmp[6]=202; 

} 

if(buffer[16]==67 && buffer[17]==66)      //cb 
{ 

tmp[6]=203; 

} 
if(buffer[16]==67 && buffer[17]==67)      //cc 
{ 

tmp[6]=204; 

} 
if(buffer[16]==67 && buffer[17]==68)      //cd 
{ 

tmp[6]=205; 

} 
if(buffer[16]==67 && buffer[17]==69)      //ce  
{ 

tmp[6]=206; 

} 
if(buffer[16]==67 && buffer[17]==70)      //cf  
{ 

tmp[6]=207; 

} 
//------------ 


if(buffer[16]==68 && buffer[17]==48)      //d0       
{ 

tmp[6]=208; 

} 

if(buffer[16]==68 && buffer[17]==49)      //d1        
{ 

tmp[6]=209; 

} 
if(buffer[16]==68 && buffer[17]==50)      //d2        
{ 

tmp[6]=210; 

} 
if(buffer[16]==68 && buffer[17]==51)      //d3         
{ 

tmp[6]=211; 

} 
if(buffer[16]==68 && buffer[17]==52)      //d4        
{ 

tmp[6]=212; 

} 
if(buffer[16]==68 && buffer[17]==53)      //d5      
{ 

tmp[6]=213; 

} 
if(buffer[16]==68 && buffer[17]==54)      //d6       
{ 

tmp[6]=214; 

} 
if(buffer[16]==68 && buffer[17]==55)      //d7     
{ 

tmp[6]=215; 

} 
if(buffer[16]==68 && buffer[17]==56)      //d8     
{ 

tmp[6]=216; 

} 
if(buffer[16]==68 && buffer[17]==57)      //d9   
{ 

tmp[6]=217; 

} 

if(buffer[16]==68 && buffer[17]==65)      //da 
{ 
 
tmp[6]=218; 

} 

if(buffer[16]==68 && buffer[17]==66)      //db 
{ 

tmp[6]=219; 

} 
if(buffer[16]==68 && buffer[17]==67)      //dc 
{ 

tmp[6]=220; 

} 
if(buffer[16]==68 && buffer[17]==68)      //dd 
{ 

tmp[6]=221; 

} 
if(buffer[16]==68 && buffer[17]==69)      //de  
{ 

tmp[6]=222; 

} 
if(buffer[16]==68 && buffer[17]==70)      //df  
{ 

tmp[6]=223; 

} 
//------------ 



if(buffer[16]==69 && buffer[17]==48)      //e0       
{ 

tmp[6]=224; 

} 

if(buffer[16]==69 && buffer[17]==49)      //e1        
{ 

tmp[6]=225; 

} 
if(buffer[16]==69 && buffer[17]==50)      //e2        
{ 

tmp[6]=226; 

} 
if(buffer[16]==69 && buffer[17]==51)      //e3         
{ 

tmp[6]=227; 

} 
if(buffer[16]==69 && buffer[17]==52)      //e4        
{ 

tmp[6]=228; 

} 
if(buffer[16]==69 && buffer[17]==53)      //e5      
{ 

tmp[6]=229; 

} 
if(buffer[16]==69 && buffer[17]==54)      //e6       
{ 

tmp[6]=230; 

} 
if(buffer[16]==69 && buffer[17]==55)      //e7     
{ 

tmp[6]=231; 

} 
if(buffer[16]==69 && buffer[17]==56)      //e8     
{ 

tmp[6]=232; 

} 
if(buffer[16]==69 && buffer[17]==57)      //e9   
{ 

tmp[6]=233; 

} 

if(buffer[16]==69 && buffer[17]==65)      //ea 
{ 

tmp[6]=234; 

} 

if(buffer[16]==69 && buffer[17]==66)      //eb 
{ 

tmp[6]=235; 

} 
if(buffer[16]==69 && buffer[17]==67)      //ec 
{ 

tmp[6]=236; 

} 
if(buffer[16]==69 && buffer[17]==68)      //ed 
{ 

tmp[6]=237; 

} 
if(buffer[16]==69 && buffer[17]==69)      //ee  
{ 

tmp[6]=238; 

} 
if(buffer[16]==69 && buffer[17]==70)      //ef  
{ 

tmp[6]=239; 

} 
//------------ 

if(buffer[16]==70 && buffer[17]==48)      //f0       
{ 

tmp[6]=240; 

} 

if(buffer[16]==70 && buffer[17]==49)      //f1        
{ 

tmp[6]=241; 

} 
if(buffer[16]==70 && buffer[17]==50)      //f2        
{ 

tmp[6]=242; 

} 
if(buffer[16]==70 && buffer[17]==51)      //f3         
{ 

tmp[6]=243; 

} 
if(buffer[16]==70 && buffer[17]==52)      //f4        
{ 

tmp[6]=244; 

} 
if(buffer[16]==70 && buffer[17]==53)      //f5      
{ 

tmp[6]=245; 

} 
if(buffer[16]==70 && buffer[17]==54)      //f6       
{ 

tmp[6]=246; 

} 
if(buffer[16]==70 && buffer[17]==55)      //f7     
{ 

tmp[6]=247; 

} 
if(buffer[16]==70 && buffer[17]==56)      //f8     
{ 

tmp[6]=248; 

} 
if(buffer[16]==70 && buffer[17]==57)      //f9   
{ 

tmp[6]=249; 

} 

if(buffer[16]==70 && buffer[17]==65)      //fa 
{ 

tmp[6]=250; 

} 
 
if(buffer[16]==70 && buffer[17]==66)      //fb 
{ 

tmp[6]=251; 

} 
if(buffer[16]==70 && buffer[17]==67)      //fc 
{ 

tmp[6]=252; 

} 
if(buffer[16]==70 && buffer[17]==68)      //fd 
{ 

tmp[6]=253; 

} 
if(buffer[16]==70 && buffer[17]==69)      //fe  
{ 

tmp[6]=254; 

} 
if(buffer[16]==70 && buffer[17]==70)      //ff  
{ 

tmp[6]=255; 

} 

//----------------------- end of tmp[6]--------------------------- 

//----------------------- start of tmp[7]--------------------------- 

if(buffer[18]==48 && buffer[19]==48)      //00        
{ 

tmp[7]=0; 

} 

if(buffer[18]==48 && buffer[19]==49)      //01        
{ 

tmp[7]=1; 

} 
if(buffer[18]==48 && buffer[19]==50)      //02        
{ 

tmp[7]=2; 

} 
if(buffer[18]==48 && buffer[19]==51)      //03         
{ 

tmp[7]=3; 

} 
if(buffer[18]==48 && buffer[19]==52)      //04        
{ 

tmp[7]=4; 

} 
if(buffer[18]==48 && buffer[19]==53)      //05      
{ 

tmp[7]=5; 

} 


if(buffer[18]==48 && buffer[19]==54)      //06       
{ 

tmp[7]=6; 

} 
if(buffer[18]==48 && buffer[19]==55)      //07     
{ 

tmp[7]=7; 

} 
if(buffer[18]==48 && buffer[19]==56)      //08     
{ 

tmp[7]=8; 

} 
if(buffer[18]==48 && buffer[19]==57)      //09   
{ 

tmp[7]=9; 

} 

if(buffer[18]==48 && buffer[19]==65)      //0a 
{ 

tmp[7]=10; 
 
} 

if(buffer[18]==48 && buffer[19]==66)      //0b 
{ 

tmp[7]=11; 

} 
if(buffer[18]==48 && buffer[19]==67)      //0c 
{ 

tmp[7]=12; 

} 
if(buffer[18]==48 && buffer[19]==68)      //0d 
{ 

tmp[7]=13; 

} 
if(buffer[18]==48 && buffer[19]==69)      //0e  
{ 

tmp[7]=14; 

} 
if(buffer[18]==48 && buffer[19]==70)      //0f  
{ 

tmp[7]=15; 

} 

//----------- 

if(buffer[18]==49 && buffer[19]==48)      //        10 
{ 

tmp[7]=16; 

} 
if(buffer[18]==49 && buffer[19]==49)      //         11 
{ 

tmp[7]=17; 

} 
if(buffer[18]==49 && buffer[19]==50)      //         12 
{ 

tmp[7]=18; 
 
} 
if(buffer[18]==49 && buffer[19]==51)      //         13 
{ 

tmp[7]=19; 

} 
if(buffer[18]==49 && buffer[19]==52)      //         14 
{ 

tmp[7]=20; 

} 
if(buffer[18]==49 && buffer[19]==53)      //         15 
{ 

tmp[7]=21; 

} 
if(buffer[18]==49 && buffer[19]==54)      //         16 
{ 

tmp[7]=22; 

} 
if(buffer[18]==49 && buffer[19]==55)      //         17 
{ 

tmp[7]=23; 

} 
if(buffer[18]==49 && buffer[19]==56)      //         18 
{ 

tmp[7]=24; 

} 
if(buffer[18]==49 && buffer[19]==57)      //         19 
{ 

tmp[7]=25; 

} 

if(buffer[18]==49 && buffer[19]==65)      //         1a 
{ 

tmp[7]=26; 

} 
if(buffer[18]==49 && buffer[19]==66)      //         1b 
{ 

tmp[7]=27; 

} 
if(buffer[18]==49 && buffer[19]==67)      //         1c 
{ 

tmp[7]=28; 

} 
if(buffer[18]==49 && buffer[19]==68)      //         1d 
{ 

tmp[7]=29; 

} 
if(buffer[18]==49 && buffer[19]==69)      //         1e 
{ 

tmp[7]=30; 

} 
if(buffer[18]==49 && buffer[19]==70)      //         1f 
{ 

tmp[7]=31; 

} 


//--------------- 


if(buffer[18]==50 && buffer[19]==48)      //         20 
{ 

tmp[7]=32; 

} 

if(buffer[18]==50 && buffer[19]==49)      //         21 
{ 

tmp[7]=33; 

} 
if(buffer[18]==50 && buffer[19]==50)      //         22 
{ 

tmp[7]=34; 

} 
if(buffer[18]==50 && buffer[19]==51)      //         23 
{ 

tmp[7]=35; 

} 
if(buffer[18]==50 && buffer[19]==52)      //         24 
{ 

tmp[7]=36; 

} 
if(buffer[18]==50 && buffer[19]==53)      //         25 
{ 

tmp[7]=37; 

} 
if(buffer[18]==50 && buffer[19]==54)      //         26 
{ 

tmp[7]=38; 

} 
if(buffer[18]==50 && buffer[19]==55)      //         27 
{ 

tmp[7]=39; 

} 
if(buffer[18]==50 && buffer[19]==56)      //         28 
{ 

tmp[7]=40; 

} 
if(buffer[18]==50 && buffer[19]==57)      //         29 
{ 

tmp[7]=41; 

} 
if(buffer[18]==50 && buffer[19]==65)      //         2a 
{ 

tmp[7]=42; 

} 
if(buffer[18]==50 && buffer[19]==66)      //         2b 
{ 

tmp[7]=43; 

} 
if(buffer[18]==50 && buffer[19]==67)      //         2c 
{ 

tmp[7]=44; 

} 

if(buffer[18]==50 && buffer[19]==68)      //       2d  
{ 

tmp[7]=45; 

} 
if(buffer[18]==50 && buffer[19]==69)      //         2e 
{ 

tmp[7]=46; 

} 
if(buffer[18]==50 && buffer[19]==70)      //         2f 
{ 

tmp[7]=47; 

} 

//------------- 


if(buffer[18]==51 && buffer[19]==48)      // 30        
{ 

tmp[7]=48; 

} 

if(buffer[18]==51 && buffer[19]==49)      // 31        
{ 

tmp[7]=49; 

} 
if(buffer[18]==51 && buffer[19]==50)      // 32        
{ 

tmp[7]=50; 

} 
if(buffer[18]==51 && buffer[19]==51)      //33         
{ 

tmp[7]=51; 

} 
if(buffer[18]==51 && buffer[19]==52)      //34        
{ 

tmp[7]=52; 

} 
if(buffer[18]==51 && buffer[19]==53)      //35      
{ 

tmp[7]=53; 

} 
if(buffer[18]==51 && buffer[19]==54)      //36       
{ 

tmp[7]=54; 

} 
if(buffer[18]==51 && buffer[19]==55)      //37     
{ 

tmp[7]=55; 

} 
if(buffer[18]==51 && buffer[19]==56)      //38     
{ 

tmp[7]=56; 

} 
if(buffer[18]==51 && buffer[19]==57)      //39   
{ 

tmp[7]=57; 

} 

if(buffer[18]==51 && buffer[19]==65)      //3a 
{ 

tmp[7]=58; 

} 

if(buffer[18]==51 && buffer[19]==66)      //3b 
{ 

tmp[7]=59; 

} 
if(buffer[18]==51 && buffer[19]==67)      //3c 
{ 

tmp[7]=60; 

} 
if(buffer[18]==51 && buffer[19]==68)      //3d 
{ 

tmp[7]=61; 

} 
if(buffer[18]==51 && buffer[19]==69)      //3e  
{ 

tmp[7]=62; 

} 
if(buffer[18]==51 && buffer[19]==70)      //3f  
{ 

tmp[7]=63; 

} 

//------------ 


if(buffer[18]==52 && buffer[19]==48)      // 40       
{ 

tmp[7]=64; 

} 

if(buffer[18]==52 && buffer[19]==49)      // 41        
{ 

tmp[7]=65; 

} 
if(buffer[18]==52 && buffer[19]==50)      // 42        
{ 

tmp[7]=66; 

} 
if(buffer[18]==52 && buffer[19]==51)      //43         
{ 
 
tmp[7]=67; 

} 
if(buffer[18]==52 && buffer[19]==52)      //44        
{ 

tmp[7]=68; 

} 
if(buffer[18]==52 && buffer[19]==53)      //45      
{ 

tmp[7]=69; 

} 

if(buffer[18]==52 && buffer[19]==54)      //46       
{ 

tmp[7]=70; 

} 
if(buffer[18]==52 && buffer[19]==55)      //47     
{ 

tmp[7]=71; 

} 
if(buffer[18]==52 && buffer[19]==56)      //48     
{ 

tmp[7]=72; 

} 
if(buffer[18]==52 && buffer[19]==57)      //49   
{ 

tmp[7]=73; 

} 

if(buffer[18]==52 && buffer[19]==65)      //4a 
{ 

tmp[7]=74; 

} 

if(buffer[18]==52 && buffer[19]==66)      //4b 
{ 

tmp[7]=75; 

} 
if(buffer[18]==52 && buffer[19]==67)      //4c 
{ 

tmp[7]=76; 

} 
if(buffer[18]==52 && buffer[19]==68)      //4d 
{ 

tmp[7]=77; 

} 
if(buffer[18]==52 && buffer[19]==69)      //4e  
{ 

tmp[7]=78; 

} 
if(buffer[18]==52 && buffer[19]==70)      //4f  
{ 

tmp[7]=79; 

} 
//------------ 




if(buffer[18]==53 && buffer[19]==48)      //50       
{ 

tmp[7]=80; 

} 

if(buffer[18]==53 && buffer[19]==49)      //51        
{ 

tmp[7]=81; 

} 
if(buffer[18]==53 && buffer[19]==50)      //52        
{ 

tmp[7]=82; 

} 
if(buffer[18]==53 && buffer[19]==51)      //53         
{ 

tmp[7]=83; 

} 
if(buffer[18]==53 && buffer[19]==52)      //54        
{ 

tmp[7]=84; 

} 
if(buffer[18]==53 && buffer[19]==53)      //55      
{ 

tmp[7]=85; 

} 
if(buffer[18]==53 && buffer[19]==54)      //56       
{ 

tmp[7]=86; 

} 
if(buffer[18]==53 && buffer[19]==55)      //57     
{ 

tmp[7]=87; 

} 
if(buffer[18]==53 && buffer[19]==56)      //58     
{ 

tmp[7]=88; 

} 
if(buffer[18]==53 && buffer[19]==57)      //59   
{ 

tmp[7]=89; 

} 

if(buffer[18]==53 && buffer[19]==65)      //5a 
{ 

tmp[7]=90; 

} 

if(buffer[18]==53 && buffer[19]==66)      //5b 
{ 

tmp[7]=91; 

} 
if(buffer[18]==53 && buffer[19]==67)      //5c 
{ 

tmp[7]=92; 

} 
if(buffer[18]==53 && buffer[19]==68)      //5d 
{ 

tmp[7]=93; 

} 
if(buffer[18]==53 && buffer[19]==69)      //5e  
{ 

tmp[7]=94; 

} 
if(buffer[18]==53 && buffer[19]==70)      //5f  
{ 

tmp[7]=95; 

} 
//------------ 




if(buffer[18]==54 && buffer[19]==48)      //60       
{ 

tmp[7]=96; 

} 

if(buffer[18]==54 && buffer[19]==49)      //61        
{ 

tmp[7]=97; 

} 
if(buffer[18]==54 && buffer[19]==50)      //62        
{ 

tmp[7]=98; 

} 
if(buffer[18]==54 && buffer[19]==51)      //63         
{ 

tmp[7]=99; 

} 
if(buffer[18]==54 && buffer[19]==52)      //64        
{ 

tmp[7]=100; 

} 
if(buffer[18]==54 && buffer[19]==53)      //65      
{ 

tmp[7]=101; 

} 
if(buffer[18]==54 && buffer[19]==54)      //66       
{ 

tmp[7]=102; 

} 
if(buffer[18]==54 && buffer[19]==55)      //67     
{ 

tmp[7]=103; 

} 
if(buffer[18]==54 && buffer[19]==56)      //68     
{ 

tmp[7]=104; 

} 
if(buffer[18]==54 && buffer[19]==57)      //69   
{ 

tmp[7]=105; 

} 

if(buffer[18]==54 && buffer[19]==65)      //6a 
{ 

tmp[7]=106; 

} 

if(buffer[18]==54 && buffer[19]==66)      //6b 
{ 

tmp[7]=107; 

} 
if(buffer[18]==54 && buffer[19]==67)      //6c 
{ 

tmp[7]=108; 

} 
if(buffer[18]==54 && buffer[19]==68)      //6d 
{ 

tmp[7]=109; 

} 
if(buffer[18]==54 && buffer[19]==69)      //6e  
{ 

tmp[7]=110; 

} 
if(buffer[18]==54 && buffer[19]==70)      //6f  
{ 

tmp[7]=111; 

} 
//------------ 




if(buffer[18]==55 && buffer[19]==48)      //70       
{ 

tmp[7]=112; 

} 

if(buffer[18]==55 && buffer[19]==49)      //71        
{ 

tmp[7]=113; 

} 
if(buffer[18]==55 && buffer[19]==50)      //72        
{ 

tmp[7]=114; 

} 
if(buffer[18]==55 && buffer[19]==51)      //73         
{ 

tmp[7]=115; 

} 
if(buffer[18]==55 && buffer[19]==52)      //74        
{ 

tmp[7]=116; 

} 
if(buffer[18]==55 && buffer[19]==53)      //75      
{ 

tmp[7]=117; 

} 
if(buffer[18]==55 && buffer[19]==54)      //76       
{ 

tmp[7]=118; 

} 
if(buffer[18]==55 && buffer[19]==55)      //77     
{ 

tmp[7]=119; 

} 
if(buffer[18]==55 && buffer[19]==56)      //78     
{ 

tmp[7]=120; 

} 
if(buffer[18]==55 && buffer[19]==57)      //79   
{ 

tmp[7]=121; 

} 

if(buffer[18]==55 && buffer[19]==65)      //7a 
{ 

tmp[7]=122; 

} 

if(buffer[18]==55 && buffer[19]==66)      //7b 
{ 

tmp[7]=123; 

} 
if(buffer[18]==55 && buffer[19]==67)      //7c 
{ 

tmp[7]=124; 

} 
if(buffer[18]==55 && buffer[19]==68)      //7d 
{ 

tmp[7]=125; 

} 
if(buffer[18]==55 && buffer[19]==69)      //7e  
{ 

tmp[7]=126; 

} 
if(buffer[18]==55 && buffer[19]==70)      //7f  
{ 

tmp[7]=127; 

} 

//------------ 

if(buffer[18]==56 && buffer[19]==48)      //80       
{ 

tmp[7]=128; 

} 

if(buffer[18]==56 && buffer[19]==49)      //81        
{ 

tmp[7]=129; 

} 
if(buffer[18]==56 && buffer[19]==50)      //82        
{ 

tmp[7]=130; 

} 
if(buffer[18]==56 && buffer[19]==51)      //83         
{ 

tmp[7]=131; 

} 
if(buffer[18]==56 && buffer[19]==52)      //84        
{ 

tmp[7]=132; 

} 
if(buffer[18]==56 && buffer[19]==53)      //85      
{ 

tmp[7]=133; 

} 
if(buffer[18]==56 && buffer[19]==54)      //86       
{ 

tmp[7]=134; 

} 
if(buffer[18]==56 && buffer[19]==55)      //87     
{ 

tmp[7]=135; 

} 
if(buffer[18]==56 && buffer[19]==56)      //88     
{ 

tmp[7]=136; 

} 
if(buffer[18]==56 && buffer[19]==57)      //89   
{ 

tmp[7]=137; 

} 

if(buffer[18]==56 && buffer[19]==65)      //8a 
{ 

tmp[7]=138; 

} 

if(buffer[18]==56 && buffer[19]==66)      //8b 
{ 

tmp[7]=139; 

} 
if(buffer[18]==56 && buffer[19]==67)      //8c 
{ 

tmp[7]=140; 

} 
if(buffer[18]==56 && buffer[19]==68)      //8d 
{ 

tmp[7]=141; 

} 
if(buffer[18]==56 && buffer[19]==69)      //8e  
{ 

tmp[7]=142; 

} 
if(buffer[18]==56 && buffer[19]==70)      //8f  
{ 

tmp[7]=143; 

} 
//------------ 


if(buffer[18]==57 && buffer[19]==48)      //90       
{ 

tmp[7]=144; 

} 

if(buffer[18]==57 && buffer[19]==49)      //91        
{ 

tmp[7]=145; 

} 
if(buffer[18]==57 && buffer[19]==50)      //92        
{ 

tmp[7]=146; 

} 
if(buffer[18]==57 && buffer[19]==51)      //93         
{ 

tmp[7]=147; 

} 
if(buffer[18]==57 && buffer[19]==52)      //94        
{ 

tmp[7]=148; 

} 
if(buffer[18]==57 && buffer[19]==53)      //95      
{ 

tmp[7]=149; 

} 
if(buffer[18]==57 && buffer[19]==54)      //96       
{ 

tmp[7]=150; 

} 
if(buffer[18]==57 && buffer[19]==55)      //97     
{ 

tmp[7]=151; 

} 
if(buffer[18]==57 && buffer[19]==56)      //98     
{ 

tmp[7]=152; 

} 
if(buffer[18]==57 && buffer[19]==57)      //99   
{ 

tmp[7]=153; 

} 

if(buffer[18]==57 && buffer[19]==65)      //9a 
{ 

tmp[7]=154; 

} 

if(buffer[18]==57 && buffer[19]==66)      //9b 
{ 

tmp[7]=155; 

} 
if(buffer[18]==57 && buffer[19]==67)      //9c 
{ 

tmp[7]=156; 

} 
if(buffer[18]==57 && buffer[19]==68)      //9d 
{ 

tmp[7]=157; 

} 
if(buffer[18]==57 && buffer[19]==69)      //9e  
{ 

tmp[7]=158; 

} 
if(buffer[18]==57 && buffer[19]==70)      //9f  
{ 

tmp[7]=159; 

} 
//------------ 


if(buffer[18]==65 && buffer[19]==48)      //a0       
{ 

tmp[7]=160; 

} 

if(buffer[18]==65 && buffer[19]==49)      //a1        
{ 

tmp[7]=161; 

} 
if(buffer[18]==65 && buffer[19]==50)      //a2        
{ 

tmp[7]=162; 

} 
if(buffer[18]==65 && buffer[19]==51)      //a3         
{ 

tmp[7]=163; 

} 
if(buffer[18]==65 && buffer[19]==52)      //a4        
{ 

tmp[7]=164; 

} 
if(buffer[18]==65 && buffer[19]==53)      //a5      
{ 

tmp[7]=165; 

} 
if(buffer[18]==65 && buffer[19]==54)      //a6       
{ 

tmp[7]=166; 

} 
if(buffer[18]==65 && buffer[19]==55)      //a7     
{ 

tmp[7]=167; 

} 
if(buffer[18]==65 && buffer[19]==56)      //a8     
{ 

tmp[7]=168; 

} 
if(buffer[18]==65 && buffer[19]==57)      //a9   
{ 

tmp[7]=169; 

} 

if(buffer[18]==65 && buffer[19]==65)      //aa 
{ 

tmp[7]=170; 

} 

if(buffer[18]==65 && buffer[19]==66)      //ab 
{ 

tmp[7]=171; 

} 
if(buffer[18]==65 && buffer[19]==67)      //ac 
{ 

tmp[7]=172; 

} 
if(buffer[18]==65 && buffer[19]==68)      //ad 
{ 

tmp[7]=173; 

} 
if(buffer[18]==65 && buffer[19]==69)      //ae  
{ 

tmp[7]=174; 

} 
if(buffer[18]==65 && buffer[19]==70)      //af  
{ 

tmp[7]=175; 

} 
//------------ 


if(buffer[18]==66 && buffer[19]==48)      //b0       
{ 

tmp[7]=176; 

} 

if(buffer[18]==66 && buffer[19]==49)      //b1        
{ 

tmp[7]=177; 

} 
if(buffer[18]==66 && buffer[19]==50)      //b2        
{ 

tmp[7]=178; 

} 
if(buffer[18]==66 && buffer[19]==51)      //b3         
{ 

tmp[7]=179; 

} 
if(buffer[18]==66 && buffer[19]==52)      //b4        
{ 

tmp[7]=180; 

} 
if(buffer[18]==66 && buffer[19]==53)      //b5      
{ 

tmp[7]=181; 

} 
if(buffer[18]==66 && buffer[19]==54)      //b6       
{ 

tmp[7]=182; 

} 
if(buffer[18]==66 && buffer[19]==55)      //b7     
{ 

tmp[7]=183; 

} 
if(buffer[18]==66 && buffer[19]==56)      //b8     
{ 

tmp[7]=184; 

} 
if(buffer[18]==66 && buffer[19]==57)      //b9   
{ 

tmp[7]=185; 

} 

if(buffer[18]==66 && buffer[19]==65)      //ba 
{ 

tmp[7]=186; 

} 

if(buffer[18]==66 && buffer[19]==66)      //bb 
{ 

tmp[7]=187; 

} 
if(buffer[18]==66 && buffer[19]==67)      //bc 
{ 

tmp[7]=188; 

} 
if(buffer[18]==66 && buffer[19]==68)      //bd 
{ 

tmp[7]=189; 

} 
if(buffer[18]==66 && buffer[19]==69)      //be  
{ 

tmp[7]=190; 

} 
if(buffer[18]==66 && buffer[19]==70)      //bf  
{ 

tmp[7]=191; 

} 
//------------ 



if(buffer[18]==67 && buffer[19]==48)      //c0       
{ 

tmp[7]=192; 

} 

if(buffer[18]==67 && buffer[19]==49)      //c1        
{ 

tmp[7]=193; 

} 
if(buffer[18]==67 && buffer[19]==50)      //c2        
{ 

tmp[7]=194; 

} 
if(buffer[18]==67 && buffer[19]==51)      //c3         
{ 

tmp[7]=195; 

} 
if(buffer[18]==67 && buffer[19]==52)      //c4        
{ 

tmp[7]=196; 
 
} 
if(buffer[18]==67 && buffer[19]==53)      //c5      
{ 

tmp[7]=197; 

} 
if(buffer[18]==67 && buffer[19]==54)      //c6       
{ 

tmp[7]=198; 

} 
if(buffer[18]==67 && buffer[19]==55)      //c7     
{ 

tmp[7]=199; 

} 
if(buffer[18]==67 && buffer[19]==56)      //c8     
{ 

tmp[7]=200; 

} 
if(buffer[18]==67 && buffer[19]==57)      //c9   
{ 

tmp[7]=201; 

} 

if(buffer[18]==67 && buffer[19]==65)      //ca 
{ 

tmp[7]=202; 

} 

if(buffer[18]==67 && buffer[19]==66)      //cb 
{ 

tmp[7]=203; 

} 
if(buffer[18]==67 && buffer[19]==67)      //cc 
{ 

tmp[7]=204; 

} 
if(buffer[18]==67 && buffer[19]==68)      //cd 
{ 

tmp[7]=205; 

} 
if(buffer[18]==67 && buffer[19]==69)      //ce  
{ 

tmp[7]=206; 

} 
if(buffer[18]==67 && buffer[19]==70)      //cf  
{ 

tmp[7]=207; 

} 
//------------ 


if(buffer[18]==68 && buffer[19]==48)      //d0       
{ 

tmp[7]=208; 

} 

if(buffer[18]==68 && buffer[19]==49)      //d1        
{ 

tmp[7]=209; 

} 
if(buffer[18]==68 && buffer[19]==50)      //d2        
{ 

tmp[7]=210; 

} 
if(buffer[18]==68 && buffer[19]==51)      //d3         
{ 

tmp[7]=211; 

} 
if(buffer[18]==68 && buffer[19]==52)      //d4        
{ 

tmp[7]=212; 

} 
if(buffer[18]==68 && buffer[19]==53)      //d5      
{ 

tmp[7]=213; 

} 
if(buffer[18]==68 && buffer[19]==54)      //d6       
{ 

tmp[7]=214; 

} 
if(buffer[18]==68 && buffer[19]==55)      //d7     
{ 

tmp[7]=215; 

} 
if(buffer[18]==68 && buffer[19]==56)      //d8     
{ 

tmp[7]=216; 

} 
if(buffer[18]==68 && buffer[19]==57)      //d9   
{ 

tmp[7]=217; 

} 

if(buffer[18]==68 && buffer[19]==65)      //da 
{ 

tmp[7]=218; 

} 

if(buffer[18]==68 && buffer[19]==66)      //db 
{ 

tmp[7]=219; 

} 
if(buffer[18]==68 && buffer[19]==67)      //dc 
{ 

tmp[7]=220; 

} 
if(buffer[18]==68 && buffer[19]==68)      //dd 
{ 
 
tmp[7]=221; 

} 
if(buffer[18]==68 && buffer[19]==69)      //de  
{ 

tmp[7]=222; 

} 
if(buffer[18]==68 && buffer[19]==70)      //df  
{ 

tmp[7]=223; 

} 
//------------ 



if(buffer[18]==69 && buffer[19]==48)      //e0       
{ 

tmp[7]=224; 

} 

if(buffer[18]==69 && buffer[19]==49)      //e1        
{ 

tmp[7]=225; 

} 
if(buffer[18]==69 && buffer[19]==50)      //e2        
{ 

tmp[7]=226; 

} 
if(buffer[18]==69 && buffer[19]==51)      //e3         
{ 

tmp[7]=227; 

} 
if(buffer[18]==69 && buffer[19]==52)      //e4        
{ 

tmp[7]=228; 

} 
if(buffer[18]==69 && buffer[19]==53)      //e5      
{ 

tmp[7]=229; 

} 
if(buffer[18]==69 && buffer[19]==54)      //e6       
{ 

tmp[7]=230; 

} 
if(buffer[18]==69 && buffer[19]==55)      //e7     
{ 

tmp[7]=231; 

} 
if(buffer[18]==69 && buffer[19]==56)      //e8     
{ 

tmp[7]=232; 

} 
if(buffer[18]==69 && buffer[19]==57)      //e9   
{ 

tmp[7]=233; 

} 

if(buffer[18]==69 && buffer[19]==65)      //ea 
{ 

tmp[7]=234; 

} 

if(buffer[18]==69 && buffer[19]==66)      //eb 
{ 

tmp[7]=235; 

} 
if(buffer[18]==69 && buffer[19]==67)      //ec 
{ 

tmp[7]=236; 

} 
if(buffer[18]==69 && buffer[19]==68)      //ed 
{ 

tmp[7]=237; 

} 
if(buffer[18]==69 && buffer[19]==69)      //ee  
{ 

tmp[7]=238; 

} 
if(buffer[18]==69 && buffer[19]==70)      //ef  
{ 

tmp[7]=239; 

} 
//------------ 

if(buffer[18]==70 && buffer[19]==48)      //f0       
{ 

tmp[7]=240; 

} 

if(buffer[18]==70 && buffer[19]==49)      //f1        
{ 

tmp[7]=241; 

} 
if(buffer[18]==70 && buffer[19]==50)      //f2        
{ 

tmp[7]=242; 

} 
if(buffer[18]==70 && buffer[19]==51)      //f3         
{ 

tmp[7]=243; 

} 
if(buffer[18]==70 && buffer[19]==52)      //f4        
{ 

tmp[7]=244; 

} 
if(buffer[18]==70 && buffer[19]==53)      //f5      
{ 

tmp[7]=245; 
 
} 
if(buffer[18]==70 && buffer[19]==54)      //f6       
{ 

tmp[7]=246; 

} 
if(buffer[18]==70 && buffer[19]==55)      //f7     
{ 

tmp[7]=247; 

} 
if(buffer[18]==70 && buffer[19]==56)      //f8     
{ 

tmp[7]=248; 

} 
if(buffer[18]==70 && buffer[19]==57)      //f9   
{ 

tmp[7]=249; 

} 

if(buffer[18]==70 && buffer[19]==65)      //fa 
{ 

tmp[7]=250; 

} 

if(buffer[18]==70 && buffer[19]==66)      //fb 
{ 

tmp[7]=251; 

} 
if(buffer[18]==70 && buffer[19]==67)      //fc 
{ 

tmp[7]=252; 

} 
if(buffer[18]==70 && buffer[19]==68)      //fd 
{ 

tmp[7]=253; 

} 
if(buffer[18]==70 && buffer[19]==69)      //fe  
{ 

tmp[7]=254; 

} 
if(buffer[18]==70 && buffer[19]==70)      //ff  
{ 

tmp[7]=255; 

} 

//----------------------- end of tmp[7]--------------------------- 

//----------------------- start of tmp[8]--------------------------- 

if(buffer[20]==48 && buffer[21]==48)      //00        
{ 

tmp[8]=0; 

} 

if(buffer[20]==48 && buffer[21]==49)      //01        
{ 

tmp[8]=1; 

} 
if(buffer[20]==48 && buffer[21]==50)      //02        
{ 

tmp[8]=2; 

} 
if(buffer[20]==48 && buffer[21]==51)      //03         
{ 

tmp[8]=3; 

} 
if(buffer[20]==48 && buffer[21]==52)      //04        
{ 

tmp[8]=4; 

} 
if(buffer[20]==48 && buffer[21]==53)      //05      
{ 

tmp[8]=5; 
 
} 


if(buffer[20]==48 && buffer[21]==54)      //06       
{ 

tmp[8]=6; 

} 
if(buffer[20]==48 && buffer[21]==55)      //07     
{ 

tmp[8]=7; 

} 
if(buffer[20]==48 && buffer[21]==56)      //08     
{ 

tmp[8]=8; 

} 
if(buffer[20]==48 && buffer[21]==57)      //09   
{ 

tmp[8]=9; 

} 

if(buffer[20]==48 && buffer[21]==65)      //0a 
{ 

tmp[8]=10; 

} 

if(buffer[20]==48 && buffer[21]==66)      //0b 
{ 

tmp[8]=11; 

} 
if(buffer[20]==48 && buffer[21]==67)      //0c 
{ 

tmp[8]=12; 

} 
if(buffer[20]==48 && buffer[21]==68)      //0d 
{ 

tmp[8]=13; 
 
} 
if(buffer[20]==48 && buffer[21]==69)      //0e  
{ 

tmp[8]=14; 

} 
if(buffer[20]==48 && buffer[21]==70)      //0f  
{ 

tmp[8]=15; 

} 

//----------- 

if(buffer[20]==49 && buffer[21]==48)      //        10 
{ 

tmp[8]=16; 

} 
if(buffer[20]==49 && buffer[21]==49)      //         11 
{ 

tmp[8]=17; 

} 
if(buffer[20]==49 && buffer[21]==50)      //         12 
{ 

tmp[8]=18; 

} 
if(buffer[20]==49 && buffer[21]==51)      //         13 
{ 

tmp[8]=19; 

} 
if(buffer[20]==49 && buffer[21]==52)      //         14 
{ 

tmp[8]=20; 

} 
if(buffer[20]==49 && buffer[21]==53)      //         15 
{ 

tmp[8]=21; 

} 
if(buffer[20]==49 && buffer[21]==54)      //         16 
{ 

tmp[8]=22; 

} 
if(buffer[20]==49 && buffer[21]==55)      //         17 
{ 

tmp[8]=23; 

} 
if(buffer[20]==49 && buffer[21]==56)      //         18 
{ 

tmp[8]=24; 

} 
if(buffer[20]==49 && buffer[21]==57)      //         19 
{ 

tmp[8]=25; 

} 

if(buffer[20]==49 && buffer[21]==65)      //         1a 
{ 

tmp[8]=26; 

} 
if(buffer[20]==49 && buffer[21]==66)      //         1b 
{ 

tmp[8]=27; 

} 
if(buffer[20]==49 && buffer[21]==67)      //         1c 
{ 

tmp[8]=28; 

} 
if(buffer[20]==49 && buffer[21]==68)      //         1d 
{ 

tmp[8]=29; 

} 
if(buffer[20]==49 && buffer[21]==69)      //         1e 
{ 
 
tmp[8]=30; 

} 
if(buffer[20]==49 && buffer[21]==70)      //         1f 
{ 

tmp[8]=31; 

} 


//--------------- 


if(buffer[20]==50 && buffer[21]==48)      //         20 
{ 

tmp[8]=32; 

} 

if(buffer[20]==50 && buffer[21]==49)      //         21 
{ 

tmp[8]=33; 

} 
if(buffer[20]==50 && buffer[21]==50)      //         22 
{ 

tmp[8]=34; 

} 
if(buffer[20]==50 && buffer[21]==51)      //         23 
{ 

tmp[8]=35; 

} 
if(buffer[20]==50 && buffer[21]==52)      //         24 
{ 

tmp[8]=36; 

} 
if(buffer[20]==50 && buffer[21]==53)      //         25 
{ 

tmp[8]=37; 

} 
if(buffer[20]==50 && buffer[21]==54)      //         26 
{ 

tmp[8]=38; 

} 
if(buffer[20]==50 && buffer[21]==55)      //         27 
{ 

tmp[8]=39; 

} 
if(buffer[20]==50 && buffer[21]==56)      //         28 
{ 

tmp[8]=40; 

} 
if(buffer[20]==50 && buffer[21]==57)      //         29 
{ 

tmp[8]=41; 

} 
if(buffer[20]==50 && buffer[21]==65)      //         2a 
{ 

tmp[8]=42; 

} 
if(buffer[20]==50 && buffer[21]==66)      //         2b 
{ 

tmp[8]=43; 

} 
if(buffer[20]==50 && buffer[21]==67)      //         2c 
{ 

tmp[8]=44; 

} 

if(buffer[20]==50 && buffer[21]==68)      //       2d  
{ 

tmp[8]=45; 

} 
if(buffer[20]==50 && buffer[21]==69)      //         2e 
{ 

tmp[8]=46; 

} 
if(buffer[20]==50 && buffer[21]==70)      //         2f 
{ 

tmp[8]=47; 

} 

//------------- 


if(buffer[20]==51 && buffer[21]==48)      // 30        
{ 

tmp[8]=48; 

} 

if(buffer[20]==51 && buffer[21]==49)      // 31        
{ 

tmp[8]=49; 

} 
if(buffer[20]==51 && buffer[21]==50)      // 32        
{ 

tmp[8]=50; 

} 
if(buffer[20]==51 && buffer[21]==51)      //33         
{ 

tmp[8]=51; 

} 
if(buffer[20]==51 && buffer[21]==52)      //34        
{ 

tmp[8]=52; 

} 
if(buffer[20]==51 && buffer[21]==53)      //35      
{ 

tmp[8]=53; 

} 
if(buffer[20]==51 && buffer[21]==54)      //36       
{ 
 
tmp[8]=54; 

} 
if(buffer[20]==51 && buffer[21]==55)      //37     
{ 

tmp[8]=55; 

} 
if(buffer[20]==51 && buffer[21]==56)      //38     
{ 

tmp[8]=56; 

} 
if(buffer[20]==51 && buffer[21]==57)      //39   
{ 

tmp[8]=57; 

} 

if(buffer[20]==51 && buffer[21]==65)      //3a 
{ 

tmp[8]=58; 

} 

if(buffer[20]==51 && buffer[21]==66)      //3b 
{ 

tmp[8]=59; 

} 
if(buffer[20]==51 && buffer[21]==67)      //3c 
{ 

tmp[8]=60; 

} 
if(buffer[20]==51 && buffer[21]==68)      //3d 
{ 

tmp[8]=61; 

} 
if(buffer[20]==51 && buffer[21]==69)      //3e  
{ 

tmp[8]=62; 
 
} 
if(buffer[20]==51 && buffer[21]==70)      //3f  
{ 

tmp[8]=63; 

} 

//------------ 


if(buffer[20]==52 && buffer[21]==48)      // 40       
{ 

tmp[8]=64; 

} 

if(buffer[20]==52 && buffer[21]==49)      // 41        
{ 

tmp[8]=65; 

} 
if(buffer[20]==52 && buffer[21]==50)      // 42        
{ 

tmp[8]=66; 

} 
if(buffer[20]==52 && buffer[21]==51)      //43         
{ 

tmp[8]=67; 

} 
if(buffer[20]==52 && buffer[21]==52)      //44        
{ 

tmp[8]=68; 

} 
if(buffer[20]==52 && buffer[21]==53)      //45      
{ 

tmp[8]=69; 

} 

if(buffer[20]==52 && buffer[21]==54)      //46       
{ 
 
tmp[8]=70; 

} 
if(buffer[20]==52 && buffer[21]==55)      //47     
{ 

tmp[8]=71; 

} 
if(buffer[20]==52 && buffer[21]==56)      //48     
{ 

tmp[8]=72; 

} 
if(buffer[20]==52 && buffer[21]==57)      //49   
{ 

tmp[8]=73; 

} 

if(buffer[20]==52 && buffer[21]==65)      //4a 
{ 

tmp[8]=74; 

} 

if(buffer[20]==52 && buffer[21]==66)      //4b 
{ 

tmp[8]=75; 

} 
if(buffer[20]==52 && buffer[21]==67)      //4c 
{ 

tmp[8]=76; 

} 
if(buffer[20]==52 && buffer[21]==68)      //4d 
{ 

tmp[8]=77; 

} 
if(buffer[20]==52 && buffer[21]==69)      //4e  
{ 

tmp[8]=78; 
 
} 
if(buffer[20]==52 && buffer[21]==70)      //4f  
{ 

tmp[8]=79; 

} 
//------------ 




if(buffer[20]==53 && buffer[21]==48)      //50       
{ 

tmp[8]=80; 

} 

if(buffer[20]==53 && buffer[21]==49)      //51        
{ 

tmp[8]=81; 

} 
if(buffer[20]==53 && buffer[21]==50)      //52        
{ 

tmp[8]=82; 

} 
if(buffer[20]==53 && buffer[21]==51)      //53         
{ 

tmp[8]=83; 

} 
if(buffer[20]==53 && buffer[21]==52)      //54        
{ 

tmp[8]=84; 

} 
if(buffer[20]==53 && buffer[21]==53)      //55      
{ 

tmp[8]=85; 

} 
if(buffer[20]==53 && buffer[21]==54)      //56       
{ 
 
tmp[8]=86; 

} 
if(buffer[20]==53 && buffer[21]==55)      //57     
{ 

tmp[8]=87; 

} 
if(buffer[20]==53 && buffer[21]==56)      //58     
{ 

tmp[8]=88; 

} 
if(buffer[20]==53 && buffer[21]==57)      //59   
{ 

tmp[8]=89; 

} 

if(buffer[20]==53 && buffer[21]==65)      //5a 
{ 

tmp[8]=90; 

} 

if(buffer[20]==53 && buffer[21]==66)      //5b 
{ 

tmp[8]=91; 

} 
if(buffer[20]==53 && buffer[21]==67)      //5c 
{ 

tmp[8]=92; 

} 
if(buffer[20]==53 && buffer[21]==68)      //5d 
{ 

tmp[8]=93; 

} 
if(buffer[20]==53 && buffer[21]==69)      //5e  
{ 

tmp[8]=94; 
 
} 
if(buffer[20]==53 && buffer[21]==70)      //5f  
{ 

tmp[8]=95; 

} 
//------------ 




if(buffer[20]==54 && buffer[21]==48)      //60       
{ 

tmp[8]=96; 

} 

if(buffer[20]==54 && buffer[21]==49)      //61        
{ 

tmp[8]=97; 

} 
if(buffer[20]==54 && buffer[21]==50)      //62        
{ 

tmp[8]=98; 

} 
if(buffer[20]==54 && buffer[21]==51)      //63         
{ 

tmp[8]=99; 

} 
if(buffer[20]==54 && buffer[21]==52)      //64        
{ 

tmp[8]=100; 

} 
if(buffer[20]==54 && buffer[21]==53)      //65      
{ 

tmp[8]=101; 

} 
if(buffer[20]==54 && buffer[21]==54)      //66       
{ 
 
tmp[8]=102; 

} 
if(buffer[20]==54 && buffer[21]==55)      //67     
{ 

tmp[8]=103; 

} 
if(buffer[20]==54 && buffer[21]==56)      //68     
{ 

tmp[8]=104; 

} 
if(buffer[20]==54 && buffer[21]==57)      //69   
{ 

tmp[8]=105; 

} 

if(buffer[20]==54 && buffer[21]==65)      //6a 
{ 

tmp[8]=106; 

} 

if(buffer[20]==54 && buffer[21]==66)      //6b 
{ 

tmp[8]=107; 

} 
if(buffer[20]==54 && buffer[21]==67)      //6c 
{ 

tmp[8]=108; 

} 
if(buffer[20]==54 && buffer[21]==68)      //6d 
{ 

tmp[8]=109; 

} 
if(buffer[20]==54 && buffer[21]==69)      //6e  
{ 

tmp[8]=110; 
 
} 
if(buffer[20]==54 && buffer[21]==70)      //6f  
{ 

tmp[8]=111; 

} 
//------------ 




if(buffer[20]==55 && buffer[21]==48)      //70       
{ 

tmp[8]=112; 

} 

if(buffer[20]==55 && buffer[21]==49)      //71        
{ 

tmp[8]=113; 

} 
if(buffer[20]==55 && buffer[21]==50)      //72        
{ 

tmp[8]=114; 

} 
if(buffer[20]==55 && buffer[21]==51)      //73         
{ 

tmp[8]=115; 

} 
if(buffer[20]==55 && buffer[21]==52)      //74        
{ 

tmp[8]=116; 

} 
if(buffer[20]==55 && buffer[21]==53)      //75      
{ 

tmp[8]=117; 

} 
if(buffer[20]==55 && buffer[21]==54)      //76       
{ 
 
tmp[8]=118; 

} 
if(buffer[20]==55 && buffer[21]==55)      //77     
{ 

tmp[8]=119; 

} 
if(buffer[20]==55 && buffer[21]==56)      //78     
{ 

tmp[8]=120; 

} 
if(buffer[20]==55 && buffer[21]==57)      //79   
{ 

tmp[8]=121; 

} 

if(buffer[20]==55 && buffer[21]==65)      //7a 
{ 

tmp[8]=122; 

} 

if(buffer[20]==55 && buffer[21]==66)      //7b 
{ 

tmp[8]=123; 

} 
if(buffer[20]==55 && buffer[21]==67)      //7c 
{ 

tmp[8]=124; 

} 
if(buffer[20]==55 && buffer[21]==68)      //7d 
{ 

tmp[8]=125; 

} 
if(buffer[20]==55 && buffer[21]==69)      //7e  
{ 

tmp[8]=126; 
 
} 
if(buffer[20]==55 && buffer[21]==70)      //7f  
{ 

tmp[8]=127; 

} 

//------------ 

if(buffer[20]==56 && buffer[21]==48)      //80       
{ 

tmp[8]=128; 

} 

if(buffer[20]==56 && buffer[21]==49)      //81        
{ 

tmp[8]=129; 

} 
if(buffer[20]==56 && buffer[21]==50)      //82        
{ 

tmp[8]=130; 

} 
if(buffer[20]==56 && buffer[21]==51)      //83         
{ 

tmp[8]=131; 

} 
if(buffer[20]==56 && buffer[21]==52)      //84        
{ 

tmp[8]=132; 

} 
if(buffer[20]==56 && buffer[21]==53)      //85      
{ 

tmp[8]=133; 

} 
if(buffer[20]==56 && buffer[21]==54)      //86       
{ 

tmp[8]=134; 
 
} 
if(buffer[20]==56 && buffer[21]==55)      //87     
{ 

tmp[8]=135; 

} 
if(buffer[20]==56 && buffer[21]==56)      //88     
{ 

tmp[8]=136; 

} 
if(buffer[20]==56 && buffer[21]==57)      //89   
{ 

tmp[8]=137; 

} 

if(buffer[20]==56 && buffer[21]==65)      //8a 
{ 

tmp[8]=138; 

} 

if(buffer[20]==56 && buffer[21]==66)      //8b 
{ 

tmp[8]=139; 

} 
if(buffer[20]==56 && buffer[21]==67)      //8c 
{ 

tmp[8]=140; 

} 
if(buffer[20]==56 && buffer[21]==68)      //8d 
{ 

tmp[8]=141; 

} 
if(buffer[20]==56 && buffer[21]==69)      //8e  
{ 

tmp[8]=142; 

} 
if(buffer[20]==56 && buffer[21]==70)      //8f  
{ 

tmp[8]=143; 

} 
//------------ 


if(buffer[20]==57 && buffer[21]==48)      //90       
{ 

tmp[8]=144; 

} 

if(buffer[20]==57 && buffer[21]==49)      //91        
{ 

tmp[8]=145; 

} 
if(buffer[20]==57 && buffer[21]==50)      //92        
{ 

tmp[8]=146; 

} 
if(buffer[20]==57 && buffer[21]==51)      //93         
{ 

tmp[8]=147; 

} 
if(buffer[20]==57 && buffer[21]==52)      //94        
{ 

tmp[8]=148; 

} 
if(buffer[20]==57 && buffer[21]==53)      //95      
{ 

tmp[8]=149; 

} 
if(buffer[20]==57 && buffer[21]==54)      //96       
{ 

tmp[8]=150; 

} 
if(buffer[20]==57 && buffer[21]==55)      //97     
{ 

tmp[8]=151; 

} 
if(buffer[20]==57 && buffer[21]==56)      //98     
{ 

tmp[8]=152; 

} 
if(buffer[20]==57 && buffer[21]==57)      //99   
{ 

tmp[8]=153; 

} 

if(buffer[20]==57 && buffer[21]==65)      //9a 
{ 

tmp[8]=154; 

} 

if(buffer[20]==57 && buffer[21]==66)      //9b 
{ 

tmp[8]=155; 

} 
if(buffer[20]==57 && buffer[21]==67)      //9c 
{ 

tmp[8]=156; 

} 
if(buffer[20]==57 && buffer[21]==68)      //9d 
{ 

tmp[8]=157; 

} 
if(buffer[20]==57 && buffer[21]==69)      //9e  
{ 

tmp[8]=158; 

} 
if(buffer[20]==57 && buffer[21]==70)      //9f  
{ 
 
tmp[8]=159; 

} 
//------------ 


if(buffer[20]==65 && buffer[21]==48)      //a0       
{ 

tmp[8]=160; 

} 

if(buffer[20]==65 && buffer[21]==49)      //a1        
{ 

tmp[8]=161; 

} 
if(buffer[20]==65 && buffer[21]==50)      //a2        
{ 

tmp[8]=162; 

} 
if(buffer[20]==65 && buffer[21]==51)      //a3         
{ 

tmp[8]=163; 

} 
if(buffer[20]==65 && buffer[21]==52)      //a4        
{ 

tmp[8]=164; 

} 
if(buffer[20]==65 && buffer[21]==53)      //a5      
{ 

tmp[8]=165; 

} 
if(buffer[20]==65 && buffer[21]==54)      //a6       
{ 

tmp[8]=166; 

} 
if(buffer[20]==65 && buffer[21]==55)      //a7     
{ 
 
tmp[8]=167; 

} 
if(buffer[20]==65 && buffer[21]==56)      //a8     
{ 

tmp[8]=168; 

} 
if(buffer[20]==65 && buffer[21]==57)      //a9   
{ 

tmp[8]=169; 

} 

if(buffer[20]==65 && buffer[21]==65)      //aa 
{ 

tmp[8]=170; 

} 

if(buffer[20]==65 && buffer[21]==66)      //ab 
{ 

tmp[8]=171; 

} 
if(buffer[20]==65 && buffer[21]==67)      //ac 
{ 

tmp[8]=172; 

} 
if(buffer[20]==65 && buffer[21]==68)      //ad 
{ 

tmp[8]=173; 

} 
if(buffer[20]==65 && buffer[21]==69)      //ae  
{ 

tmp[8]=174; 

} 
if(buffer[20]==65 && buffer[21]==70)      //af  
{ 

tmp[8]=175; 
 
} 
//------------ 


if(buffer[20]==66 && buffer[21]==48)      //b0       
{ 

tmp[8]=176; 

} 

if(buffer[20]==66 && buffer[21]==49)      //b1        
{ 

tmp[8]=177; 

} 
if(buffer[20]==66 && buffer[21]==50)      //b2        
{ 

tmp[8]=178; 

} 
if(buffer[20]==66 && buffer[21]==51)      //b3         
{ 

tmp[8]=179; 

} 
if(buffer[20]==66 && buffer[21]==52)      //b4        
{ 

tmp[8]=180; 

} 
if(buffer[20]==66 && buffer[21]==53)      //b5      
{ 

tmp[8]=181; 

} 
if(buffer[20]==66 && buffer[21]==54)      //b6       
{ 

tmp[8]=182; 

} 
if(buffer[20]==66 && buffer[21]==55)      //b7     
{ 

tmp[8]=183; 
 
} 
if(buffer[20]==66 && buffer[21]==56)      //b8     
{ 

tmp[8]=184; 

} 
if(buffer[20]==66 && buffer[21]==57)      //b9   
{ 

tmp[8]=185; 

} 

if(buffer[20]==66 && buffer[21]==65)      //ba 
{ 

tmp[8]=186; 

} 

if(buffer[20]==66 && buffer[21]==66)      //bb 
{ 

tmp[8]=187; 

} 
if(buffer[20]==66 && buffer[21]==67)      //bc 
{ 

tmp[8]=188; 

} 
if(buffer[20]==66 && buffer[21]==68)      //bd 
{ 

tmp[8]=189; 

} 
if(buffer[20]==66 && buffer[21]==69)      //be  
{ 

tmp[8]=190; 

} 
if(buffer[20]==66 && buffer[21]==70)      //bf  
{ 

tmp[8]=191; 

} 
//------------ 



if(buffer[20]==67 && buffer[21]==48)      //c0       
{ 

tmp[8]=192; 

} 

if(buffer[20]==67 && buffer[21]==49)      //c1        
{ 

tmp[8]=193; 

} 
if(buffer[20]==67 && buffer[21]==50)      //c2        
{ 

tmp[8]=194; 

} 
if(buffer[20]==67 && buffer[21]==51)      //c3         
{ 

tmp[8]=195; 

} 
if(buffer[20]==67 && buffer[21]==52)      //c4        
{ 

tmp[8]=196; 

} 
if(buffer[20]==67 && buffer[21]==53)      //c5      
{ 

tmp[8]=197; 

} 
if(buffer[20]==67 && buffer[21]==54)      //c6       
{ 

tmp[8]=198; 

} 
if(buffer[20]==67 && buffer[21]==55)      //c7     
{ 

tmp[8]=199; 

} 
if(buffer[20]==67 && buffer[21]==56)      //c8     
{ 

tmp[8]=200; 

} 
if(buffer[20]==67 && buffer[21]==57)      //c9   
{ 

tmp[8]=201; 

} 

if(buffer[20]==67 && buffer[21]==65)      //ca 
{ 

tmp[8]=202; 

} 

if(buffer[20]==67 && buffer[21]==66)      //cb 
{ 

tmp[8]=203; 

} 
if(buffer[20]==67 && buffer[21]==67)      //cc 
{ 

tmp[8]=204; 

} 
if(buffer[20]==67 && buffer[21]==68)      //cd 
{ 

tmp[8]=205; 

} 
if(buffer[20]==67 && buffer[21]==69)      //ce  
{ 

tmp[8]=206; 

} 
if(buffer[20]==67 && buffer[21]==70)      //cf  
{ 

tmp[8]=207; 

} 
//------------ 
 

if(buffer[20]==68 && buffer[21]==48)      //d0       
{ 

tmp[8]=208; 

} 

if(buffer[20]==68 && buffer[21]==49)      //d1        
{ 

tmp[8]=209; 

} 
if(buffer[20]==68 && buffer[21]==50)      //d2        
{ 

tmp[8]=210; 

} 
if(buffer[20]==68 && buffer[21]==51)      //d3         
{ 

tmp[8]=211; 

} 
if(buffer[20]==68 && buffer[21]==52)      //d4        
{ 

tmp[8]=212; 

} 
if(buffer[20]==68 && buffer[21]==53)      //d5      
{ 

tmp[8]=213; 

} 
if(buffer[20]==68 && buffer[21]==54)      //d6       
{ 

tmp[8]=214; 

} 
if(buffer[20]==68 && buffer[21]==55)      //d7     
{ 

tmp[8]=215; 

} 
if(buffer[20]==68 && buffer[21]==56)      //d8     
{ 

tmp[8]=216; 

} 
if(buffer[20]==68 && buffer[21]==57)      //d9   
{ 

tmp[8]=217; 

} 

if(buffer[20]==68 && buffer[21]==65)      //da 
{ 

tmp[8]=218; 

} 

if(buffer[20]==68 && buffer[21]==66)      //db 
{ 

tmp[8]=219; 

} 
if(buffer[20]==68 && buffer[21]==67)      //dc 
{ 

tmp[8]=220; 

} 
if(buffer[20]==68 && buffer[21]==68)      //dd 
{ 

tmp[8]=221; 

} 
if(buffer[20]==68 && buffer[21]==69)      //de  
{ 

tmp[8]=222; 

} 
if(buffer[20]==68 && buffer[21]==70)      //df  
{ 

tmp[8]=223; 

} 
//------------ 


 
if(buffer[20]==69 && buffer[21]==48)      //e0       
{ 

tmp[8]=224; 

} 

if(buffer[20]==69 && buffer[21]==49)      //e1        
{ 

tmp[8]=225; 

} 
if(buffer[20]==69 && buffer[21]==50)      //e2        
{ 

tmp[8]=226; 

} 
if(buffer[20]==69 && buffer[21]==51)      //e3         
{ 

tmp[8]=227; 

} 
if(buffer[20]==69 && buffer[21]==52)      //e4        
{ 

tmp[8]=228; 

} 
if(buffer[20]==69 && buffer[21]==53)      //e5      
{ 

tmp[8]=229; 

} 
if(buffer[20]==69 && buffer[21]==54)      //e6       
{ 

tmp[8]=230; 

} 
if(buffer[20]==69 && buffer[21]==55)      //e7     
{ 

tmp[8]=231; 

} 
if(buffer[20]==69 && buffer[21]==56)      //e8     
{ 
 
tmp[8]=232; 

} 
if(buffer[20]==69 && buffer[21]==57)      //e9   
{ 

tmp[8]=233; 

} 

if(buffer[20]==69 && buffer[21]==65)      //ea 
{ 

tmp[8]=234; 

} 

if(buffer[20]==69 && buffer[21]==66)      //eb 
{ 

tmp[8]=235; 

} 
if(buffer[20]==69 && buffer[21]==67)      //ec 
{ 

tmp[8]=236; 

} 
if(buffer[20]==69 && buffer[21]==68)      //ed 
{ 

tmp[8]=237; 

} 
if(buffer[20]==69 && buffer[21]==69)      //ee  
{ 

tmp[8]=238; 

} 
if(buffer[20]==69 && buffer[21]==70)      //ef  
{ 

tmp[8]=239; 

} 
//------------ 

if(buffer[20]==70 && buffer[21]==48)      //f0       
{ 
 
tmp[8]=240; 

} 

if(buffer[20]==70 && buffer[21]==49)      //f1        
{ 

tmp[8]=241; 

} 
if(buffer[20]==70 && buffer[21]==50)      //f2        
{ 

tmp[8]=242; 

} 
if(buffer[20]==70 && buffer[21]==51)      //f3         
{ 

tmp[8]=243; 

} 
if(buffer[20]==70 && buffer[21]==52)      //f4        
{ 

tmp[8]=244; 

} 
if(buffer[20]==70 && buffer[21]==53)      //f5      
{ 

tmp[8]=245; 

} 
if(buffer[20]==70 && buffer[21]==54)      //f6       
{ 

tmp[8]=246; 

} 
if(buffer[20]==70 && buffer[21]==55)      //f7     
{ 

tmp[8]=247; 

} 
if(buffer[20]==70 && buffer[21]==56)      //f8     
{ 

tmp[8]=248; 

} 
if(buffer[20]==70 && buffer[21]==57)      //f9   
{ 

tmp[8]=249; 

} 

if(buffer[20]==70 && buffer[21]==65)      //fa 
{ 

tmp[8]=250; 

} 

if(buffer[20]==70 && buffer[21]==66)      //fb 
{ 

tmp[8]=251; 

} 
if(buffer[20]==70 && buffer[21]==67)      //fc 
{ 

tmp[8]=252; 

} 
if(buffer[20]==70 && buffer[21]==68)      //fd 
{ 

tmp[8]=253; 

} 
if(buffer[20]==70 && buffer[21]==69)      //fe  
{ 

tmp[8]=254; 

} 
if(buffer[20]==70 && buffer[21]==70)      //ff  
{ 

tmp[8]=255; 

} 

//----------------------- end of tmp[8]--------------------------- 

//----------------------- start of tmp[9]--------------------------- 

if(buffer[22]==48 && buffer[23]==48)      //00        
{ 
 
tmp[9]=0; 

} 

if(buffer[22]==48 && buffer[23]==49)      //01        
{ 

tmp[9]=1; 

} 
if(buffer[22]==48 && buffer[23]==50)      //02        
{ 

tmp[9]=2; 

} 
if(buffer[22]==48 && buffer[23]==51)      //03         
{ 

tmp[9]=3; 

} 
if(buffer[22]==48 && buffer[23]==52)      //04        
{ 

tmp[9]=4; 

} 
if(buffer[22]==48 && buffer[23]==53)      //05      
{ 

tmp[9]=5; 

} 


if(buffer[22]==48 && buffer[23]==54)      //06       
{ 

tmp[9]=6; 

} 
if(buffer[22]==48 && buffer[23]==55)      //07     
{ 

tmp[9]=7; 

} 
if(buffer[22]==48 && buffer[23]==56)      //08     
{ 

tmp[9]=8; 

} 
if(buffer[22]==48 && buffer[23]==57)      //09   
{ 

tmp[9]=9; 

} 

if(buffer[22]==48 && buffer[23]==65)      //0a 
{ 

tmp[9]=10; 

} 

if(buffer[22]==48 && buffer[23]==66)      //0b 
{ 

tmp[9]=11; 

} 
if(buffer[22]==48 && buffer[23]==67)      //0c 
{ 

tmp[9]=12; 

} 
if(buffer[22]==48 && buffer[23]==68)      //0d 
{ 

tmp[9]=13; 

} 
if(buffer[22]==48 && buffer[23]==69)      //0e  
{ 

tmp[9]=14; 

} 
if(buffer[22]==48 && buffer[23]==70)      //0f  
{ 

tmp[9]=15; 

} 

//----------- 

if(buffer[22]==49 && buffer[23]==48)      //        10 
{ 
 
tmp[9]=16; 

} 
if(buffer[22]==49 && buffer[23]==49)      //         11 
{ 

tmp[9]=17; 

} 
if(buffer[22]==49 && buffer[23]==50)      //         12 
{ 

tmp[9]=18; 

} 
if(buffer[22]==49 && buffer[23]==51)      //         13 
{ 

tmp[9]=19; 

} 
if(buffer[22]==49 && buffer[23]==52)      //         14 
{ 

tmp[9]=20; 

} 
if(buffer[22]==49 && buffer[23]==53)      //         15 
{ 

tmp[9]=21; 

} 
if(buffer[22]==49 && buffer[23]==54)      //         16 
{ 

tmp[9]=22; 

} 
if(buffer[22]==49 && buffer[23]==55)      //         17 
{ 

tmp[9]=23; 

} 
if(buffer[22]==49 && buffer[23]==56)      //         18 
{ 

tmp[9]=24; 

} 
if(buffer[22]==49 && buffer[23]==57)      //         19 
{ 

tmp[9]=25; 

} 

if(buffer[22]==49 && buffer[23]==65)      //         1a 
{ 

tmp[9]=26; 

} 
if(buffer[22]==49 && buffer[23]==66)      //         1b 
{ 

tmp[9]=27; 

} 
if(buffer[22]==49 && buffer[23]==67)      //         1c 
{ 

tmp[9]=28; 

} 
if(buffer[22]==49 && buffer[23]==68)      //         1d 
{ 

tmp[9]=29; 

} 
if(buffer[22]==49 && buffer[23]==69)      //         1e 
{ 

tmp[9]=30; 

} 
if(buffer[22]==49 && buffer[23]==70)      //         1f 
{ 

tmp[9]=31; 

} 


//--------------- 


if(buffer[22]==50 && buffer[23]==48)      //         20 
{ 

tmp[9]=32; 
 
} 

if(buffer[22]==50 && buffer[23]==49)      //         21 
{ 

tmp[9]=33; 

} 
if(buffer[22]==50 && buffer[23]==50)      //         22 
{ 

tmp[9]=34; 

} 
if(buffer[22]==50 && buffer[23]==51)      //         23 
{ 

tmp[9]=35; 

} 
if(buffer[22]==50 && buffer[23]==52)      //         24 
{ 

tmp[9]=36; 

} 
if(buffer[22]==50 && buffer[23]==53)      //         25 
{ 

tmp[9]=37; 

} 
if(buffer[22]==50 && buffer[23]==54)      //         26 
{ 

tmp[9]=38; 

} 
if(buffer[22]==50 && buffer[23]==55)      //         27 
{ 

tmp[9]=39; 

} 
if(buffer[22]==50 && buffer[23]==56)      //         28 
{ 

tmp[9]=40; 

} 
if(buffer[22]==50 && buffer[23]==57)      //         29 
{ 

tmp[9]=41; 

} 
if(buffer[22]==50 && buffer[23]==65)      //         2a 
{ 

tmp[9]=42; 

} 
if(buffer[22]==50 && buffer[23]==66)      //         2b 
{ 

tmp[9]=43; 

} 
if(buffer[22]==50 && buffer[23]==67)      //         2c 
{ 

tmp[9]=44; 

} 

if(buffer[22]==50 && buffer[23]==68)      //       2d  
{ 

tmp[9]=45; 

} 
if(buffer[22]==50 && buffer[23]==69)      //         2e 
{ 

tmp[9]=46; 

} 
if(buffer[22]==50 && buffer[23]==70)      //         2f 
{ 

tmp[9]=47; 

} 

//------------- 


if(buffer[22]==51 && buffer[23]==48)      // 30        
{ 

tmp[9]=48; 

} 
 
if(buffer[22]==51 && buffer[23]==49)      // 31        
{ 

tmp[9]=49; 

} 
if(buffer[22]==51 && buffer[23]==50)      // 32        
{ 

tmp[9]=50; 

} 
if(buffer[22]==51 && buffer[23]==51)      //33         
{ 

tmp[9]=51; 

} 
if(buffer[22]==51 && buffer[23]==52)      //34        
{ 

tmp[9]=52; 

} 
if(buffer[22]==51 && buffer[23]==53)      //35      
{ 

tmp[9]=53; 

} 
if(buffer[22]==51 && buffer[23]==54)      //36       
{ 

tmp[9]=54; 

} 
if(buffer[22]==51 && buffer[23]==55)      //37     
{ 

tmp[9]=55; 

} 
if(buffer[22]==51 && buffer[23]==56)      //38     
{ 

tmp[9]=56; 

} 
if(buffer[22]==51 && buffer[23]==57)      //39   
{ 

tmp[9]=57; 

} 

if(buffer[22]==51 && buffer[23]==65)      //3a 
{ 

tmp[9]=58; 

} 

if(buffer[22]==51 && buffer[23]==66)      //3b 
{ 

tmp[9]=59; 

} 
if(buffer[22]==51 && buffer[23]==67)      //3c 
{ 

tmp[9]=60; 

} 
if(buffer[22]==51 && buffer[23]==68)      //3d 
{ 

tmp[9]=61; 

} 
if(buffer[22]==51 && buffer[23]==69)      //3e  
{ 

tmp[9]=62; 

} 
if(buffer[22]==51 && buffer[23]==70)      //3f  
{ 

tmp[9]=63; 

} 

//------------ 


if(buffer[22]==52 && buffer[23]==48)      // 40       
{ 

tmp[9]=64; 

} 

if(buffer[22]==52 && buffer[23]==49)      // 41        
{ 

tmp[9]=65; 

} 
if(buffer[22]==52 && buffer[23]==50)      // 42        
{ 

tmp[9]=66; 

} 
if(buffer[22]==52 && buffer[23]==51)      //43         
{ 

tmp[9]=67; 

} 
if(buffer[22]==52 && buffer[23]==52)      //44        
{ 

tmp[9]=68; 

} 
if(buffer[22]==52 && buffer[23]==53)      //45      
{ 

tmp[9]=69; 

} 

if(buffer[22]==52 && buffer[23]==54)      //46       
{ 

tmp[9]=70; 

} 
if(buffer[22]==52 && buffer[23]==55)      //47     
{ 

tmp[9]=71; 

} 
if(buffer[22]==52 && buffer[23]==56)      //48     
{ 

tmp[9]=72; 

} 
if(buffer[22]==52 && buffer[23]==57)      //49   
{ 

tmp[9]=73; 

} 

if(buffer[22]==52 && buffer[23]==65)      //4a 
{ 

tmp[9]=74; 

} 

if(buffer[22]==52 && buffer[23]==66)      //4b 
{ 

tmp[9]=75; 

} 
if(buffer[22]==52 && buffer[23]==67)      //4c 
{ 

tmp[9]=76; 

} 
if(buffer[22]==52 && buffer[23]==68)      //4d 
{ 

tmp[9]=77; 

} 
if(buffer[22]==52 && buffer[23]==69)      //4e  
{ 

tmp[9]=78; 

} 
if(buffer[22]==52 && buffer[23]==70)      //4f  
{ 

tmp[9]=79; 

} 
//------------ 




if(buffer[22]==53 && buffer[23]==48)      //50       
{ 

tmp[9]=80; 

} 
 
if(buffer[22]==53 && buffer[23]==49)      //51        
{ 

tmp[9]=81; 

} 
if(buffer[22]==53 && buffer[23]==50)      //52        
{ 

tmp[9]=82; 

} 
if(buffer[22]==53 && buffer[23]==51)      //53         
{ 

tmp[9]=83; 

} 
if(buffer[22]==53 && buffer[23]==52)      //54        
{ 

tmp[9]=84; 

} 
if(buffer[22]==53 && buffer[23]==53)      //55      
{ 

tmp[9]=85; 

} 
if(buffer[22]==53 && buffer[23]==54)      //56       
{ 

tmp[9]=86; 

} 
if(buffer[22]==53 && buffer[23]==55)      //57     
{ 

tmp[9]=87; 

} 
if(buffer[22]==53 && buffer[23]==56)      //58     
{ 

tmp[9]=88; 

} 
if(buffer[22]==53 && buffer[23]==57)      //59   
{ 

tmp[9]=89; 

} 

if(buffer[22]==53 && buffer[23]==65)      //5a 
{ 

tmp[9]=90; 

} 

if(buffer[22]==53 && buffer[23]==66)      //5b 
{ 

tmp[9]=91; 

} 
if(buffer[22]==53 && buffer[23]==67)      //5c 
{ 

tmp[9]=92; 

} 
if(buffer[22]==53 && buffer[23]==68)      //5d 
{ 

tmp[9]=93; 

} 
if(buffer[22]==53 && buffer[23]==69)      //5e  
{ 

tmp[9]=94; 

} 
if(buffer[22]==53 && buffer[23]==70)      //5f  
{ 

tmp[9]=95; 

} 
//------------ 




if(buffer[22]==54 && buffer[23]==48)      //60       
{ 

tmp[9]=96; 

} 
 
if(buffer[22]==54 && buffer[23]==49)      //61        
{ 

tmp[9]=97; 

} 
if(buffer[22]==54 && buffer[23]==50)      //62        
{ 

tmp[9]=98; 

} 
if(buffer[22]==54 && buffer[23]==51)      //63         
{ 

tmp[9]=99; 

} 
if(buffer[22]==54 && buffer[23]==52)      //64        
{ 

tmp[9]=100; 

} 
if(buffer[22]==54 && buffer[23]==53)      //65      
{ 

tmp[9]=101; 

} 
if(buffer[22]==54 && buffer[23]==54)      //66       
{ 

tmp[9]=102; 

} 
if(buffer[22]==54 && buffer[23]==55)      //67     
{ 

tmp[9]=103; 

} 
if(buffer[22]==54 && buffer[23]==56)      //68     
{ 

tmp[9]=104; 

} 
if(buffer[22]==54 && buffer[23]==57)      //69   
{ 

tmp[9]=105; 

} 

if(buffer[22]==54 && buffer[23]==65)      //6a 
{ 

tmp[9]=106; 

} 

if(buffer[22]==54 && buffer[23]==66)      //6b 
{ 

tmp[9]=107; 

} 
if(buffer[22]==54 && buffer[23]==67)      //6c 
{ 

tmp[9]=108; 

} 
if(buffer[22]==54 && buffer[23]==68)      //6d 
{ 

tmp[9]=109; 

} 
if(buffer[22]==54 && buffer[23]==69)      //6e  
{ 

tmp[9]=110; 

} 
if(buffer[22]==54 && buffer[23]==70)      //6f  
{ 

tmp[9]=111; 

} 
//------------ 




if(buffer[22]==55 && buffer[23]==48)      //70       
{ 

tmp[9]=112; 

} 
 
if(buffer[22]==55 && buffer[23]==49)      //71        
{ 

tmp[9]=113; 

} 
if(buffer[22]==55 && buffer[23]==50)      //72        
{ 

tmp[9]=114; 

} 
if(buffer[22]==55 && buffer[23]==51)      //73         
{ 

tmp[9]=115; 

} 
if(buffer[22]==55 && buffer[23]==52)      //74        
{ 

tmp[9]=116; 

} 
if(buffer[22]==55 && buffer[23]==53)      //75      
{ 

tmp[9]=117; 

} 
if(buffer[22]==55 && buffer[23]==54)      //76       
{ 

tmp[9]=118; 

} 
if(buffer[22]==55 && buffer[23]==55)      //77     
{ 

tmp[9]=119; 

} 
if(buffer[22]==55 && buffer[23]==56)      //78     
{ 

tmp[9]=120; 

} 
if(buffer[22]==55 && buffer[23]==57)      //79   
{ 

tmp[9]=121; 

} 

if(buffer[22]==55 && buffer[23]==65)      //7a 
{ 

tmp[9]=122; 

} 

if(buffer[22]==55 && buffer[23]==66)      //7b 
{ 

tmp[9]=123; 

} 
if(buffer[22]==55 && buffer[23]==67)      //7c 
{ 

tmp[9]=124; 

} 
if(buffer[22]==55 && buffer[23]==68)      //7d 
{ 

tmp[9]=125; 

} 
if(buffer[22]==55 && buffer[23]==69)      //7e  
{ 

tmp[9]=126; 

} 
if(buffer[22]==55 && buffer[23]==70)      //7f  
{ 

tmp[9]=127; 

} 

//------------ 

if(buffer[22]==56 && buffer[23]==48)      //80       
{ 

tmp[9]=128; 

} 

if(buffer[22]==56 && buffer[23]==49)      //81        
{ 

tmp[9]=129; 

} 
if(buffer[22]==56 && buffer[23]==50)      //82        
{ 

tmp[9]=130; 

} 
if(buffer[22]==56 && buffer[23]==51)      //83         
{ 

tmp[9]=131; 

} 
if(buffer[22]==56 && buffer[23]==52)      //84        
{ 

tmp[9]=132; 

} 
if(buffer[22]==56 && buffer[23]==53)      //85      
{ 

tmp[9]=133; 

} 
if(buffer[22]==56 && buffer[23]==54)      //86       
{ 

tmp[9]=134; 

} 
if(buffer[22]==56 && buffer[23]==55)      //87     
{ 

tmp[9]=135; 

} 
if(buffer[22]==56 && buffer[23]==56)      //88     
{ 

tmp[9]=136; 

} 
if(buffer[22]==56 && buffer[23]==57)      //89   
{ 

tmp[9]=137; 

} 

if(buffer[22]==56 && buffer[23]==65)      //8a 
{ 

tmp[9]=138; 

} 

if(buffer[22]==56 && buffer[23]==66)      //8b 
{ 

tmp[9]=139; 

} 
if(buffer[22]==56 && buffer[23]==67)      //8c 
{ 

tmp[9]=140; 

} 
if(buffer[22]==56 && buffer[23]==68)      //8d 
{ 

tmp[9]=141; 

} 
if(buffer[22]==56 && buffer[23]==69)      //8e  
{ 

tmp[9]=142; 

} 
if(buffer[22]==56 && buffer[23]==70)      //8f  
{ 

tmp[9]=143; 

} 
//------------ 


if(buffer[22]==57 && buffer[23]==48)      //90       
{ 

tmp[9]=144; 

} 

if(buffer[22]==57 && buffer[23]==49)      //91        
{ 

tmp[9]=145; 

} 
if(buffer[22]==57 && buffer[23]==50)      //92        
{ 

tmp[9]=146; 

} 
if(buffer[22]==57 && buffer[23]==51)      //93         
{ 

tmp[9]=147; 

} 
if(buffer[22]==57 && buffer[23]==52)      //94        
{ 

tmp[9]=148; 

} 
if(buffer[22]==57 && buffer[23]==53)      //95      
{ 

tmp[9]=149; 

} 
if(buffer[22]==57 && buffer[23]==54)      //96       
{ 

tmp[9]=150; 

} 
if(buffer[22]==57 && buffer[23]==55)      //97     
{ 

tmp[9]=151; 

} 
if(buffer[22]==57 && buffer[23]==56)      //98     
{ 

tmp[9]=152; 

} 
if(buffer[22]==57 && buffer[23]==57)      //99   
{ 

tmp[9]=153; 

} 

if(buffer[22]==57 && buffer[23]==65)      //9a 
{ 

tmp[9]=154; 

} 

if(buffer[22]==57 && buffer[23]==66)      //9b 
{ 

tmp[9]=155; 

} 
if(buffer[22]==57 && buffer[23]==67)      //9c 
{ 

tmp[9]=156; 

} 
if(buffer[22]==57 && buffer[23]==68)      //9d 
{ 

tmp[9]=157; 

} 
if(buffer[22]==57 && buffer[23]==69)      //9e  
{ 

tmp[9]=158; 

} 
if(buffer[22]==57 && buffer[23]==70)      //9f  
{ 

tmp[9]=159; 

} 
//------------ 


if(buffer[22]==65 && buffer[23]==48)      //a0       
{ 

tmp[9]=160; 

} 

if(buffer[22]==65 && buffer[23]==49)      //a1        
{ 

tmp[9]=161; 

} 
if(buffer[22]==65 && buffer[23]==50)      //a2        
{ 

tmp[9]=162; 

} 
if(buffer[22]==65 && buffer[23]==51)      //a3         
{ 

tmp[9]=163; 

} 
if(buffer[22]==65 && buffer[23]==52)      //a4        
{ 

tmp[9]=164; 

} 
if(buffer[22]==65 && buffer[23]==53)      //a5      
{ 

tmp[9]=165; 

} 
if(buffer[22]==65 && buffer[23]==54)      //a6       
{ 

tmp[9]=166; 

} 
if(buffer[22]==65 && buffer[23]==55)      //a7     
{ 

tmp[9]=167; 

} 
if(buffer[22]==65 && buffer[23]==56)      //a8     
{ 

tmp[9]=168; 

} 
if(buffer[22]==65 && buffer[23]==57)      //a9   
{ 

tmp[9]=169; 

} 

if(buffer[22]==65 && buffer[23]==65)      //aa 
{ 
 
tmp[9]=170; 

} 

if(buffer[22]==65 && buffer[23]==66)      //ab 
{ 

tmp[9]=171; 

} 
if(buffer[22]==65 && buffer[23]==67)      //ac 
{ 

tmp[9]=172; 

} 
if(buffer[22]==65 && buffer[23]==68)      //ad 
{ 

tmp[9]=173; 

} 
if(buffer[22]==65 && buffer[23]==69)      //ae  
{ 

tmp[9]=174; 

} 
if(buffer[22]==65 && buffer[23]==70)      //af  
{ 

tmp[9]=175; 

} 
//------------ 


if(buffer[22]==66 && buffer[23]==48)      //b0       
{ 

tmp[9]=176; 

} 

if(buffer[22]==66 && buffer[23]==49)      //b1        
{ 

tmp[9]=177; 

} 
if(buffer[22]==66 && buffer[23]==50)      //b2        
{ 

tmp[9]=178; 

} 
if(buffer[22]==66 && buffer[23]==51)      //b3         
{ 

tmp[9]=179; 

} 
if(buffer[22]==66 && buffer[23]==52)      //b4        
{ 

tmp[9]=180; 

} 
if(buffer[22]==66 && buffer[23]==53)      //b5      
{ 

tmp[9]=181; 

} 
if(buffer[22]==66 && buffer[23]==54)      //b6       
{ 

tmp[9]=182; 

} 
if(buffer[22]==66 && buffer[23]==55)      //b7     
{ 

tmp[9]=183; 

} 
if(buffer[22]==66 && buffer[23]==56)      //b8     
{ 

tmp[9]=184; 

} 
if(buffer[22]==66 && buffer[23]==57)      //b9   
{ 

tmp[9]=185; 

} 

if(buffer[22]==66 && buffer[23]==65)      //ba 
{ 

tmp[9]=186; 
 
} 

if(buffer[22]==66 && buffer[23]==66)      //bb 
{ 

tmp[9]=187; 

} 
if(buffer[22]==66 && buffer[23]==67)      //bc 
{ 

tmp[9]=188; 

} 
if(buffer[22]==66 && buffer[23]==68)      //bd 
{ 

tmp[9]=189; 

} 
if(buffer[22]==66 && buffer[23]==69)      //be  
{ 

tmp[9]=190; 

} 
if(buffer[22]==66 && buffer[23]==70)      //bf  
{ 

tmp[9]=191; 

} 
//------------ 



if(buffer[22]==67 && buffer[23]==48)      //c0       
{ 

tmp[9]=192; 

} 

if(buffer[22]==67 && buffer[23]==49)      //c1        
{ 

tmp[9]=193; 

} 
if(buffer[22]==67 && buffer[23]==50)      //c2        
{ 
 
tmp[9]=194; 

} 
if(buffer[22]==67 && buffer[23]==51)      //c3         
{ 

tmp[9]=195; 

} 
if(buffer[22]==67 && buffer[23]==52)      //c4        
{ 

tmp[9]=196; 

} 
if(buffer[22]==67 && buffer[23]==53)      //c5      
{ 

tmp[9]=197; 

} 
if(buffer[22]==67 && buffer[23]==54)      //c6       
{ 

tmp[9]=198; 

} 
if(buffer[22]==67 && buffer[23]==55)      //c7     
{ 

tmp[9]=199; 

} 
if(buffer[22]==67 && buffer[23]==56)      //c8     
{ 

tmp[9]=200; 

} 
if(buffer[22]==67 && buffer[23]==57)      //c9   
{ 

tmp[9]=201; 

} 

if(buffer[22]==67 && buffer[23]==65)      //ca 
{ 

tmp[9]=202; 

} 

if(buffer[22]==67 && buffer[23]==66)      //cb 
{ 

tmp[9]=203; 

} 
if(buffer[22]==67 && buffer[23]==67)      //cc 
{ 

tmp[9]=204; 

} 
if(buffer[22]==67 && buffer[23]==68)      //cd 
{ 

tmp[9]=205; 

} 
if(buffer[22]==67 && buffer[23]==69)      //ce  
{ 

tmp[9]=206; 

} 
if(buffer[22]==67 && buffer[23]==70)      //cf  
{ 

tmp[9]=207; 

} 
//------------ 


if(buffer[22]==68 && buffer[23]==48)      //d0       
{ 

tmp[9]=208; 

} 

if(buffer[22]==68 && buffer[23]==49)      //d1        
{ 

tmp[9]=209; 

} 
if(buffer[22]==68 && buffer[23]==50)      //d2        
{ 

tmp[9]=210; 
 
} 
if(buffer[22]==68 && buffer[23]==51)      //d3         
{ 

tmp[9]=211; 

} 
if(buffer[22]==68 && buffer[23]==52)      //d4        
{ 

tmp[9]=212; 

} 
if(buffer[22]==68 && buffer[23]==53)      //d5      
{ 

tmp[9]=213; 

} 
if(buffer[22]==68 && buffer[23]==54)      //d6       
{ 

tmp[9]=214; 

} 
if(buffer[22]==68 && buffer[23]==55)      //d7     
{ 

tmp[9]=215; 

} 
if(buffer[22]==68 && buffer[23]==56)      //d8     
{ 

tmp[9]=216; 

} 
if(buffer[22]==68 && buffer[23]==57)      //d9   
{ 

tmp[9]=217; 

} 

if(buffer[22]==68 && buffer[23]==65)      //da 
{ 

tmp[9]=218; 

} 

if(buffer[22]==68 && buffer[23]==66)      //db 
{ 

tmp[9]=219; 

} 
if(buffer[22]==68 && buffer[23]==67)      //dc 
{ 

tmp[9]=220; 

} 
if(buffer[22]==68 && buffer[23]==68)      //dd 
{ 

tmp[9]=221; 

} 
if(buffer[22]==68 && buffer[23]==69)      //de  
{ 

tmp[9]=222; 

} 
if(buffer[22]==68 && buffer[23]==70)      //df  
{ 

tmp[9]=223; 

} 
//------------ 



if(buffer[22]==69 && buffer[23]==48)      //e0       
{ 

tmp[9]=224; 

} 

if(buffer[22]==69 && buffer[23]==49)      //e1        
{ 

tmp[9]=225; 

} 
if(buffer[22]==69 && buffer[23]==50)      //e2        
{ 

tmp[9]=226; 

} 
if(buffer[22]==69 && buffer[23]==51)      //e3         
{ 

tmp[9]=227; 

} 
if(buffer[22]==69 && buffer[23]==52)      //e4        
{ 

tmp[9]=228; 

} 
if(buffer[22]==69 && buffer[23]==53)      //e5      
{ 

tmp[9]=229; 

} 
if(buffer[22]==69 && buffer[23]==54)      //e6       
{ 

tmp[9]=230; 

} 
if(buffer[22]==69 && buffer[23]==55)      //e7     
{ 

tmp[9]=231; 

} 
if(buffer[22]==69 && buffer[23]==56)      //e8     
{ 

tmp[9]=232; 

} 
if(buffer[22]==69 && buffer[23]==57)      //e9   
{ 

tmp[9]=233; 

} 

if(buffer[22]==69 && buffer[23]==65)      //ea 
{ 

tmp[9]=234; 

} 

if(buffer[22]==69 && buffer[23]==66)      //eb 
{ 

tmp[9]=235; 

} 
if(buffer[22]==69 && buffer[23]==67)      //ec 
{ 

tmp[9]=236; 

} 
if(buffer[22]==69 && buffer[23]==68)      //ed 
{ 

tmp[9]=237; 

} 
if(buffer[22]==69 && buffer[23]==69)      //ee  
{ 

tmp[9]=238; 

} 
if(buffer[22]==69 && buffer[23]==70)      //ef  
{ 

tmp[9]=239; 

} 
//------------ 

if(buffer[22]==70 && buffer[23]==48)      //f0       
{ 

tmp[9]=240; 

} 

if(buffer[22]==70 && buffer[23]==49)      //f1        
{ 

tmp[9]=241; 

} 
if(buffer[22]==70 && buffer[23]==50)      //f2        
{ 

tmp[9]=242; 

} 
if(buffer[22]==70 && buffer[23]==51)      //f3         
{ 
 
tmp[9]=243; 

} 
if(buffer[22]==70 && buffer[23]==52)      //f4        
{ 

tmp[9]=244; 

} 
if(buffer[22]==70 && buffer[23]==53)      //f5      
{ 

tmp[9]=245; 

} 
if(buffer[22]==70 && buffer[23]==54)      //f6       
{ 

tmp[9]=246; 

} 
if(buffer[22]==70 && buffer[23]==55)      //f7     
{ 

tmp[9]=247; 

} 
if(buffer[22]==70 && buffer[23]==56)      //f8     
{ 

tmp[9]=248; 

} 
if(buffer[22]==70 && buffer[23]==57)      //f9   
{ 

tmp[9]=249; 

} 

if(buffer[22]==70 && buffer[23]==65)      //fa 
{ 

tmp[9]=250; 

} 

if(buffer[22]==70 && buffer[23]==66)      //fb 
{ 

tmp[9]=251; 
 
} 
if(buffer[22]==70 && buffer[23]==67)      //fc 
{ 

tmp[9]=252; 

} 
if(buffer[22]==70 && buffer[23]==68)      //fd 
{ 

tmp[9]=253; 

} 
if(buffer[22]==70 && buffer[23]==69)      //fe  
{ 

tmp[9]=254; 

} 
if(buffer[22]==70 && buffer[23]==70)      //ff  
{ 

tmp[9]=255; 

} 

//----------------------- end of tmp[9]--------------------------- 


//----------------------- start of tmp[10]--------------------------- 

if(buffer[24]==48 && buffer[25]==48)      //00        
{ 

tmp[10]=0; 

} 

if(buffer[24]==48 && buffer[25]==49)      //01        
{ 

tmp[10]=1; 

} 
if(buffer[24]==48 && buffer[25]==50)      //02        
{ 

tmp[10]=2; 

} 
if(buffer[24]==48 && buffer[25]==51)      //03         
{ 

tmp[10]=3; 

} 
if(buffer[24]==48 && buffer[25]==52)      //04        
{ 

tmp[10]=4; 

} 
if(buffer[24]==48 && buffer[25]==53)      //05      
{ 

tmp[10]=5; 

} 


if(buffer[24]==48 && buffer[25]==54)      //06       
{ 

tmp[10]=6; 

} 
if(buffer[24]==48 && buffer[25]==55)      //07     
{ 

tmp[10]=7; 

} 
if(buffer[24]==48 && buffer[25]==56)      //08     
{ 

tmp[10]=8; 

} 
if(buffer[24]==48 && buffer[25]==57)      //09   
{ 

tmp[10]=9; 

} 

if(buffer[24]==48 && buffer[25]==65)      //0a 
{ 

tmp[10]=10; 

} 

if(buffer[24]==48 && buffer[25]==66)      //0b 
{ 

tmp[10]=11; 

} 
if(buffer[24]==48 && buffer[25]==67)      //0c 
{ 

tmp[10]=12; 

} 
if(buffer[24]==48 && buffer[25]==68)      //0d 
{ 

tmp[10]=13; 

} 
if(buffer[24]==48 && buffer[25]==69)      //0e  
{ 

tmp[10]=14; 

} 
if(buffer[24]==48 && buffer[25]==70)      //0f  
{ 

tmp[10]=15; 

} 

//----------- 

if(buffer[24]==49 && buffer[25]==48)      //        10 
{ 

tmp[10]=16; 

} 
if(buffer[24]==49 && buffer[25]==49)      //         11 
{ 

tmp[10]=17; 

} 
if(buffer[24]==49 && buffer[25]==50)      //         12 
{ 

tmp[10]=18; 

} 
if(buffer[24]==49 && buffer[25]==51)      //         13 
{ 
 
tmp[10]=19; 

} 
if(buffer[24]==49 && buffer[25]==52)      //         14 
{ 

tmp[10]=20; 

} 
if(buffer[24]==49 && buffer[25]==53)      //         15 
{ 

tmp[10]=21; 

} 
if(buffer[24]==49 && buffer[25]==54)      //         16 
{ 

tmp[10]=22; 

} 
if(buffer[24]==49 && buffer[25]==55)      //         17 
{ 

tmp[10]=23; 

} 
if(buffer[24]==49 && buffer[25]==56)      //         18 
{ 

tmp[10]=24; 

} 
if(buffer[24]==49 && buffer[25]==57)      //         19 
{ 

tmp[10]=25; 

} 

if(buffer[24]==49 && buffer[25]==65)      //         1a 
{ 

tmp[10]=26; 

} 
if(buffer[24]==49 && buffer[25]==66)      //         1b 
{ 

tmp[10]=27; 

} 
if(buffer[24]==49 && buffer[25]==67)      //         1c 
{ 

tmp[10]=28; 

} 
if(buffer[24]==49 && buffer[25]==68)      //         1d 
{ 

tmp[10]=29; 

} 
if(buffer[24]==49 && buffer[25]==69)      //         1e 
{ 

tmp[10]=30; 

} 
if(buffer[24]==49 && buffer[25]==70)      //         1f 
{ 

tmp[10]=31; 

} 


//--------------- 


if(buffer[24]==50 && buffer[25]==48)      //         20 
{ 

tmp[10]=32; 

} 

if(buffer[24]==50 && buffer[25]==49)      //         21 
{ 

tmp[10]=33; 

} 
if(buffer[24]==50 && buffer[25]==50)      //         22 
{ 

tmp[10]=34; 

} 
if(buffer[24]==50 && buffer[25]==51)      //         23 
{ 

tmp[10]=35; 

} 
if(buffer[24]==50 && buffer[25]==52)      //         24 
{ 

tmp[10]=36; 

} 
if(buffer[24]==50 && buffer[25]==53)      //         25 
{ 

tmp[10]=37; 

} 
if(buffer[24]==50 && buffer[25]==54)      //         26 
{ 

tmp[10]=38; 

} 
if(buffer[24]==50 && buffer[25]==55)      //         27 
{ 

tmp[10]=39; 

} 
if(buffer[24]==50 && buffer[25]==56)      //         28 
{ 

tmp[10]=40; 

} 
if(buffer[24]==50 && buffer[25]==57)      //         29 
{ 

tmp[10]=41; 

} 
if(buffer[24]==50 && buffer[25]==65)      //         2a 
{ 

tmp[10]=42; 

} 
if(buffer[24]==50 && buffer[25]==66)      //         2b 
{ 

tmp[10]=43; 

} 
if(buffer[24]==50 && buffer[25]==67)      //         2c 
{ 

tmp[10]=44; 

} 

if(buffer[24]==50 && buffer[25]==68)      //       2d  
{ 

tmp[10]=45; 

} 
if(buffer[24]==50 && buffer[25]==69)      //         2e 
{ 

tmp[10]=46; 

} 
if(buffer[24]==50 && buffer[25]==70)      //         2f 
{ 

tmp[10]=47; 

} 

//------------- 


if(buffer[24]==51 && buffer[25]==48)      // 30        
{ 

tmp[10]=48; 

} 

if(buffer[24]==51 && buffer[25]==49)      // 31        
{ 

tmp[10]=49; 

} 
if(buffer[24]==51 && buffer[25]==50)      // 32        
{ 

tmp[10]=50; 

} 
if(buffer[24]==51 && buffer[25]==51)      //33         
{ 

tmp[10]=51; 

} 
if(buffer[24]==51 && buffer[25]==52)      //34        
{ 

tmp[10]=52; 

} 
if(buffer[24]==51 && buffer[25]==53)      //35      
{ 

tmp[10]=53; 

} 
if(buffer[24]==51 && buffer[25]==54)      //36       
{ 

tmp[10]=54; 

} 
if(buffer[24]==51 && buffer[25]==55)      //37     
{ 

tmp[10]=55; 

} 
if(buffer[24]==51 && buffer[25]==56)      //38     
{ 

tmp[10]=56; 

} 
if(buffer[24]==51 && buffer[25]==57)      //39   
{ 

tmp[10]=57; 

} 

if(buffer[24]==51 && buffer[25]==65)      //3a 
{ 

tmp[10]=58; 

} 

if(buffer[24]==51 && buffer[25]==66)      //3b 
{ 

tmp[10]=59; 

} 
if(buffer[24]==51 && buffer[25]==67)      //3c 
{ 

tmp[10]=60; 

} 
if(buffer[24]==51 && buffer[25]==68)      //3d 
{ 

tmp[10]=61; 

} 
if(buffer[24]==51 && buffer[25]==69)      //3e  
{ 

tmp[10]=62; 

} 
if(buffer[24]==51 && buffer[25]==70)      //3f  
{ 

tmp[10]=63; 

} 

//------------ 


if(buffer[24]==52 && buffer[25]==48)      // 40       
{ 

tmp[10]=64; 

} 

if(buffer[24]==52 && buffer[25]==49)      // 41        
{ 

tmp[10]=65; 

} 
if(buffer[24]==52 && buffer[25]==50)      // 42        
{ 

tmp[10]=66; 

} 
if(buffer[24]==52 && buffer[25]==51)      //43         
{ 

tmp[10]=67; 

} 
if(buffer[24]==52 && buffer[25]==52)      //44        
{ 

tmp[10]=68; 

} 
if(buffer[24]==52 && buffer[25]==53)      //45      
{ 

tmp[10]=69; 

} 

if(buffer[24]==52 && buffer[25]==54)      //46       
{ 

tmp[10]=70; 

} 
if(buffer[24]==52 && buffer[25]==55)      //47     
{ 

tmp[10]=71; 

} 
if(buffer[24]==52 && buffer[25]==56)      //48     
{ 

tmp[10]=72; 

} 
if(buffer[24]==52 && buffer[25]==57)      //49   
{ 

tmp[10]=73; 

} 

if(buffer[24]==52 && buffer[25]==65)      //4a 
{ 

tmp[10]=74; 

} 

if(buffer[24]==52 && buffer[25]==66)      //4b 
{ 

tmp[10]=75; 

} 
if(buffer[24]==52 && buffer[25]==67)      //4c 
{ 

tmp[10]=76; 

} 
if(buffer[24]==52 && buffer[25]==68)      //4d 
{ 

tmp[10]=77; 

} 
if(buffer[24]==52 && buffer[25]==69)      //4e  
{ 

tmp[10]=78; 

} 
if(buffer[24]==52 && buffer[25]==70)      //4f  
{ 

tmp[10]=79; 

} 
//------------ 




if(buffer[24]==53 && buffer[25]==48)      //50       
{ 

tmp[10]=80; 

} 

if(buffer[24]==53 && buffer[25]==49)      //51        
{ 

tmp[10]=81; 

} 
if(buffer[24]==53 && buffer[25]==50)      //52        
{ 

tmp[10]=82; 

} 
if(buffer[24]==53 && buffer[25]==51)      //53         
{ 

tmp[10]=83; 

} 
if(buffer[24]==53 && buffer[25]==52)      //54        
{ 

tmp[10]=84; 

} 
if(buffer[24]==53 && buffer[25]==53)      //55      
{ 

tmp[10]=85; 

} 
if(buffer[24]==53 && buffer[25]==54)      //56       
{ 

tmp[10]=86; 

} 
if(buffer[24]==53 && buffer[25]==55)      //57     
{ 

tmp[10]=87; 

} 
if(buffer[24]==53 && buffer[25]==56)      //58     
{ 

tmp[10]=88; 

} 
if(buffer[24]==53 && buffer[25]==57)      //59   
{ 

tmp[10]=89; 

} 

if(buffer[24]==53 && buffer[25]==65)      //5a 
{ 

tmp[10]=90; 

} 

if(buffer[24]==53 && buffer[25]==66)      //5b 
{ 

tmp[10]=91; 

} 
if(buffer[24]==53 && buffer[25]==67)      //5c 
{ 

tmp[10]=92; 

} 
if(buffer[24]==53 && buffer[25]==68)      //5d 
{ 

tmp[10]=93; 

} 
if(buffer[24]==53 && buffer[25]==69)      //5e  
{ 

tmp[10]=94; 

} 
if(buffer[24]==53 && buffer[25]==70)      //5f  
{ 

tmp[10]=95; 

} 
//------------ 




if(buffer[24]==54 && buffer[25]==48)      //60       
{ 

tmp[10]=96; 

} 

if(buffer[24]==54 && buffer[25]==49)      //61        
{ 

tmp[10]=97; 

} 
if(buffer[24]==54 && buffer[25]==50)      //62        
{ 

tmp[10]=98; 

} 
if(buffer[24]==54 && buffer[25]==51)      //63         
{ 

tmp[10]=99; 

} 
if(buffer[24]==54 && buffer[25]==52)      //64        
{ 

tmp[10]=100; 

} 
if(buffer[24]==54 && buffer[25]==53)      //65      
{ 

tmp[10]=101; 

} 
if(buffer[24]==54 && buffer[25]==54)      //66       
{ 

tmp[10]=102; 

} 
if(buffer[24]==54 && buffer[25]==55)      //67     
{ 

tmp[10]=103; 

} 
if(buffer[24]==54 && buffer[25]==56)      //68     
{ 

tmp[10]=104; 

} 
if(buffer[24]==54 && buffer[25]==57)      //69   
{ 

tmp[10]=105; 

} 

if(buffer[24]==54 && buffer[25]==65)      //6a 
{ 

tmp[10]=106; 

} 

if(buffer[24]==54 && buffer[25]==66)      //6b 
{ 

tmp[10]=107; 

} 
if(buffer[24]==54 && buffer[25]==67)      //6c 
{ 

tmp[10]=108; 

} 
if(buffer[24]==54 && buffer[25]==68)      //6d 
{ 

tmp[10]=109; 

} 
if(buffer[24]==54 && buffer[25]==69)      //6e  
{ 

tmp[10]=110; 

} 
if(buffer[24]==54 && buffer[25]==70)      //6f  
{ 

tmp[10]=111; 

} 
//------------ 




if(buffer[24]==55 && buffer[25]==48)      //70       
{ 

tmp[10]=112; 

} 

if(buffer[24]==55 && buffer[25]==49)      //71        
{ 

tmp[10]=113; 

} 
if(buffer[24]==55 && buffer[25]==50)      //72        
{ 

tmp[10]=114; 

} 
if(buffer[24]==55 && buffer[25]==51)      //73         
{ 

tmp[10]=115; 

} 
if(buffer[24]==55 && buffer[25]==52)      //74        
{ 

tmp[10]=116; 

} 
if(buffer[24]==55 && buffer[25]==53)      //75      
{ 

tmp[10]=117; 

} 
if(buffer[24]==55 && buffer[25]==54)      //76       
{ 

tmp[10]=118; 

} 
if(buffer[24]==55 && buffer[25]==55)      //77     
{ 

tmp[10]=119; 

} 
if(buffer[24]==55 && buffer[25]==56)      //78     
{ 

tmp[10]=120; 

} 
if(buffer[24]==55 && buffer[25]==57)      //79   
{ 

tmp[10]=121; 

} 

if(buffer[24]==55 && buffer[25]==65)      //7a 
{ 

tmp[10]=122; 

} 

if(buffer[24]==55 && buffer[25]==66)      //7b 
{ 

tmp[10]=123; 

} 
if(buffer[24]==55 && buffer[25]==67)      //7c 
{ 

tmp[10]=124; 

} 
if(buffer[24]==55 && buffer[25]==68)      //7d 
{ 

tmp[10]=125; 

} 
if(buffer[24]==55 && buffer[25]==69)      //7e  
{ 

tmp[10]=126; 

} 
if(buffer[24]==55 && buffer[25]==70)      //7f  
{ 

tmp[10]=127; 

} 

//------------ 

if(buffer[24]==56 && buffer[25]==48)      //80       
{ 

tmp[10]=128; 

} 

if(buffer[24]==56 && buffer[25]==49)      //81        
{ 

tmp[10]=129; 

} 
if(buffer[24]==56 && buffer[25]==50)      //82        
{ 

tmp[10]=130; 

} 
if(buffer[24]==56 && buffer[25]==51)      //83         
{ 

tmp[10]=131; 

} 
if(buffer[24]==56 && buffer[25]==52)      //84        
{ 

tmp[10]=132; 

} 
if(buffer[24]==56 && buffer[25]==53)      //85      
{ 

tmp[10]=133; 

} 
if(buffer[24]==56 && buffer[25]==54)      //86       
{ 

tmp[10]=134; 

} 
if(buffer[24]==56 && buffer[25]==55)      //87     
{ 

tmp[10]=135; 

} 
if(buffer[24]==56 && buffer[25]==56)      //88     
{ 

tmp[10]=136; 

} 
if(buffer[24]==56 && buffer[25]==57)      //89   
{ 

tmp[10]=137; 

} 

if(buffer[24]==56 && buffer[25]==65)      //8a 
{ 

tmp[10]=138; 

} 

if(buffer[24]==56 && buffer[25]==66)      //8b 
{ 

tmp[10]=139; 

} 
if(buffer[24]==56 && buffer[25]==67)      //8c 
{ 

tmp[10]=140; 

} 
if(buffer[24]==56 && buffer[25]==68)      //8d 
{ 

tmp[10]=141; 

} 
if(buffer[24]==56 && buffer[25]==69)      //8e  
{ 

tmp[10]=142; 

} 
if(buffer[24]==56 && buffer[25]==70)      //8f  
{ 

tmp[10]=143; 

} 
//------------ 


if(buffer[24]==57 && buffer[25]==48)      //90       
{ 

tmp[10]=144; 

} 

if(buffer[24]==57 && buffer[25]==49)      //91        
{ 

tmp[10]=145; 

} 
if(buffer[24]==57 && buffer[25]==50)      //92        
{ 

tmp[10]=146; 

} 
if(buffer[24]==57 && buffer[25]==51)      //93         
{ 

tmp[10]=147; 

} 
if(buffer[24]==57 && buffer[25]==52)      //94        
{ 

tmp[10]=148; 

} 
if(buffer[24]==57 && buffer[25]==53)      //95      
{ 

tmp[10]=149; 

} 
if(buffer[24]==57 && buffer[25]==54)      //96       
{ 

tmp[10]=150; 

} 
if(buffer[24]==57 && buffer[25]==55)      //97     
{ 

tmp[10]=151; 

} 
if(buffer[24]==57 && buffer[25]==56)      //98     
{ 

tmp[10]=152; 

} 
if(buffer[24]==57 && buffer[25]==57)      //99   
{ 

tmp[10]=153; 

} 

if(buffer[24]==57 && buffer[25]==65)      //9a 
{ 

tmp[10]=154; 

} 

if(buffer[24]==57 && buffer[25]==66)      //9b 
{ 

tmp[10]=155; 

} 
if(buffer[24]==57 && buffer[25]==67)      //9c 
{ 

tmp[10]=156; 

} 
if(buffer[24]==57 && buffer[25]==68)      //9d 
{ 

tmp[10]=157; 

} 
if(buffer[24]==57 && buffer[25]==69)      //9e  
{ 

tmp[10]=158; 

} 
if(buffer[24]==57 && buffer[25]==70)      //9f  
{ 

tmp[10]=159; 

} 
//------------ 


if(buffer[24]==65 && buffer[25]==48)      //a0       
{ 

tmp[10]=160; 

} 

if(buffer[24]==65 && buffer[25]==49)      //a1        
{ 

tmp[10]=161; 

} 
if(buffer[24]==65 && buffer[25]==50)      //a2        
{ 

tmp[10]=162; 

} 
if(buffer[24]==65 && buffer[25]==51)      //a3         
{ 

tmp[10]=163; 

} 
if(buffer[24]==65 && buffer[25]==52)      //a4        
{ 

tmp[10]=164; 

} 
if(buffer[24]==65 && buffer[25]==53)      //a5      
{ 

tmp[10]=165; 

} 
if(buffer[24]==65 && buffer[25]==54)      //a6       
{ 

tmp[10]=166; 

} 
if(buffer[24]==65 && buffer[25]==55)      //a7     
{ 

tmp[10]=167; 

} 
if(buffer[24]==65 && buffer[25]==56)      //a8     
{ 

tmp[10]=168; 

} 
if(buffer[24]==65 && buffer[25]==57)      //a9   
{ 

tmp[10]=169; 

} 

if(buffer[24]==65 && buffer[25]==65)      //aa 
{ 

tmp[10]=170; 

} 

if(buffer[24]==65 && buffer[25]==66)      //ab 
{ 

tmp[10]=171; 

} 
if(buffer[24]==65 && buffer[25]==67)      //ac 
{ 

tmp[10]=172; 

} 
if(buffer[24]==65 && buffer[25]==68)      //ad 
{ 

tmp[10]=173; 

} 
if(buffer[24]==65 && buffer[25]==69)      //ae  
{ 

tmp[10]=174; 

} 
if(buffer[24]==65 && buffer[25]==70)      //af  
{ 

tmp[10]=175; 

} 
//------------ 


if(buffer[24]==66 && buffer[25]==48)      //b0       
{ 

tmp[10]=176; 

} 

if(buffer[24]==66 && buffer[25]==49)      //b1        
{ 

tmp[10]=177; 

} 
if(buffer[24]==66 && buffer[25]==50)      //b2        
{ 

tmp[10]=178; 

} 
if(buffer[24]==66 && buffer[25]==51)      //b3         
{ 

tmp[10]=179; 

} 
if(buffer[24]==66 && buffer[25]==52)      //b4        
{ 

tmp[10]=180; 

} 
if(buffer[24]==66 && buffer[25]==53)      //b5      
{ 

tmp[10]=181; 

} 
if(buffer[24]==66 && buffer[25]==54)      //b6       
{ 

tmp[10]=182; 

} 
if(buffer[24]==66 && buffer[25]==55)      //b7     
{ 

tmp[10]=183; 

} 
if(buffer[24]==66 && buffer[25]==56)      //b8     
{ 

tmp[10]=184; 

} 
if(buffer[24]==66 && buffer[25]==57)      //b9   
{ 

tmp[10]=185; 

} 

if(buffer[24]==66 && buffer[25]==65)      //ba 
{ 

tmp[10]=186; 

} 

if(buffer[24]==66 && buffer[25]==66)      //bb 
{ 

tmp[10]=187; 

} 
if(buffer[24]==66 && buffer[25]==67)      //bc 
{ 

tmp[10]=188; 

} 
if(buffer[24]==66 && buffer[25]==68)      //bd 
{ 

tmp[10]=189; 

} 
if(buffer[24]==66 && buffer[25]==69)      //be  
{ 

tmp[10]=190; 

} 
if(buffer[24]==66 && buffer[25]==70)      //bf  
{ 

tmp[10]=191; 

} 
//------------ 



if(buffer[24]==67 && buffer[25]==48)      //c0       
{ 

tmp[10]=192; 

} 

if(buffer[24]==67 && buffer[25]==49)      //c1        
{ 

tmp[10]=193; 

} 
if(buffer[24]==67 && buffer[25]==50)      //c2        
{ 

tmp[10]=194; 

} 
if(buffer[24]==67 && buffer[25]==51)      //c3         
{ 

tmp[10]=195; 

} 
if(buffer[24]==67 && buffer[25]==52)      //c4        
{ 

tmp[10]=196; 

} 
if(buffer[24]==67 && buffer[25]==53)      //c5      
{ 
 
tmp[10]=197; 

} 
if(buffer[24]==67 && buffer[25]==54)      //c6       
{ 

tmp[10]=198; 

} 
if(buffer[24]==67 && buffer[25]==55)      //c7     
{ 

tmp[10]=199; 

} 
if(buffer[24]==67 && buffer[25]==56)      //c8     
{ 

tmp[10]=200; 

} 
if(buffer[24]==67 && buffer[25]==57)      //c9   
{ 

tmp[10]=201; 

} 

if(buffer[24]==67 && buffer[25]==65)      //ca 
{ 

tmp[10]=202; 

} 

if(buffer[24]==67 && buffer[25]==66)      //cb 
{ 

tmp[10]=203; 

} 
if(buffer[24]==67 && buffer[25]==67)      //cc 
{ 

tmp[10]=204; 

} 
if(buffer[24]==67 && buffer[25]==68)      //cd 
{ 

tmp[10]=205; 
 
} 
if(buffer[24]==67 && buffer[25]==69)      //ce  
{ 

tmp[10]=206; 

} 
if(buffer[24]==67 && buffer[25]==70)      //cf  
{ 

tmp[10]=207; 

} 
//------------ 


if(buffer[24]==68 && buffer[25]==48)      //d0       
{ 

tmp[10]=208; 

} 

if(buffer[24]==68 && buffer[25]==49)      //d1        
{ 

tmp[10]=209; 

} 
if(buffer[24]==68 && buffer[25]==50)      //d2        
{ 

tmp[10]=210; 

} 
if(buffer[24]==68 && buffer[25]==51)      //d3         
{ 

tmp[10]=211; 

} 
if(buffer[24]==68 && buffer[25]==52)      //d4        
{ 

tmp[10]=212; 

} 
if(buffer[24]==68 && buffer[25]==53)      //d5      
{ 

tmp[10]=213; 
 
} 
if(buffer[24]==68 && buffer[25]==54)      //d6       
{ 

tmp[10]=214; 

} 
if(buffer[24]==68 && buffer[25]==55)      //d7     
{ 

tmp[10]=215; 

} 
if(buffer[24]==68 && buffer[25]==56)      //d8     
{ 

tmp[10]=216; 

} 
if(buffer[24]==68 && buffer[25]==57)      //d9   
{ 

tmp[10]=217; 

} 

if(buffer[24]==68 && buffer[25]==65)      //da 
{ 

tmp[10]=218; 

} 

if(buffer[24]==68 && buffer[25]==66)      //db 
{ 

tmp[10]=219; 

} 
if(buffer[24]==68 && buffer[25]==67)      //dc 
{ 

tmp[10]=220; 

} 
if(buffer[24]==68 && buffer[25]==68)      //dd 
{ 

tmp[10]=221; 

} 
if(buffer[24]==68 && buffer[25]==69)      //de  
{ 

tmp[10]=222; 

} 
if(buffer[24]==68 && buffer[25]==70)      //df  
{ 

tmp[10]=223; 

} 
//------------ 



if(buffer[24]==69 && buffer[25]==48)      //e0       
{ 

tmp[10]=224; 

} 

if(buffer[24]==69 && buffer[25]==49)      //e1        
{ 

tmp[10]=225; 

} 
if(buffer[24]==69 && buffer[25]==50)      //e2        
{ 

tmp[10]=226; 

} 
if(buffer[24]==69 && buffer[25]==51)      //e3         
{ 

tmp[10]=227; 

} 
if(buffer[24]==69 && buffer[25]==52)      //e4        
{ 

tmp[10]=228; 

} 
if(buffer[24]==69 && buffer[25]==53)      //e5      
{ 

tmp[10]=229; 

} 
if(buffer[24]==69 && buffer[25]==54)      //e6       
{ 

tmp[10]=230; 

} 
if(buffer[24]==69 && buffer[25]==55)      //e7     
{ 

tmp[10]=231; 

} 
if(buffer[24]==69 && buffer[25]==56)      //e8     
{ 

tmp[10]=232; 

} 
if(buffer[24]==69 && buffer[25]==57)      //e9   
{ 

tmp[10]=233; 

} 

if(buffer[24]==69 && buffer[25]==65)      //ea 
{ 

tmp[10]=234; 

} 

if(buffer[24]==69 && buffer[25]==66)      //eb 
{ 

tmp[10]=235; 

} 
if(buffer[24]==69 && buffer[25]==67)      //ec 
{ 

tmp[10]=236; 

} 
if(buffer[24]==69 && buffer[25]==68)      //ed 
{ 

tmp[10]=237; 

} 
if(buffer[24]==69 && buffer[25]==69)      //ee  
{ 

tmp[10]=238; 

} 
if(buffer[24]==69 && buffer[25]==70)      //ef  
{ 

tmp[10]=239; 

} 
//------------ 

if(buffer[24]==70 && buffer[25]==48)      //f0       
{ 

tmp[10]=240; 

} 

if(buffer[24]==70 && buffer[25]==49)      //f1        
{ 

tmp[10]=241; 

} 
if(buffer[24]==70 && buffer[25]==50)      //f2        
{ 

tmp[10]=242; 

} 
if(buffer[24]==70 && buffer[25]==51)      //f3         
{ 

tmp[10]=243; 

} 
if(buffer[24]==70 && buffer[25]==52)      //f4        
{ 

tmp[10]=244; 

} 
if(buffer[24]==70 && buffer[25]==53)      //f5      
{ 

tmp[10]=245; 

} 
if(buffer[24]==70 && buffer[25]==54)      //f6       
{ 
 
tmp[10]=246; 

} 
if(buffer[24]==70 && buffer[25]==55)      //f7     
{ 

tmp[10]=247; 

} 
if(buffer[24]==70 && buffer[25]==56)      //f8     
{ 

tmp[10]=248; 

} 
if(buffer[24]==70 && buffer[25]==57)      //f9   
{ 

tmp[10]=249; 

} 

if(buffer[24]==70 && buffer[25]==65)      //fa 
{ 

tmp[10]=250; 

} 

if(buffer[24]==70 && buffer[25]==66)      //fb 
{ 

tmp[10]=251; 

} 
if(buffer[24]==70 && buffer[25]==67)      //fc 
{ 

tmp[10]=252; 

} 
if(buffer[24]==70 && buffer[25]==68)      //fd 
{ 

tmp[10]=253; 

} 
if(buffer[24]==70 && buffer[25]==69)      //fe  
{ 

tmp[10]=254; 
 
} 
if(buffer[24]==70 && buffer[25]==70)      //ff  
{ 

tmp[10]=255; 

} 

//----------------------- end of tmp[10]--------------------------- 



//----------------------- start of tmp[11]--------------------------- 


if(buffer[26]==48 && buffer[27]==48)      //00        
{ 

tmp[11]=0; 

} 

if(buffer[26]==48 && buffer[27]==49)      //01        
{ 

tmp[11]=1; 

} 
if(buffer[26]==48 && buffer[27]==50)      //02        
{ 

tmp[11]=2; 

} 
if(buffer[26]==48 && buffer[27]==51)      //03         
{ 

tmp[11]=3; 

} 
if(buffer[26]==48 && buffer[27]==52)      //04        
{ 

tmp[11]=4; 

} 
if(buffer[26]==48 && buffer[27]==53)      //05      
{ 

tmp[11]=5; 

} 


if(buffer[26]==48 && buffer[27]==54)      //06       
{ 

tmp[11]=6; 

} 
if(buffer[26]==48 && buffer[27]==55)      //07     
{ 

tmp[11]=7; 

} 
if(buffer[26]==48 && buffer[27]==56)      //08     
{ 

tmp[11]=8; 

} 
if(buffer[26]==48 && buffer[27]==57)      //09   
{ 

tmp[11]=9; 

} 

if(buffer[26]==48 && buffer[27]==65)      //0a 
{ 

tmp[11]=10; 

} 

if(buffer[26]==48 && buffer[27]==66)      //0b 
{ 

tmp[11]=11; 

} 
if(buffer[26]==48 && buffer[27]==67)      //0c 
{ 

tmp[11]=12; 

} 
if(buffer[26]==48 && buffer[27]==68)      //0d 
{ 

tmp[11]=13; 

} 
if(buffer[26]==48 && buffer[27]==69)      //0e  
{ 

tmp[11]=14; 

} 
if(buffer[26]==48 && buffer[27]==70)      //0f  
{ 

tmp[11]=15; 

} 

//----------- 

if(buffer[26]==49 && buffer[27]==48)      //        10 
{ 

tmp[11]=16; 

} 
if(buffer[26]==49 && buffer[27]==49)      //         11 
{ 

tmp[11]=17; 

} 
if(buffer[26]==49 && buffer[27]==50)      //         12 
{ 

tmp[11]=18; 

} 
if(buffer[26]==49 && buffer[27]==51)      //         13 
{ 

tmp[11]=19; 

} 
if(buffer[26]==49 && buffer[27]==52)      //         14 
{ 

tmp[11]=20; 

} 
if(buffer[26]==49 && buffer[27]==53)      //         15 
{ 

tmp[11]=21; 

} 
if(buffer[26]==49 && buffer[27]==54)      //         16 
{ 

tmp[11]=22; 

} 
if(buffer[26]==49 && buffer[27]==55)      //         17 
{ 

tmp[11]=23; 

} 
if(buffer[26]==49 && buffer[27]==56)      //         18 
{ 

tmp[11]=24; 

} 
if(buffer[26]==49 && buffer[27]==57)      //         19 
{ 

tmp[11]=25; 

} 

if(buffer[26]==49 && buffer[27]==65)      //         1a 
{ 

tmp[11]=26; 

} 
if(buffer[26]==49 && buffer[27]==66)      //         1b 
{ 

tmp[11]=27; 

} 
if(buffer[26]==49 && buffer[27]==67)      //         1c 
{ 

tmp[11]=28; 

} 
if(buffer[26]==49 && buffer[27]==68)      //         1d 
{ 

tmp[11]=29; 

} 
if(buffer[26]==49 && buffer[27]==69)      //         1e 
{ 

tmp[11]=30; 

} 
if(buffer[26]==49 && buffer[27]==70)      //         1f 
{ 

tmp[11]=31; 

} 


//--------------- 


if(buffer[26]==50 && buffer[27]==48)      //         20 
{ 

tmp[11]=32; 

} 

if(buffer[26]==50 && buffer[27]==49)      //         21 
{ 

tmp[11]=33; 

} 
if(buffer[26]==50 && buffer[27]==50)      //         22 
{ 

tmp[11]=34; 

} 
if(buffer[26]==50 && buffer[27]==51)      //         23 
{ 

tmp[11]=35; 

} 
if(buffer[26]==50 && buffer[27]==52)      //         24 
{ 

tmp[11]=36; 

} 
if(buffer[26]==50 && buffer[27]==53)      //         25 
{ 

tmp[11]=37; 

} 
if(buffer[26]==50 && buffer[27]==54)      //         26 
{ 

tmp[11]=38; 

} 
if(buffer[26]==50 && buffer[27]==55)      //         27 
{ 

tmp[11]=39; 

} 
if(buffer[26]==50 && buffer[27]==56)      //         28 
{ 

tmp[11]=40; 

} 
if(buffer[26]==50 && buffer[27]==57)      //         29 
{ 

tmp[11]=41; 

} 
if(buffer[26]==50 && buffer[27]==65)      //         2a 
{ 

tmp[11]=42; 

} 
if(buffer[26]==50 && buffer[27]==66)      //         2b 
{ 

tmp[11]=43; 

} 
if(buffer[26]==50 && buffer[27]==67)      //         2c 
{ 

tmp[11]=44; 

} 

if(buffer[26]==50 && buffer[27]==68)      //       2d  
{ 

tmp[11]=45; 

} 
if(buffer[26]==50 && buffer[27]==69)      //         2e 
{ 

tmp[11]=46; 
 
} 
if(buffer[26]==50 && buffer[27]==70)      //         2f 
{ 

tmp[11]=47; 

} 

//------------- 


if(buffer[26]==51 && buffer[27]==48)      // 30        
{ 

tmp[11]=48; 

} 

if(buffer[26]==51 && buffer[27]==49)      // 31        
{ 

tmp[11]=49; 

} 
if(buffer[26]==51 && buffer[27]==50)      // 32        
{ 

tmp[11]=50; 

} 
if(buffer[26]==51 && buffer[27]==51)      //33         
{ 

tmp[11]=51; 

} 
if(buffer[26]==51 && buffer[27]==52)      //34        
{ 

tmp[11]=52; 

} 
if(buffer[26]==51 && buffer[27]==53)      //35      
{ 

tmp[11]=53; 

} 
if(buffer[26]==51 && buffer[27]==54)      //36       
{ 
//----------------------- start of tmp[31]--------------------------- 
 

if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 
 
} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 
 
//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 

 
if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 
 
tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 
 
} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 
 
tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 
 
} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 
 
} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 
 
} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 
 
} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 
 
tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 
 
} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 
 
tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 
 
if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 
 
tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 
 
if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 
} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 
 
tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 
 
} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 
 
tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 
 
} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 
 
} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 
 
tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 
 
} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 
 
tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 
 
} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 
 
tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 
 
} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 
 
} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 
 
tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 
 
tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 
 
} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 
 
} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 
 
tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 
 
} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 

tmp[11]=54; 

} 
if(buffer[26]==51 && buffer[27]==55)      //37     
{ 

tmp[11]=55; 

} 
if(buffer[26]==51 && buffer[27]==56)      //38     
{ 

tmp[11]=56; 

} 
if(buffer[26]==51 && buffer[27]==57)      //39   
{ 

tmp[11]=57; 

} 

if(buffer[26]==51 && buffer[27]==65)      //3a 
{ 

tmp[11]=58; 

} 

if(buffer[26]==51 && buffer[27]==66)      //3b 
{ 

tmp[11]=59; 

} 
if(buffer[26]==51 && buffer[27]==67)      //3c 
{ 

tmp[11]=60; 

} 
if(buffer[26]==51 && buffer[27]==68)      //3d 
{ 

tmp[11]=61; 

} 
if(buffer[26]==51 && buffer[27]==69)      //3e  
{ 

tmp[11]=62; 

} 
if(buffer[26]==51 && buffer[27]==70)      //3f  
{ 

tmp[11]=63; 

} 

//------------ 


if(buffer[26]==52 && buffer[27]==48)      // 40       
{ 

tmp[11]=64; 

} 

if(buffer[26]==52 && buffer[27]==49)      // 41        
{ 

tmp[11]=65; 

} 
if(buffer[26]==52 && buffer[27]==50)      // 42        
{ 

tmp[11]=66; 

} 
if(buffer[26]==52 && buffer[27]==51)      //43         
{ 

tmp[11]=67; 

} 
if(buffer[26]==52 && buffer[27]==52)      //44        
{ 
 
tmp[11]=68; 

} 
if(buffer[26]==52 && buffer[27]==53)      //45      
{ 

tmp[11]=69; 

} 

if(buffer[26]==52 && buffer[27]==54)      //46       
{ 

tmp[11]=70; 

} 
if(buffer[26]==52 && buffer[27]==55)      //47     
{ 

tmp[11]=71; 

} 
if(buffer[26]==52 && buffer[27]==56)      //48     
{ 

tmp[11]=72; 

} 
if(buffer[26]==52 && buffer[27]==57)      //49   
{ 

tmp[11]=73; 

} 

if(buffer[26]==52 && buffer[27]==65)      //4a 
{ 

tmp[11]=74; 

} 

if(buffer[26]==52 && buffer[27]==66)      //4b 
{ 

tmp[11]=75; 

} 
if(buffer[26]==52 && buffer[27]==67)      //4c 
{ 

tmp[11]=76; 

} 
if(buffer[26]==52 && buffer[27]==68)      //4d 
{ 

tmp[11]=77; 

} 
if(buffer[26]==52 && buffer[27]==69)      //4e  
{ 

tmp[11]=78; 

} 
if(buffer[26]==52 && buffer[27]==70)      //4f  
{ 

tmp[11]=79; 

} 
//------------ 




if(buffer[26]==53 && buffer[27]==48)      //50       
{ 

tmp[11]=80; 

} 

if(buffer[26]==53 && buffer[27]==49)      //51        
{ 

tmp[11]=81; 

} 
if(buffer[26]==53 && buffer[27]==50)      //52        
{ 

tmp[11]=82; 

} 
if(buffer[26]==53 && buffer[27]==51)      //53         
{ 

tmp[11]=83; 

} 
if(buffer[26]==53 && buffer[27]==52)      //54        
{ 

tmp[11]=84; 

} 
if(buffer[26]==53 && buffer[27]==53)      //55      
{ 

tmp[11]=85; 

} 
if(buffer[26]==53 && buffer[27]==54)      //56       
{ 

tmp[11]=86; 

} 
if(buffer[26]==53 && buffer[27]==55)      //57     
{ 

tmp[11]=87; 

} 
if(buffer[26]==53 && buffer[27]==56)      //58     
{ 

tmp[11]=88; 

} 
if(buffer[26]==53 && buffer[27]==57)      //59   
{ 

tmp[11]=89; 

} 

if(buffer[26]==53 && buffer[27]==65)      //5a 
{ 

tmp[11]=90; 

} 

if(buffer[26]==53 && buffer[27]==66)      //5b 
{ 

tmp[11]=91; 

} 
if(buffer[26]==53 && buffer[27]==67)      //5c 
{ 

tmp[11]=92; 

} 
if(buffer[26]==53 && buffer[27]==68)      //5d 
{ 

tmp[11]=93; 

} 
if(buffer[26]==53 && buffer[27]==69)      //5e  
{ 

tmp[11]=94; 

} 
if(buffer[26]==53 && buffer[27]==70)      //5f  
{ 

tmp[11]=95; 

} 
//------------ 




if(buffer[26]==54 && buffer[27]==48)      //60       
{ 

tmp[11]=96; 

} 

if(buffer[26]==54 && buffer[27]==49)      //61        
{ 

tmp[11]=97; 

} 
if(buffer[26]==54 && buffer[27]==50)      //62        
{ 

tmp[11]=98; 

} 
if(buffer[26]==54 && buffer[27]==51)      //63         
{ 

tmp[11]=99; 

} 
if(buffer[26]==54 && buffer[27]==52)      //64        
{ 

tmp[11]=100; 

} 
if(buffer[26]==54 && buffer[27]==53)      //65      
{ 

tmp[11]=101; 

} 
if(buffer[26]==54 && buffer[27]==54)      //66       
{ 

tmp[11]=102; 

} 
if(buffer[26]==54 && buffer[27]==55)      //67     
{ 

tmp[11]=103; 

} 
if(buffer[26]==54 && buffer[27]==56)      //68     
{ 

tmp[11]=104; 

} 
if(buffer[26]==54 && buffer[27]==57)      //69   
{ 

tmp[11]=105; 

} 

if(buffer[26]==54 && buffer[27]==65)      //6a 
{ 

tmp[11]=106; 

} 

if(buffer[26]==54 && buffer[27]==66)      //6b 
{ 

tmp[11]=107; 

} 
if(buffer[26]==54 && buffer[27]==67)      //6c 
{ 

tmp[11]=108; 

} 
if(buffer[26]==54 && buffer[27]==68)      //6d 
{ 

tmp[11]=109; 

} 
if(buffer[26]==54 && buffer[27]==69)      //6e  
{ 

tmp[11]=110; 

} 
if(buffer[26]==54 && buffer[27]==70)      //6f  
{ 

tmp[11]=111; 

} 
//------------ 




if(buffer[26]==55 && buffer[27]==48)      //70       
{ 

tmp[11]=112; 

} 

if(buffer[26]==55 && buffer[27]==49)      //71        
{ 

tmp[11]=113; 

} 
if(buffer[26]==55 && buffer[27]==50)      //72        
{ 

tmp[11]=114; 

} 
if(buffer[26]==55 && buffer[27]==51)      //73         
{ 

tmp[11]=115; 

} 
if(buffer[26]==55 && buffer[27]==52)      //74        
{ 

tmp[11]=116; 

} 
if(buffer[26]==55 && buffer[27]==53)      //75      
{ 

tmp[11]=117; 

} 
if(buffer[26]==55 && buffer[27]==54)      //76       
{ 

tmp[11]=118; 

} 
if(buffer[26]==55 && buffer[27]==55)      //77     
{ 

tmp[11]=119; 

} 
if(buffer[26]==55 && buffer[27]==56)      //78     
{ 

tmp[11]=120; 

} 
if(buffer[26]==55 && buffer[27]==57)      //79   
{ 

tmp[11]=121; 

} 

if(buffer[26]==55 && buffer[27]==65)      //7a 
{ 

tmp[11]=122; 

} 

if(buffer[26]==55 && buffer[27]==66)      //7b 
{ 

tmp[11]=123; 

} 
if(buffer[26]==55 && buffer[27]==67)      //7c 
{ 

tmp[11]=124; 

} 
if(buffer[26]==55 && buffer[27]==68)      //7d 
{ 

tmp[11]=125; 

} 
if(buffer[26]==55 && buffer[27]==69)      //7e  
{ 

tmp[11]=126; 

} 
if(buffer[26]==55 && buffer[27]==70)      //7f  
{ 

tmp[11]=127; 

} 

//------------ 

if(buffer[26]==56 && buffer[27]==48)      //80       
{ 

tmp[11]=128; 

} 

if(buffer[26]==56 && buffer[27]==49)      //81        
{ 

tmp[11]=129; 

} 
if(buffer[26]==56 && buffer[27]==50)      //82        
{ 

tmp[11]=130; 

} 
if(buffer[26]==56 && buffer[27]==51)      //83         
{ 

tmp[11]=131; 

} 
if(buffer[26]==56 && buffer[27]==52)      //84        
{ 

tmp[11]=132; 

} 
if(buffer[26]==56 && buffer[27]==53)      //85      
{ 

tmp[11]=133; 

} 
if(buffer[26]==56 && buffer[27]==54)      //86       
{ 

tmp[11]=134; 

} 
if(buffer[26]==56 && buffer[27]==55)      //87     
{ 

tmp[11]=135; 

} 
if(buffer[26]==56 && buffer[27]==56)      //88     
{ 

tmp[11]=136; 

} 
if(buffer[26]==56 && buffer[27]==57)      //89   
{ 

tmp[11]=137; 

} 

if(buffer[26]==56 && buffer[27]==65)      //8a 
{ 

tmp[11]=138; 

} 

if(buffer[26]==56 && buffer[27]==66)      //8b 
{ 

tmp[11]=139; 

} 
if(buffer[26]==56 && buffer[27]==67)      //8c 
{ 

tmp[11]=140; 

} 
if(buffer[26]==56 && buffer[27]==68)      //8d 
{ 

tmp[11]=141; 

} 
if(buffer[26]==56 && buffer[27]==69)      //8e  
{ 

tmp[11]=142; 

} 
if(buffer[26]==56 && buffer[27]==70)      //8f  
{ 

tmp[11]=143; 

} 
//------------ 


if(buffer[26]==57 && buffer[27]==48)      //90       
{ 

tmp[11]=144; 

} 

if(buffer[26]==57 && buffer[27]==49)      //91        
{ 

tmp[11]=145; 

} 
if(buffer[26]==57 && buffer[27]==50)      //92        
{ 

tmp[11]=146; 

} 
if(buffer[26]==57 && buffer[27]==51)      //93         
{ 

tmp[11]=147; 

} 
if(buffer[26]==57 && buffer[27]==52)      //94        
{ 

tmp[11]=148; 

} 
if(buffer[26]==57 && buffer[27]==53)      //95      
{ 

tmp[11]=149; 

} 
if(buffer[26]==57 && buffer[27]==54)      //96       
{ 

tmp[11]=150; 

} 
if(buffer[26]==57 && buffer[27]==55)      //97     
{ 

tmp[11]=151; 

} 
if(buffer[26]==57 && buffer[27]==56)      //98     
{ 

tmp[11]=152; 

} 
if(buffer[26]==57 && buffer[27]==57)      //99   
{ 

tmp[11]=153; 

} 

if(buffer[26]==57 && buffer[27]==65)      //9a 
{ 

tmp[11]=154; 

} 

if(buffer[26]==57 && buffer[27]==66)      //9b 
{ 

tmp[11]=155; 

} 
if(buffer[26]==57 && buffer[27]==67)      //9c 
{ 

tmp[11]=156; 

} 
if(buffer[26]==57 && buffer[27]==68)      //9d 
{ 

tmp[11]=157; 

} 
if(buffer[26]==57 && buffer[27]==69)      //9e  
{ 

tmp[11]=158; 

} 
if(buffer[26]==57 && buffer[27]==70)      //9f  
{ 

tmp[11]=159; 

} 
//------------ 


if(buffer[26]==65 && buffer[27]==48)      //a0       
{ 

tmp[11]=160; 

} 

if(buffer[26]==65 && buffer[27]==49)      //a1        
{ 

tmp[11]=161; 

} 
if(buffer[26]==65 && buffer[27]==50)      //a2        
{ 

tmp[11]=162; 

} 
if(buffer[26]==65 && buffer[27]==51)      //a3         
{ 

tmp[11]=163; 

} 
if(buffer[26]==65 && buffer[27]==52)      //a4        
{ 

tmp[11]=164; 

} 
if(buffer[26]==65 && buffer[27]==53)      //a5      
{ 

tmp[11]=165; 

} 
if(buffer[26]==65 && buffer[27]==54)      //a6       
{ 

tmp[11]=166; 

} 
if(buffer[26]==65 && buffer[27]==55)      //a7     
{ 

tmp[11]=167; 

} 
if(buffer[26]==65 && buffer[27]==56)      //a8     
{ 

tmp[11]=168; 

} 
if(buffer[26]==65 && buffer[27]==57)      //a9   
{ 

tmp[11]=169; 

} 

if(buffer[26]==65 && buffer[27]==65)      //aa 
{ 

tmp[11]=170; 

} 

if(buffer[26]==65 && buffer[27]==66)      //ab 
{ 

tmp[11]=171; 

} 
if(buffer[26]==65 && buffer[27]==67)      //ac 
{ 

tmp[11]=172; 

} 
if(buffer[26]==65 && buffer[27]==68)      //ad 
{ 

tmp[11]=173; 

} 
if(buffer[26]==65 && buffer[27]==69)      //ae  
{ 

tmp[11]=174; 

} 
if(buffer[26]==65 && buffer[27]==70)      //af  
{ 

tmp[11]=175; 

} 
//------------ 


if(buffer[26]==66 && buffer[27]==48)      //b0       
{ 

tmp[11]=176; 

} 

if(buffer[26]==66 && buffer[27]==49)      //b1        
{ 

tmp[11]=177; 

} 
if(buffer[26]==66 && buffer[27]==50)      //b2        
{ 

tmp[11]=178; 

} 
if(buffer[26]==66 && buffer[27]==51)      //b3         
{ 

tmp[11]=179; 

} 
if(buffer[26]==66 && buffer[27]==52)      //b4        
{ 

tmp[11]=180; 

} 
if(buffer[26]==66 && buffer[27]==53)      //b5      
{ 

tmp[11]=181; 

} 
if(buffer[26]==66 && buffer[27]==54)      //b6       
{ 

tmp[11]=182; 

} 
if(buffer[26]==66 && buffer[27]==55)      //b7     
{ 

tmp[11]=183; 

} 
if(buffer[26]==66 && buffer[27]==56)      //b8     
{ 

tmp[11]=184; 

} 
if(buffer[26]==66 && buffer[27]==57)      //b9   
{ 

tmp[11]=185; 

} 

if(buffer[26]==66 && buffer[27]==65)      //ba 
{ 

tmp[11]=186; 

} 

if(buffer[26]==66 && buffer[27]==66)      //bb 
{ 

tmp[11]=187; 

} 
if(buffer[26]==66 && buffer[27]==67)      //bc 
{ 

tmp[11]=188; 

} 
if(buffer[26]==66 && buffer[27]==68)      //bd 
{ 

tmp[11]=189; 

} 
if(buffer[26]==66 && buffer[27]==69)      //be  
{ 

tmp[11]=190; 

} 
if(buffer[26]==66 && buffer[27]==70)      //bf  
{ 

tmp[11]=191; 

} 
//------------ 



if(buffer[26]==67 && buffer[27]==48)      //c0       
{ 

tmp[11]=192; 

} 

if(buffer[26]==67 && buffer[27]==49)      //c1        
{ 

tmp[11]=193; 

} 
if(buffer[26]==67 && buffer[27]==50)      //c2        
{ 

tmp[11]=194; 

} 
if(buffer[26]==67 && buffer[27]==51)      //c3         
{ 

tmp[11]=195; 

} 
if(buffer[26]==67 && buffer[27]==52)      //c4        
{ 

tmp[11]=196; 

} 
if(buffer[26]==67 && buffer[27]==53)      //c5      
{ 

tmp[11]=197; 
 
} 
if(buffer[26]==67 && buffer[27]==54)      //c6       
{ 

tmp[11]=198; 

} 
if(buffer[26]==67 && buffer[27]==55)      //c7     
{ 

tmp[11]=199; 

} 
if(buffer[26]==67 && buffer[27]==56)      //c8     
{ 

tmp[11]=200; 

} 
if(buffer[26]==67 && buffer[27]==57)      //c9   
{ 

tmp[11]=201; 

} 

if(buffer[26]==67 && buffer[27]==65)      //ca 
{ 

tmp[11]=202; 

} 

if(buffer[26]==67 && buffer[27]==66)      //cb 
{ 

tmp[11]=203; 

} 
if(buffer[26]==67 && buffer[27]==67)      //cc 
{ 

tmp[11]=204; 

} 
if(buffer[26]==67 && buffer[27]==68)      //cd 
{ 

tmp[11]=205; 

} 
if(buffer[26]==67 && buffer[27]==69)      //ce  
{ 

tmp[11]=206; 

} 
if(buffer[26]==67 && buffer[27]==70)      //cf  
{ 

tmp[11]=207; 

} 
//------------ 


if(buffer[26]==68 && buffer[27]==48)      //d0       
{ 

tmp[11]=208; 

} 

if(buffer[26]==68 && buffer[27]==49)      //d1        
{ 

tmp[11]=209; 

} 
if(buffer[26]==68 && buffer[27]==50)      //d2        
{ 

tmp[11]=210; 

} 
if(buffer[26]==68 && buffer[27]==51)      //d3         
{ 

tmp[11]=211; 

} 
if(buffer[26]==68 && buffer[27]==52)      //d4        
{ 

tmp[11]=212; 

} 
if(buffer[26]==68 && buffer[27]==53)      //d5      
{ 

tmp[11]=213; 

} 
if(buffer[26]==68 && buffer[27]==54)      //d6       
{ 

tmp[11]=214; 

} 
if(buffer[26]==68 && buffer[27]==55)      //d7     
{ 

tmp[11]=215; 

} 
if(buffer[26]==68 && buffer[27]==56)      //d8     
{ 

tmp[11]=216; 

} 
if(buffer[26]==68 && buffer[27]==57)      //d9   
{ 

tmp[11]=217; 

} 

if(buffer[26]==68 && buffer[27]==65)      //da 
{ 

tmp[11]=218; 

} 

if(buffer[26]==68 && buffer[27]==66)      //db 
{ 

tmp[11]=219; 

} 
if(buffer[26]==68 && buffer[27]==67)      //dc 
{ 

tmp[11]=220; 

} 
if(buffer[26]==68 && buffer[27]==68)      //dd 
{ 

tmp[11]=221; 

} 
if(buffer[26]==68 && buffer[27]==69)      //de  
{ 
 
tmp[11]=222; 

} 
if(buffer[26]==68 && buffer[27]==70)      //df  
{ 

tmp[11]=223; 

} 
//------------ 



if(buffer[26]==69 && buffer[27]==48)      //e0       
{ 

tmp[11]=224; 

} 

if(buffer[26]==69 && buffer[27]==49)      //e1        
{ 

tmp[11]=225; 

} 
if(buffer[26]==69 && buffer[27]==50)      //e2        
{ 

tmp[11]=226; 

} 
if(buffer[26]==69 && buffer[27]==51)      //e3         
{ 

tmp[11]=227; 

} 
if(buffer[26]==69 && buffer[27]==52)      //e4        
{ 

tmp[11]=228; 

} 
if(buffer[26]==69 && buffer[27]==53)      //e5      
{ 

tmp[11]=229; 

} 
if(buffer[26]==69 && buffer[27]==54)      //e6       
{ 

tmp[11]=230; 

} 
if(buffer[26]==69 && buffer[27]==55)      //e7     
{ 

tmp[11]=231; 

} 
if(buffer[26]==69 && buffer[27]==56)      //e8     
{ 

tmp[11]=232; 

} 
if(buffer[26]==69 && buffer[27]==57)      //e9   
{ 

tmp[11]=233; 

} 

if(buffer[26]==69 && buffer[27]==65)      //ea 
{ 

tmp[11]=234; 

} 

if(buffer[26]==69 && buffer[27]==66)      //eb 
{ 

tmp[11]=235; 

} 
if(buffer[26]==69 && buffer[27]==67)      //ec 
{ 

tmp[11]=236; 

} 
if(buffer[26]==69 && buffer[27]==68)      //ed 
{ 

tmp[11]=237; 

} 
if(buffer[26]==69 && buffer[27]==69)      //ee  
{ 

tmp[11]=238; 

} 
if(buffer[26]==69 && buffer[27]==70)      //ef  
{ 

tmp[11]=239; 

} 
//------------ 

if(buffer[26]==70 && buffer[27]==48)      //f0       
{ 

tmp[11]=240; 

} 

if(buffer[26]==70 && buffer[27]==49)      //f1        
{ 

tmp[11]=241; 

} 
if(buffer[26]==70 && buffer[27]==50)      //f2        
{ 

tmp[11]=242; 

} 
if(buffer[26]==70 && buffer[27]==51)      //f3         
{ 

tmp[11]=243; 

} 
if(buffer[26]==70 && buffer[27]==52)      //f4        
{ 

tmp[11]=244; 

} 
if(buffer[26]==70 && buffer[27]==53)      //f5      
{ 

tmp[11]=245; 

} 
if(buffer[26]==70 && buffer[27]==54)      //f6       
{ 

tmp[11]=246; 
 
} 
if(buffer[26]==70 && buffer[27]==55)      //f7     
{ 

tmp[11]=247; 

} 
if(buffer[26]==70 && buffer[27]==56)      //f8     
{ 

tmp[11]=248; 

} 
if(buffer[26]==70 && buffer[27]==57)      //f9   
{ 

tmp[11]=249; 

} 

if(buffer[26]==70 && buffer[27]==65)      //fa 
{ 

tmp[11]=250; 

} 

if(buffer[26]==70 && buffer[27]==66)      //fb 
{ 

tmp[11]=251; 

} 
if(buffer[26]==70 && buffer[27]==67)      //fc 
{ 

tmp[11]=252; 

} 
if(buffer[26]==70 && buffer[27]==68)      //fd 
{ 

tmp[11]=253; 

} 
if(buffer[26]==70 && buffer[27]==69)      //fe  
{ 

tmp[11]=254; 

} 
if(buffer[26]==70 && buffer[27]==70)      //ff  
{ 

tmp[11]=255; 

} 

//----------------------- end of tmp[11]--------------------------- 


//----------------------- start of tmp[12]--------------------------- 


if(buffer[28]==48 && buffer[29]==48)      //00        
{ 

tmp[12]=0; 

} 

if(buffer[28]==48 && buffer[29]==49)      //01        
{ 

tmp[12]=1; 

} 
if(buffer[28]==48 && buffer[29]==50)      //02        
{ 

tmp[12]=2; 

} 
if(buffer[28]==48 && buffer[29]==51)      //03         
{ 

tmp[12]=3; 

} 
if(buffer[28]==48 && buffer[29]==52)      //04        
{ 

tmp[12]=4; 

} 
if(buffer[28]==48 && buffer[29]==53)      //05      
{ 

tmp[12]=5; 

} 


if(buffer[28]==48 && buffer[29]==54)      //06       
{ 

tmp[12]=6; 

} 
if(buffer[28]==48 && buffer[29]==55)      //07     
{ 

tmp[12]=7; 

} 
if(buffer[28]==48 && buffer[29]==56)      //08     
{ 

tmp[12]=8; 

} 
if(buffer[28]==48 && buffer[29]==57)      //09   
{ 

tmp[12]=9; 

} 

if(buffer[28]==48 && buffer[29]==65)      //0a 
{ 

tmp[12]=10; 

} 

if(buffer[28]==48 && buffer[29]==66)      //0b 
{ 

tmp[12]=11; 

} 
if(buffer[28]==48 && buffer[29]==67)      //0c 
{ 

tmp[12]=12; 

} 
if(buffer[28]==48 && buffer[29]==68)      //0d 
{ 

tmp[12]=13; 

} 
if(buffer[28]==48 && buffer[29]==69)      //0e  
{ 
 
tmp[12]=14; 

} 
if(buffer[28]==48 && buffer[29]==70)      //0f  
{ 

tmp[12]=15; 

} 

//----------- 

if(buffer[28]==49 && buffer[29]==48)      //        10 
{ 

tmp[12]=16; 

} 
if(buffer[28]==49 && buffer[29]==49)      //         11 
{ 

tmp[12]=17; 

} 
if(buffer[28]==49 && buffer[29]==50)      //         12 
{ 

tmp[12]=18; 

} 
if(buffer[28]==49 && buffer[29]==51)      //         13 
{ 

tmp[12]=19; 

} 
if(buffer[28]==49 && buffer[29]==52)      //         14 
{ 

tmp[12]=20; 

} 
if(buffer[28]==49 && buffer[29]==53)      //         15 
{ 

tmp[12]=21; 

} 
if(buffer[28]==49 && buffer[29]==54)      //         16 
{ 

tmp[12]=22; 

} 
if(buffer[28]==49 && buffer[29]==55)      //         17 
{ 

tmp[12]=23; 

} 
if(buffer[28]==49 && buffer[29]==56)      //         18 
{ 

tmp[12]=24; 

} 
if(buffer[28]==49 && buffer[29]==57)      //         19 
{ 

tmp[12]=25; 

} 

if(buffer[28]==49 && buffer[29]==65)      //         1a 
{ 

tmp[12]=26; 

} 
if(buffer[28]==49 && buffer[29]==66)      //         1b 
{ 

tmp[12]=27; 

} 
if(buffer[28]==49 && buffer[29]==67)      //         1c 
{ 

tmp[12]=28; 

} 
if(buffer[28]==49 && buffer[29]==68)      //         1d 
{ 

tmp[12]=29; 

} 
if(buffer[28]==49 && buffer[29]==69)      //         1e 
{ 

tmp[12]=30; 

} 
if(buffer[28]==49 && buffer[29]==70)      //         1f 
{ 

tmp[12]=31; 

} 


//--------------- 


if(buffer[28]==50 && buffer[29]==48)      //         20 
{ 

tmp[12]=32; 

} 

if(buffer[28]==50 && buffer[29]==49)      //         21 
{ 

tmp[12]=33; 

} 
if(buffer[28]==50 && buffer[29]==50)      //         22 
{ 

tmp[12]=34; 

} 
if(buffer[28]==50 && buffer[29]==51)      //         23 
{ 

tmp[12]=35; 

} 
if(buffer[28]==50 && buffer[29]==52)      //         24 
{ 

tmp[12]=36; 

} 
if(buffer[28]==50 && buffer[29]==53)      //         25 
{ 

tmp[12]=37; 

} 
if(buffer[28]==50 && buffer[29]==54)      //         26 
{ 

tmp[12]=38; 
 
} 
if(buffer[28]==50 && buffer[29]==55)      //         27 
{ 

tmp[12]=39; 

} 
if(buffer[28]==50 && buffer[29]==56)      //         28 
{ 

tmp[12]=40; 

} 
if(buffer[28]==50 && buffer[29]==57)      //         29 
{ 

tmp[12]=41; 

} 
if(buffer[28]==50 && buffer[29]==65)      //         2a 
{ 

tmp[12]=42; 

} 
if(buffer[28]==50 && buffer[29]==66)      //         2b 
{ 

tmp[12]=43; 

} 
if(buffer[28]==50 && buffer[29]==67)      //         2c 
{ 

tmp[12]=44; 

} 

if(buffer[28]==50 && buffer[29]==68)      //       2d  
{ 

tmp[12]=45; 

} 
if(buffer[28]==50 && buffer[29]==69)      //         2e 
{ 

tmp[12]=46; 

} 
if(buffer[28]==50 && buffer[29]==70)      //         2f 
{ 

tmp[12]=47; 

} 

//------------- 


if(buffer[28]==51 && buffer[29]==48)      // 30        
{ 

tmp[12]=48; 

} 

if(buffer[28]==51 && buffer[29]==49)      // 31        
{ 

tmp[12]=49; 

} 
if(buffer[28]==51 && buffer[29]==50)      // 32        
{ 

tmp[12]=50; 

} 
if(buffer[28]==51 && buffer[29]==51)      //33         
{ 

tmp[12]=51; 

} 
if(buffer[28]==51 && buffer[29]==52)      //34        
{ 

tmp[12]=52; 

} 
if(buffer[28]==51 && buffer[29]==53)      //35      
{ 

tmp[12]=53; 

} 
if(buffer[28]==51 && buffer[29]==54)      //36       
{ 
//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 
 
} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 
 
tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 
 
} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 
 
} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 
 
} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 
 
} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 
 
if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 
 
tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 
 
tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 
 
if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 
 
tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 
} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 
 
tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 
 
tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 
 
} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 
 
} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 
 
tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 
 
} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 

tmp[12]=54; 

} 
if(buffer[28]==51 && buffer[29]==55)      //37     
{ 

tmp[12]=55; 

} 
if(buffer[28]==51 && buffer[29]==56)      //38     
{ 

tmp[12]=56; 

} 
if(buffer[28]==51 && buffer[29]==57)      //39   
{ 

tmp[12]=57; 

} 

if(buffer[28]==51 && buffer[29]==65)      //3a 
{ 

tmp[12]=58; 

} 

if(buffer[28]==51 && buffer[29]==66)      //3b 
{ 

tmp[12]=59; 

} 
if(buffer[28]==51 && buffer[29]==67)      //3c 
{ 

tmp[12]=60; 

} 
if(buffer[28]==51 && buffer[29]==68)      //3d 
{ 

tmp[12]=61; 

} 
if(buffer[28]==51 && buffer[29]==69)      //3e  
{ 

tmp[12]=62; 

} 
if(buffer[28]==51 && buffer[29]==70)      //3f  
{ 

tmp[12]=63; 

} 

//------------ 


if(buffer[28]==52 && buffer[29]==48)      // 40       
{ 

tmp[12]=64; 

} 

if(buffer[28]==52 && buffer[29]==49)      // 41        
{ 

tmp[12]=65; 

} 
if(buffer[28]==52 && buffer[29]==50)      // 42        
{ 

tmp[12]=66; 

} 
if(buffer[28]==52 && buffer[29]==51)      //43         
{ 

tmp[12]=67; 

} 
if(buffer[28]==52 && buffer[29]==52)      //44        
{ 

tmp[12]=68; 

} 
if(buffer[28]==52 && buffer[29]==53)      //45      
{ 

tmp[12]=69; 

} 

if(buffer[28]==52 && buffer[29]==54)      //46       
{ 

tmp[12]=70; 

} 
if(buffer[28]==52 && buffer[29]==55)      //47     
{ 

tmp[12]=71; 

} 
if(buffer[28]==52 && buffer[29]==56)      //48     
{ 

tmp[12]=72; 

} 
if(buffer[28]==52 && buffer[29]==57)      //49   
{ 

tmp[12]=73; 

} 

if(buffer[28]==52 && buffer[29]==65)      //4a 
{ 

tmp[12]=74; 

} 

if(buffer[28]==52 && buffer[29]==66)      //4b 
{ 

tmp[12]=75; 

} 
if(buffer[28]==52 && buffer[29]==67)      //4c 
{ 

tmp[12]=76; 

} 
if(buffer[28]==52 && buffer[29]==68)      //4d 
{ 

tmp[12]=77; 

} 
if(buffer[28]==52 && buffer[29]==69)      //4e  
{ 

tmp[12]=78; 

} 
if(buffer[28]==52 && buffer[29]==70)      //4f  
{ 

tmp[12]=79; 

} 
//------------ 




if(buffer[28]==53 && buffer[29]==48)      //50       
{ 

tmp[12]=80; 

} 

if(buffer[28]==53 && buffer[29]==49)      //51        
{ 

tmp[12]=81; 

} 
if(buffer[28]==53 && buffer[29]==50)      //52        
{ 

tmp[12]=82; 

} 
if(buffer[28]==53 && buffer[29]==51)      //53         
{ 

tmp[12]=83; 

} 
if(buffer[28]==53 && buffer[29]==52)      //54        
{ 

tmp[12]=84; 
 
} 
if(buffer[28]==53 && buffer[29]==53)      //55      
{ 

tmp[12]=85; 

} 
if(buffer[28]==53 && buffer[29]==54)      //56       
{ 

tmp[12]=86; 

} 
if(buffer[28]==53 && buffer[29]==55)      //57     
{ 

tmp[12]=87; 

} 
if(buffer[28]==53 && buffer[29]==56)      //58     
{ 

tmp[12]=88; 

} 
if(buffer[28]==53 && buffer[29]==57)      //59   
{ 

tmp[12]=89; 

} 

if(buffer[28]==53 && buffer[29]==65)      //5a 
{ 

tmp[12]=90; 

} 

if(buffer[28]==53 && buffer[29]==66)      //5b 
{ 

tmp[12]=91; 

} 
if(buffer[28]==53 && buffer[29]==67)      //5c 
{ 

tmp[12]=92; 

} 
if(buffer[28]==53 && buffer[29]==68)      //5d 
{ 

tmp[12]=93; 

} 
if(buffer[28]==53 && buffer[29]==69)      //5e  
{ 

tmp[12]=94; 

} 
if(buffer[28]==53 && buffer[29]==70)      //5f  
{ 

tmp[12]=95; 

} 
//------------ 




if(buffer[28]==54 && buffer[29]==48)      //60       
{ 

tmp[12]=96; 

} 

if(buffer[28]==54 && buffer[29]==49)      //61        
{ 

tmp[12]=97; 

} 
if(buffer[28]==54 && buffer[29]==50)      //62        
{ 

tmp[12]=98; 

} 
if(buffer[28]==54 && buffer[29]==51)      //63         
{ 

tmp[12]=99; 

} 
if(buffer[28]==54 && buffer[29]==52)      //64        
{ 

tmp[12]=100; 
 
} 
if(buffer[28]==54 && buffer[29]==53)      //65      
{ 

tmp[12]=101; 

} 
if(buffer[28]==54 && buffer[29]==54)      //66       
{ 

tmp[12]=102; 

} 
if(buffer[28]==54 && buffer[29]==55)      //67     
{ 

tmp[12]=103; 

} 
if(buffer[28]==54 && buffer[29]==56)      //68     
{ 

tmp[12]=104; 

} 
if(buffer[28]==54 && buffer[29]==57)      //69   
{ 

tmp[12]=105; 

} 

if(buffer[28]==54 && buffer[29]==65)      //6a 
{ 

tmp[12]=106; 

} 

if(buffer[28]==54 && buffer[29]==66)      //6b 
{ 

tmp[12]=107; 

} 
if(buffer[28]==54 && buffer[29]==67)      //6c 
{ 

tmp[12]=108; 

} 
if(buffer[28]==54 && buffer[29]==68)      //6d 
{ 

tmp[12]=109; 

} 
if(buffer[28]==54 && buffer[29]==69)      //6e  
{ 

tmp[12]=110; 

} 
if(buffer[28]==54 && buffer[29]==70)      //6f  
{ 

tmp[12]=111; 

} 
//------------ 




if(buffer[28]==55 && buffer[29]==48)      //70       
{ 

tmp[12]=112; 

} 

if(buffer[28]==55 && buffer[29]==49)      //71        
{ 

tmp[12]=113; 

} 
if(buffer[28]==55 && buffer[29]==50)      //72        
{ 

tmp[12]=114; 

} 
if(buffer[28]==55 && buffer[29]==51)      //73         
{ 

tmp[12]=115; 

} 
if(buffer[28]==55 && buffer[29]==52)      //74        
{ 

tmp[12]=116; 
 
} 
if(buffer[28]==55 && buffer[29]==53)      //75      
{ 

tmp[12]=117; 

} 
if(buffer[28]==55 && buffer[29]==54)      //76       
{ 

tmp[12]=118; 

} 
if(buffer[28]==55 && buffer[29]==55)      //77     
{ 

tmp[12]=119; 

} 
if(buffer[28]==55 && buffer[29]==56)      //78     
{ 

tmp[12]=120; 

} 
if(buffer[28]==55 && buffer[29]==57)      //79   
{ 

tmp[12]=121; 

} 

if(buffer[28]==55 && buffer[29]==65)      //7a 
{ 

tmp[12]=122; 

} 

if(buffer[28]==55 && buffer[29]==66)      //7b 
{ 

tmp[12]=123; 

} 
if(buffer[28]==55 && buffer[29]==67)      //7c 
{ 

tmp[12]=124; 

} 
if(buffer[28]==55 && buffer[29]==68)      //7d 
{ 

tmp[12]=125; 

} 
if(buffer[28]==55 && buffer[29]==69)      //7e  
{ 

tmp[12]=126; 

} 
if(buffer[28]==55 && buffer[29]==70)      //7f  
{ 

tmp[12]=127; 

} 

//------------ 

if(buffer[28]==56 && buffer[29]==48)      //80       
{ 

tmp[12]=128; 

} 

if(buffer[28]==56 && buffer[29]==49)      //81        
{ 

tmp[12]=129; 

} 
if(buffer[28]==56 && buffer[29]==50)      //82        
{ 

tmp[12]=130; 

} 
if(buffer[28]==56 && buffer[29]==51)      //83         
{ 

tmp[12]=131; 

} 
if(buffer[28]==56 && buffer[29]==52)      //84        
{ 

tmp[12]=132; 

} 
if(buffer[28]==56 && buffer[29]==53)      //85      
{ 

tmp[12]=133; 

} 
if(buffer[28]==56 && buffer[29]==54)      //86       
{ 

tmp[12]=134; 

} 
if(buffer[28]==56 && buffer[29]==55)      //87     
{ 

tmp[12]=135; 

} 
if(buffer[28]==56 && buffer[29]==56)      //88     
{ 

tmp[12]=136; 

} 
if(buffer[28]==56 && buffer[29]==57)      //89   
{ 

tmp[12]=137; 

} 

if(buffer[28]==56 && buffer[29]==65)      //8a 
{ 

tmp[12]=138; 

} 

if(buffer[28]==56 && buffer[29]==66)      //8b 
{ 

tmp[12]=139; 

} 
if(buffer[28]==56 && buffer[29]==67)      //8c 
{ 

tmp[12]=140; 

} 
if(buffer[28]==56 && buffer[29]==68)      //8d 
{ 
 
tmp[12]=141; 

} 
if(buffer[28]==56 && buffer[29]==69)      //8e  
{ 

tmp[12]=142; 

} 
if(buffer[28]==56 && buffer[29]==70)      //8f  
{ 

tmp[12]=143; 

} 
//------------ 


if(buffer[28]==57 && buffer[29]==48)      //90       
{ 

tmp[12]=144; 

} 

if(buffer[28]==57 && buffer[29]==49)      //91        
{ 

tmp[12]=145; 

} 
if(buffer[28]==57 && buffer[29]==50)      //92        
{ 

tmp[12]=146; 

} 
if(buffer[28]==57 && buffer[29]==51)      //93         
{ 

tmp[12]=147; 

} 
if(buffer[28]==57 && buffer[29]==52)      //94        
{ 

tmp[12]=148; 

} 
if(buffer[28]==57 && buffer[29]==53)      //95      
{ 
 
tmp[12]=149; 

} 
if(buffer[28]==57 && buffer[29]==54)      //96       
{ 

tmp[12]=150; 

} 
if(buffer[28]==57 && buffer[29]==55)      //97     
{ 

tmp[12]=151; 

} 
if(buffer[28]==57 && buffer[29]==56)      //98     
{ 

tmp[12]=152; 

} 
if(buffer[28]==57 && buffer[29]==57)      //99   
{ 

tmp[12]=153; 

} 

if(buffer[28]==57 && buffer[29]==65)      //9a 
{ 

tmp[12]=154; 

} 

if(buffer[28]==57 && buffer[29]==66)      //9b 
{ 

tmp[12]=155; 

} 
if(buffer[28]==57 && buffer[29]==67)      //9c 
{ 

tmp[12]=156; 

} 
if(buffer[28]==57 && buffer[29]==68)      //9d 
{ 

tmp[12]=157; 
 
} 
if(buffer[28]==57 && buffer[29]==69)      //9e  
{ 

tmp[12]=158; 

} 
if(buffer[28]==57 && buffer[29]==70)      //9f  
{ 

tmp[12]=159; 

} 
//------------ 


if(buffer[28]==65 && buffer[29]==48)      //a0       
{ 

tmp[12]=160; 

} 

if(buffer[28]==65 && buffer[29]==49)      //a1        
{ 

tmp[12]=161; 

} 
if(buffer[28]==65 && buffer[29]==50)      //a2        
{ 

tmp[12]=162; 

} 
if(buffer[28]==65 && buffer[29]==51)      //a3         
{ 

tmp[12]=163; 

} 
if(buffer[28]==65 && buffer[29]==52)      //a4        
{ 

tmp[12]=164; 

} 
if(buffer[28]==65 && buffer[29]==53)      //a5      
{ 

tmp[12]=165; 
 
} 
if(buffer[28]==65 && buffer[29]==54)      //a6       
{ 

tmp[12]=166; 

} 
if(buffer[28]==65 && buffer[29]==55)      //a7     
{ 

tmp[12]=167; 

} 
if(buffer[28]==65 && buffer[29]==56)      //a8     
{ 

tmp[12]=168; 

} 
if(buffer[28]==65 && buffer[29]==57)      //a9   
{ 

tmp[12]=169; 

} 

if(buffer[28]==65 && buffer[29]==65)      //aa 
{ 

tmp[12]=170; 

} 

if(buffer[28]==65 && buffer[29]==66)      //ab 
{ 

tmp[12]=171; 

} 
if(buffer[28]==65 && buffer[29]==67)      //ac 
{ 

tmp[12]=172; 

} 
if(buffer[28]==65 && buffer[29]==68)      //ad 
{ 

tmp[12]=173; 

} 
if(buffer[28]==65 && buffer[29]==69)      //ae  
{ 

tmp[12]=174; 

} 
if(buffer[28]==65 && buffer[29]==70)      //af  
{ 

tmp[12]=175; 

} 
//------------ 


if(buffer[28]==66 && buffer[29]==48)      //b0       
{ 

tmp[12]=176; 

} 

if(buffer[28]==66 && buffer[29]==49)      //b1        
{ 

tmp[12]=177; 

} 
if(buffer[28]==66 && buffer[29]==50)      //b2        
{ 

tmp[12]=178; 

} 
if(buffer[28]==66 && buffer[29]==51)      //b3         
{ 

tmp[12]=179; 

} 
if(buffer[28]==66 && buffer[29]==52)      //b4        
{ 

tmp[12]=180; 

} 
if(buffer[28]==66 && buffer[29]==53)      //b5      
{ 

tmp[12]=181; 

} 
if(buffer[28]==66 && buffer[29]==54)      //b6       
{ 

tmp[12]=182; 

} 
if(buffer[28]==66 && buffer[29]==55)      //b7     
{ 

tmp[12]=183; 

} 
if(buffer[28]==66 && buffer[29]==56)      //b8     
{ 

tmp[12]=184; 

} 
if(buffer[28]==66 && buffer[29]==57)      //b9   
{ 

tmp[12]=185; 

} 

if(buffer[28]==66 && buffer[29]==65)      //ba 
{ 

tmp[12]=186; 

} 

if(buffer[28]==66 && buffer[29]==66)      //bb 
{ 

tmp[12]=187; 

} 
if(buffer[28]==66 && buffer[29]==67)      //bc 
{ 

tmp[12]=188; 

} 
if(buffer[28]==66 && buffer[29]==68)      //bd 
{ 

tmp[12]=189; 

} 
if(buffer[28]==66 && buffer[29]==69)      //be  
{ 
 
tmp[12]=190; 

} 
if(buffer[28]==66 && buffer[29]==70)      //bf  
{ 

tmp[12]=191; 

} 
//------------ 



if(buffer[28]==67 && buffer[29]==48)      //c0       
{ 

tmp[12]=192; 

} 

if(buffer[28]==67 && buffer[29]==49)      //c1        
{ 

tmp[12]=193; 

} 
if(buffer[28]==67 && buffer[29]==50)      //c2        
{ 

tmp[12]=194; 

} 
if(buffer[28]==67 && buffer[29]==51)      //c3         
{ 

tmp[12]=195; 

} 
if(buffer[28]==67 && buffer[29]==52)      //c4        
{ 

tmp[12]=196; 

} 
if(buffer[28]==67 && buffer[29]==53)      //c5      
{ 

tmp[12]=197; 

} 
if(buffer[28]==67 && buffer[29]==54)      //c6       
{ 

tmp[12]=198; 

} 
if(buffer[28]==67 && buffer[29]==55)      //c7     
{ 

tmp[12]=199; 

} 
if(buffer[28]==67 && buffer[29]==56)      //c8     
{ 

tmp[12]=200; 

} 
if(buffer[28]==67 && buffer[29]==57)      //c9   
{ 

tmp[12]=201; 

} 

if(buffer[28]==67 && buffer[29]==65)      //ca 
{ 

tmp[12]=202; 

} 

if(buffer[28]==67 && buffer[29]==66)      //cb 
{ 

tmp[12]=203; 

} 
if(buffer[28]==67 && buffer[29]==67)      //cc 
{ 

tmp[12]=204; 

} 
if(buffer[28]==67 && buffer[29]==68)      //cd 
{ 

tmp[12]=205; 

} 
if(buffer[28]==67 && buffer[29]==69)      //ce  
{ 

tmp[12]=206; 

} 
if(buffer[28]==67 && buffer[29]==70)      //cf  
{ 

tmp[12]=207; 

} 
//------------ 


if(buffer[28]==68 && buffer[29]==48)      //d0       
{ 

tmp[12]=208; 

} 

if(buffer[28]==68 && buffer[29]==49)      //d1        
{ 

tmp[12]=209; 

} 
if(buffer[28]==68 && buffer[29]==50)      //d2        
{ 

tmp[12]=210; 

} 
if(buffer[28]==68 && buffer[29]==51)      //d3         
{ 

tmp[12]=211; 

} 
if(buffer[28]==68 && buffer[29]==52)      //d4        
{ 

tmp[12]=212; 

} 
if(buffer[28]==68 && buffer[29]==53)      //d5      
{ 

tmp[12]=213; 

} 
if(buffer[28]==68 && buffer[29]==54)      //d6       
{ 

tmp[12]=214; 

} 
if(buffer[28]==68 && buffer[29]==55)      //d7     
{ 

tmp[12]=215; 

} 
if(buffer[28]==68 && buffer[29]==56)      //d8     
{ 

tmp[12]=216; 

} 
if(buffer[28]==68 && buffer[29]==57)      //d9   
{ 

tmp[12]=217; 

} 

if(buffer[28]==68 && buffer[29]==65)      //da 
{ 

tmp[12]=218; 

} 

if(buffer[28]==68 && buffer[29]==66)      //db 
{ 

tmp[12]=219; 

} 
if(buffer[28]==68 && buffer[29]==67)      //dc 
{ 

tmp[12]=220; 

} 
if(buffer[28]==68 && buffer[29]==68)      //dd 
{ 

tmp[12]=221; 

} 
if(buffer[28]==68 && buffer[29]==69)      //de  
{ 

tmp[12]=222; 

} 
if(buffer[28]==68 && buffer[29]==70)      //df  
{ 

tmp[12]=223; 

} 
//------------ 



if(buffer[28]==69 && buffer[29]==48)      //e0       
{ 

tmp[12]=224; 

} 

if(buffer[28]==69 && buffer[29]==49)      //e1        
{ 

tmp[12]=225; 

} 
if(buffer[28]==69 && buffer[29]==50)      //e2        
{ 

tmp[12]=226; 

} 
if(buffer[28]==69 && buffer[29]==51)      //e3         
{ 

tmp[12]=227; 

} 
if(buffer[28]==69 && buffer[29]==52)      //e4        
{ 

tmp[12]=228; 

} 
if(buffer[28]==69 && buffer[29]==53)      //e5      
{ 

tmp[12]=229; 

} 
if(buffer[28]==69 && buffer[29]==54)      //e6       
{ 

tmp[12]=230; 
 
} 
if(buffer[28]==69 && buffer[29]==55)      //e7     
{ 

tmp[12]=231; 

} 
if(buffer[28]==69 && buffer[29]==56)      //e8     
{ 

tmp[12]=232; 

} 
if(buffer[28]==69 && buffer[29]==57)      //e9   
{ 

tmp[12]=233; 

} 

if(buffer[28]==69 && buffer[29]==65)      //ea 
{ 

tmp[12]=234; 

} 

if(buffer[28]==69 && buffer[29]==66)      //eb 
{ 

tmp[12]=235; 

} 
if(buffer[28]==69 && buffer[29]==67)      //ec 
{ 

tmp[12]=236; 

} 
if(buffer[28]==69 && buffer[29]==68)      //ed 
{ 

tmp[12]=237; 

} 
if(buffer[28]==69 && buffer[29]==69)      //ee  
{ 

tmp[12]=238; 

} 
if(buffer[28]==69 && buffer[29]==70)      //ef  
{ 

tmp[12]=239; 

} 
//------------ 

if(buffer[28]==70 && buffer[29]==48)      //f0       
{ 

tmp[12]=240; 

} 

if(buffer[28]==70 && buffer[29]==49)      //f1        
{ 

tmp[12]=241; 

} 
if(buffer[28]==70 && buffer[29]==50)      //f2        
{ 

tmp[12]=242; 

} 
if(buffer[28]==70 && buffer[29]==51)      //f3         
{ 

tmp[12]=243; 

} 
if(buffer[28]==70 && buffer[29]==52)      //f4        
{ 

tmp[12]=244; 

} 
if(buffer[28]==70 && buffer[29]==53)      //f5      
{ 

tmp[12]=245; 

} 
if(buffer[28]==70 && buffer[29]==54)      //f6       
{ 

tmp[12]=246; 

} 
if(buffer[28]==70 && buffer[29]==55)      //f7     
{ 

tmp[12]=247; 

} 
if(buffer[28]==70 && buffer[29]==56)      //f8     
{ 

tmp[12]=248; 

} 
if(buffer[28]==70 && buffer[29]==57)      //f9   
{ 

tmp[12]=249; 

} 

if(buffer[28]==70 && buffer[29]==65)      //fa 
{ 

tmp[12]=250; 

} 

if(buffer[28]==70 && buffer[29]==66)      //fb 
{ 

tmp[12]=251; 

} 
if(buffer[28]==70 && buffer[29]==67)      //fc 
{ 

tmp[12]=252; 

} 
if(buffer[28]==70 && buffer[29]==68)      //fd 
{ 

tmp[12]=253; 

} 
if(buffer[28]==70 && buffer[29]==69)      //fe  
{ 

tmp[12]=254; 

} 
if(buffer[28]==70 && buffer[29]==70)      //ff  
{ 

tmp[12]=255; 

} 

//----------------------- end of tmp[12]--------------------------- 


//----------------------- start of tmp[13]--------------------------- 


if(buffer[30]==48 && buffer[31]==48)      //00        
{ 

tmp[13]=0; 

} 

if(buffer[30]==48 && buffer[31]==49)      //01        
{ 

tmp[13]=1; 

} 
if(buffer[30]==48 && buffer[31]==50)      //02        
{ 

tmp[13]=2; 

} 
if(buffer[30]==48 && buffer[31]==51)      //03         
{ 

tmp[13]=3; 

} 
if(buffer[30]==48 && buffer[31]==52)      //04        
{ 

tmp[13]=4; 

} 
if(buffer[30]==48 && buffer[31]==53)      //05      
{ 

tmp[13]=5; 

} 


if(buffer[30]==48 && buffer[31]==54)      //06       
{ 

tmp[13]=6; 

} 
if(buffer[30]==48 && buffer[31]==55)      //07     
{ 

tmp[13]=7; 

} 
if(buffer[30]==48 && buffer[31]==56)      //08     
{ 

tmp[13]=8; 

} 
if(buffer[30]==48 && buffer[31]==57)      //09   
{ 

tmp[13]=9; 

} 

if(buffer[30]==48 && buffer[31]==65)      //0a 
{ 

tmp[13]=10; 

} 

if(buffer[30]==48 && buffer[31]==66)      //0b 
{ 

tmp[13]=11; 

} 
if(buffer[30]==48 && buffer[31]==67)      //0c 
{ 

tmp[13]=12; 

} 
if(buffer[30]==48 && buffer[31]==68)      //0d 
{ 

tmp[13]=13; 

} 
if(buffer[30]==48 && buffer[31]==69)      //0e  
{ 

tmp[13]=14; 

} 
if(buffer[30]==48 && buffer[31]==70)      //0f  
{ 

tmp[13]=15; 

} 

//----------- 

if(buffer[30]==49 && buffer[31]==48)      //        10 
{ 

tmp[13]=16; 

} 
if(buffer[30]==49 && buffer[31]==49)      //         11 
{ 

tmp[13]=17; 

} 
if(buffer[30]==49 && buffer[31]==50)      //         12 
{ 

tmp[13]=18; 

} 
if(buffer[30]==49 && buffer[31]==51)      //         13 
{ 

tmp[13]=19; 

} 
if(buffer[30]==49 && buffer[31]==52)      //         14 
{ 

tmp[13]=20; 

} 
if(buffer[30]==49 && buffer[31]==53)      //         15 
{ 

tmp[13]=21; 

} 
if(buffer[30]==49 && buffer[31]==54)      //         16 
{ 

tmp[13]=22; 

} 
if(buffer[30]==49 && buffer[31]==55)      //         17 
{ 

tmp[13]=23; 

} 
if(buffer[30]==49 && buffer[31]==56)      //         18 
{ 

tmp[13]=24; 

} 
if(buffer[30]==49 && buffer[31]==57)      //         19 
{ 

tmp[13]=25; 

} 

if(buffer[30]==49 && buffer[31]==65)      //         1a 
{ 

tmp[13]=26; 

} 
if(buffer[30]==49 && buffer[31]==66)      //         1b 
{ 

tmp[13]=27; 

} 
if(buffer[30]==49 && buffer[31]==67)      //         1c 
{ 

tmp[13]=28; 

} 
if(buffer[30]==49 && buffer[31]==68)      //         1d 
{ 

tmp[13]=29; 

} 
if(buffer[30]==49 && buffer[31]==69)      //         1e 
{ 

tmp[13]=30; 

} 
if(buffer[30]==49 && buffer[31]==70)      //         1f 
{ 

tmp[13]=31; 

} 


//--------------- 


if(buffer[30]==50 && buffer[31]==48)      //         20 
{ 

tmp[13]=32; 

} 

if(buffer[30]==50 && buffer[31]==49)      //         21 
{ 

tmp[13]=33; 

} 
if(buffer[30]==50 && buffer[31]==50)      //         22 
{ 

tmp[13]=34; 

} 
if(buffer[30]==50 && buffer[31]==51)      //         23 
{ 

tmp[13]=35; 

} 
if(buffer[30]==50 && buffer[31]==52)      //         24 
{ 

tmp[13]=36; 

} 
if(buffer[30]==50 && buffer[31]==53)      //         25 
{ 

tmp[13]=37; 

} 
if(buffer[30]==50 && buffer[31]==54)      //         26 
{ 

tmp[13]=38; 

} 
if(buffer[30]==50 && buffer[31]==55)      //         27 
{ 

tmp[13]=39; 

} 
if(buffer[30]==50 && buffer[31]==56)      //         28 
{ 

tmp[13]=40; 

} 
if(buffer[30]==50 && buffer[31]==57)      //         29 
{ 

tmp[13]=41; 

} 
if(buffer[30]==50 && buffer[31]==65)      //         2a 
{ 

tmp[13]=42; 

} 
if(buffer[30]==50 && buffer[31]==66)      //         2b 
{ 

tmp[13]=43; 

} 
if(buffer[30]==50 && buffer[31]==67)      //         2c 
{ 

tmp[13]=44; 

} 

if(buffer[30]==50 && buffer[31]==68)      //       2d  
{ 

tmp[13]=45; 

} 
if(buffer[30]==50 && buffer[31]==69)      //         2e 
{ 

tmp[13]=46; 

} 
if(buffer[30]==50 && buffer[31]==70)      //         2f 
{ 

tmp[13]=47; 
 
} 

//------------- 


if(buffer[30]==51 && buffer[31]==48)      // 30        
{ 

tmp[13]=48; 

} 

if(buffer[30]==51 && buffer[31]==49)      // 31        
{ 

tmp[13]=49; 

} 
if(buffer[30]==51 && buffer[31]==50)      // 32        
{ 

tmp[13]=50; 

} 
if(buffer[30]==51 && buffer[31]==51)      //33         
{ 

tmp[13]=51; 

} 
if(buffer[30]==51 && buffer[31]==52)      //34        
{ 

tmp[13]=52; 

} 
if(buffer[30]==51 && buffer[31]==53)      //35      
{ 

tmp[13]=53; 

} 
if(buffer[30]==51 && buffer[31]==54)      //36       
{ 
//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 
 
} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 
 
} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 
 
tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 
 
} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 
 
} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 
 
} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 
 
} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 
 
} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 
 
tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 
 
if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 
 
} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 
 
tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 
 
if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 
 
tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 
} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 
 
} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 
 
tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 
 
} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 
 
tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 
 
} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 
 
} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 
 
tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 
 
} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 
 
tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 
 
} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 
 
tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 
 
} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 
 
} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 
 
tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 
 
tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 
 
} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 
 
} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 
 
tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 
 
} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 

tmp[13]=54; 

} 
if(buffer[30]==51 && buffer[31]==55)      //37     
{ 

tmp[13]=55; 

} 
if(buffer[30]==51 && buffer[31]==56)      //38     
{ 

tmp[13]=56; 

} 
if(buffer[30]==51 && buffer[31]==57)      //39   
{ 

tmp[13]=57; 

} 

if(buffer[30]==51 && buffer[31]==65)      //3a 
{ 

tmp[13]=58; 

} 

if(buffer[30]==51 && buffer[31]==66)      //3b 
{ 

tmp[13]=59; 

} 
if(buffer[30]==51 && buffer[31]==67)      //3c 
{ 

tmp[13]=60; 

} 
if(buffer[30]==51 && buffer[31]==68)      //3d 
{ 

tmp[13]=61; 

} 
if(buffer[30]==51 && buffer[31]==69)      //3e  
{ 

tmp[13]=62; 

} 
if(buffer[30]==51 && buffer[31]==70)      //3f  
{ 

tmp[13]=63; 

} 

//------------ 


if(buffer[30]==52 && buffer[31]==48)      // 40       
{ 

tmp[13]=64; 

} 

if(buffer[30]==52 && buffer[31]==49)      // 41        
{ 

tmp[13]=65; 

} 
if(buffer[30]==52 && buffer[31]==50)      // 42        
{ 

tmp[13]=66; 

} 
if(buffer[30]==52 && buffer[31]==51)      //43         
{ 

tmp[13]=67; 

} 
if(buffer[30]==52 && buffer[31]==52)      //44        
{ 

tmp[13]=68; 

} 
if(buffer[30]==52 && buffer[31]==53)      //45      
{ 
 
tmp[13]=69; 

} 

if(buffer[30]==52 && buffer[31]==54)      //46       
{ 

tmp[13]=70; 

} 
if(buffer[30]==52 && buffer[31]==55)      //47     
{ 

tmp[13]=71; 

} 
if(buffer[30]==52 && buffer[31]==56)      //48     
{ 

tmp[13]=72; 

} 
if(buffer[30]==52 && buffer[31]==57)      //49   
{ 

tmp[13]=73; 

} 

if(buffer[30]==52 && buffer[31]==65)      //4a 
{ 

tmp[13]=74; 

} 

if(buffer[30]==52 && buffer[31]==66)      //4b 
{ 

tmp[13]=75; 

} 
if(buffer[30]==52 && buffer[31]==67)      //4c 
{ 

tmp[13]=76; 

} 
if(buffer[30]==52 && buffer[31]==68)      //4d 
{ 

tmp[13]=77; 

} 
if(buffer[30]==52 && buffer[31]==69)      //4e  
{ 

tmp[13]=78; 

} 
if(buffer[30]==52 && buffer[31]==70)      //4f  
{ 

tmp[13]=79; 

} 
//------------ 




if(buffer[30]==53 && buffer[31]==48)      //50       
{ 

tmp[13]=80; 

} 

if(buffer[30]==53 && buffer[31]==49)      //51        
{ 

tmp[13]=81; 

} 
if(buffer[30]==53 && buffer[31]==50)      //52        
{ 

tmp[13]=82; 

} 
if(buffer[30]==53 && buffer[31]==51)      //53         
{ 

tmp[13]=83; 

} 
if(buffer[30]==53 && buffer[31]==52)      //54        
{ 

tmp[13]=84; 

} 
if(buffer[30]==53 && buffer[31]==53)      //55      
{ 

tmp[13]=85; 

} 
if(buffer[30]==53 && buffer[31]==54)      //56       
{ 

tmp[13]=86; 

} 
if(buffer[30]==53 && buffer[31]==55)      //57     
{ 

tmp[13]=87; 

} 
if(buffer[30]==53 && buffer[31]==56)      //58     
{ 

tmp[13]=88; 

} 
if(buffer[30]==53 && buffer[31]==57)      //59   
{ 

tmp[13]=89; 

} 

if(buffer[30]==53 && buffer[31]==65)      //5a 
{ 

tmp[13]=90; 

} 

if(buffer[30]==53 && buffer[31]==66)      //5b 
{ 

tmp[13]=91; 

} 
if(buffer[30]==53 && buffer[31]==67)      //5c 
{ 

tmp[13]=92; 

} 
if(buffer[30]==53 && buffer[31]==68)      //5d 
{ 

tmp[13]=93; 

} 
if(buffer[30]==53 && buffer[31]==69)      //5e  
{ 

tmp[13]=94; 

} 
if(buffer[30]==53 && buffer[31]==70)      //5f  
{ 

tmp[13]=95; 

} 
//------------ 




if(buffer[30]==54 && buffer[31]==48)      //60       
{ 

tmp[13]=96; 

} 

if(buffer[30]==54 && buffer[31]==49)      //61        
{ 

tmp[13]=97; 

} 
if(buffer[30]==54 && buffer[31]==50)      //62        
{ 

tmp[13]=98; 

} 
if(buffer[30]==54 && buffer[31]==51)      //63         
{ 

tmp[13]=99; 

} 
if(buffer[30]==54 && buffer[31]==52)      //64        
{ 

tmp[13]=100; 

} 
if(buffer[30]==54 && buffer[31]==53)      //65      
{ 

tmp[13]=101; 

} 
if(buffer[30]==54 && buffer[31]==54)      //66       
{ 

tmp[13]=102; 

} 
if(buffer[30]==54 && buffer[31]==55)      //67     
{ 

tmp[13]=103; 

} 
if(buffer[30]==54 && buffer[31]==56)      //68     
{ 

tmp[13]=104; 

} 
if(buffer[30]==54 && buffer[31]==57)      //69   
{ 

tmp[13]=105; 

} 

if(buffer[30]==54 && buffer[31]==65)      //6a 
{ 

tmp[13]=106; 

} 

if(buffer[30]==54 && buffer[31]==66)      //6b 
{ 

tmp[13]=107; 

} 
if(buffer[30]==54 && buffer[31]==67)      //6c 
{ 

tmp[13]=108; 

} 
if(buffer[30]==54 && buffer[31]==68)      //6d 
{ 

tmp[13]=109; 

} 
if(buffer[30]==54 && buffer[31]==69)      //6e  
{ 

tmp[13]=110; 

} 
if(buffer[30]==54 && buffer[31]==70)      //6f  
{ 

tmp[13]=111; 

} 
//------------ 




if(buffer[30]==55 && buffer[31]==48)      //70       
{ 

tmp[13]=112; 

} 

if(buffer[30]==55 && buffer[31]==49)      //71        
{ 

tmp[13]=113; 

} 
if(buffer[30]==55 && buffer[31]==50)      //72        
{ 

tmp[13]=114; 

} 
if(buffer[30]==55 && buffer[31]==51)      //73         
{ 

tmp[13]=115; 

} 
if(buffer[30]==55 && buffer[31]==52)      //74        
{ 

tmp[13]=116; 

} 
if(buffer[30]==55 && buffer[31]==53)      //75      
{ 

tmp[13]=117; 

} 
if(buffer[30]==55 && buffer[31]==54)      //76       
{ 

tmp[13]=118; 

} 
if(buffer[30]==55 && buffer[31]==55)      //77     
{ 

tmp[13]=119; 

} 
if(buffer[30]==55 && buffer[31]==56)      //78     
{ 

tmp[13]=120; 

} 
if(buffer[30]==55 && buffer[31]==57)      //79   
{ 

tmp[13]=121; 

} 

if(buffer[30]==55 && buffer[31]==65)      //7a 
{ 

tmp[13]=122; 

} 

if(buffer[30]==55 && buffer[31]==66)      //7b 
{ 

tmp[13]=123; 

} 
if(buffer[30]==55 && buffer[31]==67)      //7c 
{ 

tmp[13]=124; 

} 
if(buffer[30]==55 && buffer[31]==68)      //7d 
{ 

tmp[13]=125; 

} 
if(buffer[30]==55 && buffer[31]==69)      //7e  
{ 

tmp[13]=126; 

} 
if(buffer[30]==55 && buffer[31]==70)      //7f  
{ 

tmp[13]=127; 

} 

//------------ 

if(buffer[30]==56 && buffer[31]==48)      //80       
{ 

tmp[13]=128; 

} 

if(buffer[30]==56 && buffer[31]==49)      //81        
{ 

tmp[13]=129; 

} 
if(buffer[30]==56 && buffer[31]==50)      //82        
{ 

tmp[13]=130; 

} 
if(buffer[30]==56 && buffer[31]==51)      //83         
{ 

tmp[13]=131; 

} 
if(buffer[30]==56 && buffer[31]==52)      //84        
{ 

tmp[13]=132; 

} 
if(buffer[30]==56 && buffer[31]==53)      //85      
{ 

tmp[13]=133; 

} 
if(buffer[30]==56 && buffer[31]==54)      //86       
{ 

tmp[13]=134; 

} 
if(buffer[30]==56 && buffer[31]==55)      //87     
{ 

tmp[13]=135; 

} 
if(buffer[30]==56 && buffer[31]==56)      //88     
{ 

tmp[13]=136; 

} 
if(buffer[30]==56 && buffer[31]==57)      //89   
{ 

tmp[13]=137; 

} 

if(buffer[30]==56 && buffer[31]==65)      //8a 
{ 

tmp[13]=138; 

} 

if(buffer[30]==56 && buffer[31]==66)      //8b 
{ 

tmp[13]=139; 

} 
if(buffer[30]==56 && buffer[31]==67)      //8c 
{ 

tmp[13]=140; 

} 
if(buffer[30]==56 && buffer[31]==68)      //8d 
{ 

tmp[13]=141; 

} 
if(buffer[30]==56 && buffer[31]==69)      //8e  
{ 

tmp[13]=142; 

} 
if(buffer[30]==56 && buffer[31]==70)      //8f  
{ 

tmp[13]=143; 

} 
//------------ 


if(buffer[30]==57 && buffer[31]==48)      //90       
{ 

tmp[13]=144; 

} 

if(buffer[30]==57 && buffer[31]==49)      //91        
{ 

tmp[13]=145; 

} 
if(buffer[30]==57 && buffer[31]==50)      //92        
{ 

tmp[13]=146; 

} 
if(buffer[30]==57 && buffer[31]==51)      //93         
{ 

tmp[13]=147; 

} 
if(buffer[30]==57 && buffer[31]==52)      //94        
{ 

tmp[13]=148; 

} 
if(buffer[30]==57 && buffer[31]==53)      //95      
{ 

tmp[13]=149; 

} 
if(buffer[30]==57 && buffer[31]==54)      //96       
{ 

tmp[13]=150; 

} 
if(buffer[30]==57 && buffer[31]==55)      //97     
{ 

tmp[13]=151; 

} 
if(buffer[30]==57 && buffer[31]==56)      //98     
{ 

tmp[13]=152; 

} 
if(buffer[30]==57 && buffer[31]==57)      //99   
{ 

tmp[13]=153; 

} 

if(buffer[30]==57 && buffer[31]==65)      //9a 
{ 

tmp[13]=154; 

} 

if(buffer[30]==57 && buffer[31]==66)      //9b 
{ 

tmp[13]=155; 

} 
if(buffer[30]==57 && buffer[31]==67)      //9c 
{ 

tmp[13]=156; 

} 
if(buffer[30]==57 && buffer[31]==68)      //9d 
{ 

tmp[13]=157; 

} 
if(buffer[30]==57 && buffer[31]==69)      //9e  
{ 

tmp[13]=158; 

} 
if(buffer[30]==57 && buffer[31]==70)      //9f  
{ 

tmp[13]=159; 

} 
//------------ 


if(buffer[30]==65 && buffer[31]==48)      //a0       
{ 

tmp[13]=160; 

} 

if(buffer[30]==65 && buffer[31]==49)      //a1        
{ 

tmp[13]=161; 

} 
if(buffer[30]==65 && buffer[31]==50)      //a2        
{ 

tmp[13]=162; 

} 
if(buffer[30]==65 && buffer[31]==51)      //a3         
{ 

tmp[13]=163; 

} 
if(buffer[30]==65 && buffer[31]==52)      //a4        
{ 

tmp[13]=164; 

} 
if(buffer[30]==65 && buffer[31]==53)      //a5      
{ 

tmp[13]=165; 

} 
if(buffer[30]==65 && buffer[31]==54)      //a6       
{ 

tmp[13]=166; 

} 
if(buffer[30]==65 && buffer[31]==55)      //a7     
{ 

tmp[13]=167; 

} 
if(buffer[30]==65 && buffer[31]==56)      //a8     
{ 

tmp[13]=168; 

} 
if(buffer[30]==65 && buffer[31]==57)      //a9   
{ 

tmp[13]=169; 

} 

if(buffer[30]==65 && buffer[31]==65)      //aa 
{ 

tmp[13]=170; 

} 

if(buffer[30]==65 && buffer[31]==66)      //ab 
{ 

tmp[13]=171; 

} 
if(buffer[30]==65 && buffer[31]==67)      //ac 
{ 

tmp[13]=172; 

} 
if(buffer[30]==65 && buffer[31]==68)      //ad 
{ 

tmp[13]=173; 

} 
if(buffer[30]==65 && buffer[31]==69)      //ae  
{ 

tmp[13]=174; 

} 
if(buffer[30]==65 && buffer[31]==70)      //af  
{ 

tmp[13]=175; 

} 
//------------ 


if(buffer[30]==66 && buffer[31]==48)      //b0       
{ 

tmp[13]=176; 

} 

if(buffer[30]==66 && buffer[31]==49)      //b1        
{ 

tmp[13]=177; 

} 
if(buffer[30]==66 && buffer[31]==50)      //b2        
{ 

tmp[13]=178; 

} 
if(buffer[30]==66 && buffer[31]==51)      //b3         
{ 

tmp[13]=179; 

} 
if(buffer[30]==66 && buffer[31]==52)      //b4        
{ 

tmp[13]=180; 

} 
if(buffer[30]==66 && buffer[31]==53)      //b5      
{ 

tmp[13]=181; 

} 
if(buffer[30]==66 && buffer[31]==54)      //b6       
{ 

tmp[13]=182; 

} 
if(buffer[30]==66 && buffer[31]==55)      //b7     
{ 

tmp[13]=183; 

} 
if(buffer[30]==66 && buffer[31]==56)      //b8     
{ 

tmp[13]=184; 

} 
if(buffer[30]==66 && buffer[31]==57)      //b9   
{ 

tmp[13]=185; 

} 

if(buffer[30]==66 && buffer[31]==65)      //ba 
{ 

tmp[13]=186; 

} 

if(buffer[30]==66 && buffer[31]==66)      //bb 
{ 

tmp[13]=187; 

} 
if(buffer[30]==66 && buffer[31]==67)      //bc 
{ 

tmp[13]=188; 

} 
if(buffer[30]==66 && buffer[31]==68)      //bd 
{ 

tmp[13]=189; 

} 
if(buffer[30]==66 && buffer[31]==69)      //be  
{ 

tmp[13]=190; 

} 
if(buffer[30]==66 && buffer[31]==70)      //bf  
{ 

tmp[13]=191; 

} 
//------------ 



if(buffer[30]==67 && buffer[31]==48)      //c0       
{ 

tmp[13]=192; 

} 

if(buffer[30]==67 && buffer[31]==49)      //c1        
{ 

tmp[13]=193; 

} 
if(buffer[30]==67 && buffer[31]==50)      //c2        
{ 

tmp[13]=194; 

} 
if(buffer[30]==67 && buffer[31]==51)      //c3         
{ 

tmp[13]=195; 

} 
if(buffer[30]==67 && buffer[31]==52)      //c4        
{ 

tmp[13]=196; 

} 
if(buffer[30]==67 && buffer[31]==53)      //c5      
{ 

tmp[13]=197; 

} 
if(buffer[30]==67 && buffer[31]==54)      //c6       
{ 

tmp[13]=198; 
 
} 
if(buffer[30]==67 && buffer[31]==55)      //c7     
{ 

tmp[13]=199; 

} 
if(buffer[30]==67 && buffer[31]==56)      //c8     
{ 

tmp[13]=200; 

} 
if(buffer[30]==67 && buffer[31]==57)      //c9   
{ 

tmp[13]=201; 

} 

if(buffer[30]==67 && buffer[31]==65)      //ca 
{ 

tmp[13]=202; 

} 

if(buffer[30]==67 && buffer[31]==66)      //cb 
{ 

tmp[13]=203; 

} 
if(buffer[30]==67 && buffer[31]==67)      //cc 
{ 

tmp[13]=204; 

} 
if(buffer[30]==67 && buffer[31]==68)      //cd 
{ 

tmp[13]=205; 

} 
if(buffer[30]==67 && buffer[31]==69)      //ce  
{ 

tmp[13]=206; 

} 
if(buffer[30]==67 && buffer[31]==70)      //cf  
{ 

tmp[13]=207; 

} 
//------------ 


if(buffer[30]==68 && buffer[31]==48)      //d0       
{ 

tmp[13]=208; 

} 

if(buffer[30]==68 && buffer[31]==49)      //d1        
{ 

tmp[13]=209; 

} 
if(buffer[30]==68 && buffer[31]==50)      //d2        
{ 

tmp[13]=210; 

} 
if(buffer[30]==68 && buffer[31]==51)      //d3         
{ 

tmp[13]=211; 

} 
if(buffer[30]==68 && buffer[31]==52)      //d4        
{ 

tmp[13]=212; 

} 
if(buffer[30]==68 && buffer[31]==53)      //d5      
{ 

tmp[13]=213; 

} 
if(buffer[30]==68 && buffer[31]==54)      //d6       
{ 

tmp[13]=214; 

} 
if(buffer[30]==68 && buffer[31]==55)      //d7     
{ 

tmp[13]=215; 

} 
if(buffer[30]==68 && buffer[31]==56)      //d8     
{ 

tmp[13]=216; 

} 
if(buffer[30]==68 && buffer[31]==57)      //d9   
{ 

tmp[13]=217; 

} 

if(buffer[30]==68 && buffer[31]==65)      //da 
{ 

tmp[13]=218; 

} 

if(buffer[30]==68 && buffer[31]==66)      //db 
{ 

tmp[13]=219; 

} 
if(buffer[30]==68 && buffer[31]==67)      //dc 
{ 

tmp[13]=220; 

} 
if(buffer[30]==68 && buffer[31]==68)      //dd 
{ 

tmp[13]=221; 

} 
if(buffer[30]==68 && buffer[31]==69)      //de  
{ 

tmp[13]=222; 

} 
if(buffer[30]==68 && buffer[31]==70)      //df  
{ 
 
tmp[13]=223; 

} 
//------------ 



if(buffer[30]==69 && buffer[31]==48)      //e0       
{ 

tmp[13]=224; 

} 

if(buffer[30]==69 && buffer[31]==49)      //e1        
{ 

tmp[13]=225; 

} 
if(buffer[30]==69 && buffer[31]==50)      //e2        
{ 

tmp[13]=226; 

} 
if(buffer[30]==69 && buffer[31]==51)      //e3         
{ 

tmp[13]=227; 

} 
if(buffer[30]==69 && buffer[31]==52)      //e4        
{ 

tmp[13]=228; 

} 
if(buffer[30]==69 && buffer[31]==53)      //e5      
{ 

tmp[13]=229; 

} 
if(buffer[30]==69 && buffer[31]==54)      //e6       
{ 

tmp[13]=230; 

} 
if(buffer[30]==69 && buffer[31]==55)      //e7     
{ 

tmp[13]=231; 

} 
if(buffer[30]==69 && buffer[31]==56)      //e8     
{ 

tmp[13]=232; 

} 
if(buffer[30]==69 && buffer[31]==57)      //e9   
{ 

tmp[13]=233; 

} 

if(buffer[30]==69 && buffer[31]==65)      //ea 
{ 

tmp[13]=234; 

} 

if(buffer[30]==69 && buffer[31]==66)      //eb 
{ 

tmp[13]=235; 

} 
if(buffer[30]==69 && buffer[31]==67)      //ec 
{ 

tmp[13]=236; 

} 
if(buffer[30]==69 && buffer[31]==68)      //ed 
{ 

tmp[13]=237; 

} 
if(buffer[30]==69 && buffer[31]==69)      //ee  
{ 

tmp[13]=238; 

} 
if(buffer[30]==69 && buffer[31]==70)      //ef  
{ 

tmp[13]=239; 

} 
//------------ 

if(buffer[30]==70 && buffer[31]==48)      //f0       
{ 

tmp[13]=240; 

} 

if(buffer[30]==70 && buffer[31]==49)      //f1        
{ 

tmp[13]=241; 

} 
if(buffer[30]==70 && buffer[31]==50)      //f2        
{ 

tmp[13]=242; 

} 
if(buffer[30]==70 && buffer[31]==51)      //f3         
{ 

tmp[13]=243; 

} 
if(buffer[30]==70 && buffer[31]==52)      //f4        
{ 

tmp[13]=244; 

} 
if(buffer[30]==70 && buffer[31]==53)      //f5      
{ 

tmp[13]=245; 

} 
if(buffer[30]==70 && buffer[31]==54)      //f6       
{ 

tmp[13]=246; 

} 
if(buffer[30]==70 && buffer[31]==55)      //f7     
{ 

tmp[13]=247; 
 
} 
if(buffer[30]==70 && buffer[31]==56)      //f8     
{ 

tmp[13]=248; 

} 
if(buffer[30]==70 && buffer[31]==57)      //f9   
{ 

tmp[13]=249; 

} 

if(buffer[30]==70 && buffer[31]==65)      //fa 
{ 

tmp[13]=250; 

} 

if(buffer[30]==70 && buffer[31]==66)      //fb 
{ 

tmp[13]=251; 

} 
if(buffer[30]==70 && buffer[31]==67)      //fc 
{ 

tmp[13]=252; 

} 
if(buffer[30]==70 && buffer[31]==68)      //fd 
{ 

tmp[13]=253; 

} 
if(buffer[30]==70 && buffer[31]==69)      //fe  
{ 

tmp[13]=254; 

} 
if(buffer[30]==70 && buffer[31]==70)      //ff  
{ 

tmp[13]=255; 

} 
 
//----------------------- end of tmp[13]--------------------------- 


//----------------------- start of tmp[14]--------------------------- 


if(buffer[32]==48 && buffer[33]==48)      //00        
{ 

tmp[14]=0; 

} 

if(buffer[32]==48 && buffer[33]==49)      //01        
{ 

tmp[14]=1; 

} 
if(buffer[32]==48 && buffer[33]==50)      //02        
{ 

tmp[14]=2; 

} 
if(buffer[32]==48 && buffer[33]==51)      //03         
{ 

tmp[14]=3; 

} 
if(buffer[32]==48 && buffer[33]==52)      //04        
{ 

tmp[14]=4; 

} 
if(buffer[32]==48 && buffer[33]==53)      //05      
{ 

tmp[14]=5; 

} 


if(buffer[32]==48 && buffer[33]==54)      //06       
{ 

tmp[14]=6; 

} 
if(buffer[32]==48 && buffer[33]==55)      //07     
{ 

tmp[14]=7; 

} 
if(buffer[32]==48 && buffer[33]==56)      //08     
{ 

tmp[14]=8; 

} 
if(buffer[32]==48 && buffer[33]==57)      //09   
{ 

tmp[14]=9; 

} 

if(buffer[32]==48 && buffer[33]==65)      //0a 
{ 

tmp[14]=10; 

} 

if(buffer[32]==48 && buffer[33]==66)      //0b 
{ 

tmp[14]=11; 

} 
if(buffer[32]==48 && buffer[33]==67)      //0c 
{ 

tmp[14]=12; 

} 
if(buffer[32]==48 && buffer[33]==68)      //0d 
{ 

tmp[14]=13; 

} 
if(buffer[32]==48 && buffer[33]==69)      //0e  
{ 

tmp[14]=14; 

} 
if(buffer[32]==48 && buffer[33]==70)      //0f  
{ 
 
tmp[14]=15; 

} 

//----------- 

if(buffer[32]==49 && buffer[33]==48)      //        10 
{ 

tmp[14]=16; 

} 
if(buffer[32]==49 && buffer[33]==49)      //         11 
{ 

tmp[14]=17; 

} 
if(buffer[32]==49 && buffer[33]==50)      //         12 
{ 

tmp[14]=18; 

} 
if(buffer[32]==49 && buffer[33]==51)      //         13 
{ 

tmp[14]=19; 

} 
if(buffer[32]==49 && buffer[33]==52)      //         14 
{ 

tmp[14]=20; 

} 
if(buffer[32]==49 && buffer[33]==53)      //         15 
{ 

tmp[14]=21; 

} 
if(buffer[32]==49 && buffer[33]==54)      //         16 
{ 

tmp[14]=22; 

} 
if(buffer[32]==49 && buffer[33]==55)      //         17 
{ 

tmp[14]=23; 

} 
if(buffer[32]==49 && buffer[33]==56)      //         18 
{ 

tmp[14]=24; 

} 
if(buffer[32]==49 && buffer[33]==57)      //         19 
{ 

tmp[14]=25; 

} 

if(buffer[32]==49 && buffer[33]==65)      //         1a 
{ 

tmp[14]=26; 

} 
if(buffer[32]==49 && buffer[33]==66)      //         1b 
{ 

tmp[14]=27; 

} 
if(buffer[32]==49 && buffer[33]==67)      //         1c 
{ 

tmp[14]=28; 

} 
if(buffer[32]==49 && buffer[33]==68)      //         1d 
{ 

tmp[14]=29; 

} 
if(buffer[32]==49 && buffer[33]==69)      //         1e 
{ 

tmp[14]=30; 

} 
if(buffer[32]==49 && buffer[33]==70)      //         1f 
{ 

tmp[14]=31; 

} 
 

//--------------- 


if(buffer[32]==50 && buffer[33]==48)      //         20 
{ 

tmp[14]=32; 

} 

if(buffer[32]==50 && buffer[33]==49)      //         21 
{ 

tmp[14]=33; 

} 
if(buffer[32]==50 && buffer[33]==50)      //         22 
{ 

tmp[14]=34; 

} 
if(buffer[32]==50 && buffer[33]==51)      //         23 
{ 

tmp[14]=35; 

} 
if(buffer[32]==50 && buffer[33]==52)      //         24 
{ 

tmp[14]=36; 

} 
if(buffer[32]==50 && buffer[33]==53)      //         25 
{ 

tmp[14]=37; 

} 
if(buffer[32]==50 && buffer[33]==54)      //         26 
{ 

tmp[14]=38; 

} 
if(buffer[32]==50 && buffer[33]==55)      //         27 
{ 

tmp[14]=39; 
 
} 
if(buffer[32]==50 && buffer[33]==56)      //         28 
{ 

tmp[14]=40; 

} 
if(buffer[32]==50 && buffer[33]==57)      //         29 
{ 

tmp[14]=41; 

} 
if(buffer[32]==50 && buffer[33]==65)      //         2a 
{ 

tmp[14]=42; 

} 
if(buffer[32]==50 && buffer[33]==66)      //         2b 
{ 

tmp[14]=43; 

} 
if(buffer[32]==50 && buffer[33]==67)      //         2c 
{ 

tmp[14]=44; 

} 

if(buffer[32]==50 && buffer[33]==68)      //       2d  
{ 

tmp[14]=45; 

} 
if(buffer[32]==50 && buffer[33]==69)      //         2e 
{ 

tmp[14]=46; 

} 
if(buffer[32]==50 && buffer[33]==70)      //         2f 
{ 

tmp[14]=47; 

} 

//------------- 


if(buffer[32]==51 && buffer[33]==48)      // 30        
{ 

tmp[14]=48; 

} 

if(buffer[32]==51 && buffer[33]==49)      // 31        
{ 

tmp[14]=49; 

} 
if(buffer[32]==51 && buffer[33]==50)      // 32        
{ 

tmp[14]=50; 

} 
if(buffer[32]==51 && buffer[33]==51)      //33         
{ 

tmp[14]=51; 

} 
if(buffer[32]==51 && buffer[33]==52)      //34        
{ 

tmp[14]=52; 

} 
if(buffer[32]==51 && buffer[33]==53)      //35      
{ 

tmp[14]=53; 

} 
if(buffer[32]==51 && buffer[33]==54)      //36       
{ 
//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 
 
if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 
 
} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 
 
} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 
 
tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 
 
} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 
 
if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 
 
tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 
 
tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 
 
} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 
 
tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 
} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 
 
tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 
 
tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 
 
} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 
 
} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 
 
tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 
 
} 

//----------------------- end of tmp[31]--------------------------- 

tmp[14]=54; 

} 
if(buffer[32]==51 && buffer[33]==55)      //37     
{ 

tmp[14]=55; 

} 
if(buffer[32]==51 && buffer[33]==56)      //38     
{ 

tmp[14]=56; 

} 
if(buffer[32]==51 && buffer[33]==57)      //39   
{ 

tmp[14]=57; 

} 

if(buffer[32]==51 && buffer[33]==65)      //3a 
{ 

tmp[14]=58; 

} 

if(buffer[32]==51 && buffer[33]==66)      //3b 
{ 

tmp[14]=59; 

} 
if(buffer[32]==51 && buffer[33]==67)      //3c 
{ 

tmp[14]=60; 

} 
if(buffer[32]==51 && buffer[33]==68)      //3d 
{ 

tmp[14]=61; 

} 
if(buffer[32]==51 && buffer[33]==69)      //3e  
{ 

tmp[14]=62; 

} 
if(buffer[32]==51 && buffer[33]==70)      //3f  
{ 

tmp[14]=63; 

} 

//------------ 


if(buffer[32]==52 && buffer[33]==48)      // 40       
{ 

tmp[14]=64; 

} 

if(buffer[32]==52 && buffer[33]==49)      // 41        
{ 

tmp[14]=65; 

} 
if(buffer[32]==52 && buffer[33]==50)      // 42        
{ 

tmp[14]=66; 

} 
if(buffer[32]==52 && buffer[33]==51)      //43         
{ 

tmp[14]=67; 

} 
if(buffer[32]==52 && buffer[33]==52)      //44        
{ 

tmp[14]=68; 

} 
if(buffer[32]==52 && buffer[33]==53)      //45      
{ 

tmp[14]=69; 

} 

if(buffer[32]==52 && buffer[33]==54)      //46       
{ 

tmp[14]=70; 

} 
if(buffer[32]==52 && buffer[33]==55)      //47     
{ 

tmp[14]=71; 

} 
if(buffer[32]==52 && buffer[33]==56)      //48     
{ 

tmp[14]=72; 

} 
if(buffer[32]==52 && buffer[33]==57)      //49   
{ 

tmp[14]=73; 

} 

if(buffer[32]==52 && buffer[33]==65)      //4a 
{ 

tmp[14]=74; 

} 

if(buffer[32]==52 && buffer[33]==66)      //4b 
{ 

tmp[14]=75; 

} 
if(buffer[32]==52 && buffer[33]==67)      //4c 
{ 

tmp[14]=76; 

} 
if(buffer[32]==52 && buffer[33]==68)      //4d 
{ 

tmp[14]=77; 

} 
if(buffer[32]==52 && buffer[33]==69)      //4e  
{ 

tmp[14]=78; 

} 
if(buffer[32]==52 && buffer[33]==70)      //4f  
{ 

tmp[14]=79; 

} 
//------------ 




if(buffer[32]==53 && buffer[33]==48)      //50       
{ 

tmp[14]=80; 

} 

if(buffer[32]==53 && buffer[33]==49)      //51        
{ 

tmp[14]=81; 

} 
if(buffer[32]==53 && buffer[33]==50)      //52        
{ 

tmp[14]=82; 

} 
if(buffer[32]==53 && buffer[33]==51)      //53         
{ 

tmp[14]=83; 

} 
if(buffer[32]==53 && buffer[33]==52)      //54        
{ 

tmp[14]=84; 

} 
if(buffer[32]==53 && buffer[33]==53)      //55      
{ 

tmp[14]=85; 
 
} 
if(buffer[32]==53 && buffer[33]==54)      //56       
{ 

tmp[14]=86; 

} 
if(buffer[32]==53 && buffer[33]==55)      //57     
{ 

tmp[14]=87; 

} 
if(buffer[32]==53 && buffer[33]==56)      //58     
{ 

tmp[14]=88; 

} 
if(buffer[32]==53 && buffer[33]==57)      //59   
{ 

tmp[14]=89; 

} 

if(buffer[32]==53 && buffer[33]==65)      //5a 
{ 

tmp[14]=90; 

} 

if(buffer[32]==53 && buffer[33]==66)      //5b 
{ 

tmp[14]=91; 

} 
if(buffer[32]==53 && buffer[33]==67)      //5c 
{ 

tmp[14]=92; 

} 
if(buffer[32]==53 && buffer[33]==68)      //5d 
{ 

tmp[14]=93; 

} 
if(buffer[32]==53 && buffer[33]==69)      //5e  
{ 

tmp[14]=94; 

} 
if(buffer[32]==53 && buffer[33]==70)      //5f  
{ 

tmp[14]=95; 

} 
//------------ 




if(buffer[32]==54 && buffer[33]==48)      //60       
{ 

tmp[14]=96; 

} 

if(buffer[32]==54 && buffer[33]==49)      //61        
{ 

tmp[14]=97; 

} 
if(buffer[32]==54 && buffer[33]==50)      //62        
{ 

tmp[14]=98; 

} 
if(buffer[32]==54 && buffer[33]==51)      //63         
{ 

tmp[14]=99; 

} 
if(buffer[32]==54 && buffer[33]==52)      //64        
{ 

tmp[14]=100; 

} 
if(buffer[32]==54 && buffer[33]==53)      //65      
{ 

tmp[14]=101; 
 
} 
if(buffer[32]==54 && buffer[33]==54)      //66       
{ 

tmp[14]=102; 

} 
if(buffer[32]==54 && buffer[33]==55)      //67     
{ 

tmp[14]=103; 

} 
if(buffer[32]==54 && buffer[33]==56)      //68     
{ 

tmp[14]=104; 

} 
if(buffer[32]==54 && buffer[33]==57)      //69   
{ 

tmp[14]=105; 

} 

if(buffer[32]==54 && buffer[33]==65)      //6a 
{ 

tmp[14]=106; 

} 

if(buffer[32]==54 && buffer[33]==66)      //6b 
{ 

tmp[14]=107; 

} 
if(buffer[32]==54 && buffer[33]==67)      //6c 
{ 

tmp[14]=108; 

} 
if(buffer[32]==54 && buffer[33]==68)      //6d 
{ 

tmp[14]=109; 

} 
if(buffer[32]==54 && buffer[33]==69)      //6e  
{ 

tmp[14]=110; 

} 
if(buffer[32]==54 && buffer[33]==70)      //6f  
{ 

tmp[14]=111; 

} 
//------------ 




if(buffer[32]==55 && buffer[33]==48)      //70       
{ 

tmp[14]=112; 

} 

if(buffer[32]==55 && buffer[33]==49)      //71        
{ 

tmp[14]=113; 

} 
if(buffer[32]==55 && buffer[33]==50)      //72        
{ 

tmp[14]=114; 

} 
if(buffer[32]==55 && buffer[33]==51)      //73         
{ 

tmp[14]=115; 

} 
if(buffer[32]==55 && buffer[33]==52)      //74        
{ 

tmp[14]=116; 

} 
if(buffer[32]==55 && buffer[33]==53)      //75      
{ 

tmp[14]=117; 
 
} 
if(buffer[32]==55 && buffer[33]==54)      //76       
{ 

tmp[14]=118; 

} 
if(buffer[32]==55 && buffer[33]==55)      //77     
{ 

tmp[14]=119; 

} 
if(buffer[32]==55 && buffer[33]==56)      //78     
{ 

tmp[14]=120; 

} 
if(buffer[32]==55 && buffer[33]==57)      //79   
{ 

tmp[14]=121; 

} 

if(buffer[32]==55 && buffer[33]==65)      //7a 
{ 

tmp[14]=122; 

} 

if(buffer[32]==55 && buffer[33]==66)      //7b 
{ 

tmp[14]=123; 

} 
if(buffer[32]==55 && buffer[33]==67)      //7c 
{ 

tmp[14]=124; 

} 
if(buffer[32]==55 && buffer[33]==68)      //7d 
{ 

tmp[14]=125; 

} 
if(buffer[32]==55 && buffer[33]==69)      //7e  
{ 

tmp[14]=126; 

} 
if(buffer[32]==55 && buffer[33]==70)      //7f  
{ 

tmp[14]=127; 

} 

//------------ 

if(buffer[32]==56 && buffer[33]==48)      //80       
{ 

tmp[14]=128; 

} 

if(buffer[32]==56 && buffer[33]==49)      //81        
{ 

tmp[14]=129; 

} 
if(buffer[32]==56 && buffer[33]==50)      //82        
{ 

tmp[14]=130; 

} 
if(buffer[32]==56 && buffer[33]==51)      //83         
{ 

tmp[14]=131; 

} 
if(buffer[32]==56 && buffer[33]==52)      //84        
{ 

tmp[14]=132; 

} 
if(buffer[32]==56 && buffer[33]==53)      //85      
{ 

tmp[14]=133; 

} 
if(buffer[32]==56 && buffer[33]==54)      //86       
{ 

tmp[14]=134; 

} 
if(buffer[32]==56 && buffer[33]==55)      //87     
{ 

tmp[14]=135; 

} 
if(buffer[32]==56 && buffer[33]==56)      //88     
{ 

tmp[14]=136; 

} 
if(buffer[32]==56 && buffer[33]==57)      //89   
{ 

tmp[14]=137; 

} 

if(buffer[32]==56 && buffer[33]==65)      //8a 
{ 

tmp[14]=138; 

} 

if(buffer[32]==56 && buffer[33]==66)      //8b 
{ 

tmp[14]=139; 

} 
if(buffer[32]==56 && buffer[33]==67)      //8c 
{ 

tmp[14]=140; 

} 
if(buffer[32]==56 && buffer[33]==68)      //8d 
{ 

tmp[14]=141; 

} 
if(buffer[32]==56 && buffer[33]==69)      //8e  
{ 
 
tmp[14]=142; 

} 
if(buffer[32]==56 && buffer[33]==70)      //8f  
{ 

tmp[14]=143; 

} 
//------------ 


if(buffer[32]==57 && buffer[33]==48)      //90       
{ 

tmp[14]=144; 

} 

if(buffer[32]==57 && buffer[33]==49)      //91        
{ 

tmp[14]=145; 

} 
if(buffer[32]==57 && buffer[33]==50)      //92        
{ 

tmp[14]=146; 

} 
if(buffer[32]==57 && buffer[33]==51)      //93         
{ 

tmp[14]=147; 

} 
if(buffer[32]==57 && buffer[33]==52)      //94        
{ 

tmp[14]=148; 

} 
if(buffer[32]==57 && buffer[33]==53)      //95      
{ 

tmp[14]=149; 

} 
if(buffer[32]==57 && buffer[33]==54)      //96       
{ 
 
tmp[14]=150; 

} 
if(buffer[32]==57 && buffer[33]==55)      //97     
{ 

tmp[14]=151; 

} 
if(buffer[32]==57 && buffer[33]==56)      //98     
{ 

tmp[14]=152; 

} 
if(buffer[32]==57 && buffer[33]==57)      //99   
{ 

tmp[14]=153; 

} 

if(buffer[32]==57 && buffer[33]==65)      //9a 
{ 

tmp[14]=154; 

} 

if(buffer[32]==57 && buffer[33]==66)      //9b 
{ 

tmp[14]=155; 

} 
if(buffer[32]==57 && buffer[33]==67)      //9c 
{ 

tmp[14]=156; 

} 
if(buffer[32]==57 && buffer[33]==68)      //9d 
{ 

tmp[14]=157; 

} 
if(buffer[32]==57 && buffer[33]==69)      //9e  
{ 

tmp[14]=158; 
 
} 
if(buffer[32]==57 && buffer[33]==70)      //9f  
{ 

tmp[14]=159; 

} 
//------------ 


if(buffer[32]==65 && buffer[33]==48)      //a0       
{ 

tmp[14]=160; 

} 

if(buffer[32]==65 && buffer[33]==49)      //a1        
{ 

tmp[14]=161; 

} 
if(buffer[32]==65 && buffer[33]==50)      //a2        
{ 

tmp[14]=162; 

} 
if(buffer[32]==65 && buffer[33]==51)      //a3         
{ 

tmp[14]=163; 

} 
if(buffer[32]==65 && buffer[33]==52)      //a4        
{ 

tmp[14]=164; 

} 
if(buffer[32]==65 && buffer[33]==53)      //a5      
{ 

tmp[14]=165; 

} 
if(buffer[32]==65 && buffer[33]==54)      //a6       
{ 

tmp[14]=166; 
 
} 
if(buffer[32]==65 && buffer[33]==55)      //a7     
{ 

tmp[14]=167; 

} 
if(buffer[32]==65 && buffer[33]==56)      //a8     
{ 

tmp[14]=168; 

} 
if(buffer[32]==65 && buffer[33]==57)      //a9   
{ 

tmp[14]=169; 

} 

if(buffer[32]==65 && buffer[33]==65)      //aa 
{ 

tmp[14]=170; 

} 

if(buffer[32]==65 && buffer[33]==66)      //ab 
{ 

tmp[14]=171; 

} 
if(buffer[32]==65 && buffer[33]==67)      //ac 
{ 

tmp[14]=172; 

} 
if(buffer[32]==65 && buffer[33]==68)      //ad 
{ 

tmp[14]=173; 

} 
if(buffer[32]==65 && buffer[33]==69)      //ae  
{ 

tmp[14]=174; 

} 
if(buffer[32]==65 && buffer[33]==70)      //af  
{ 

tmp[14]=175; 

} 
//------------ 


if(buffer[32]==66 && buffer[33]==48)      //b0       
{ 

tmp[14]=176; 

} 

if(buffer[32]==66 && buffer[33]==49)      //b1        
{ 

tmp[14]=177; 

} 
if(buffer[32]==66 && buffer[33]==50)      //b2        
{ 

tmp[14]=178; 

} 
if(buffer[32]==66 && buffer[33]==51)      //b3         
{ 

tmp[14]=179; 

} 
if(buffer[32]==66 && buffer[33]==52)      //b4        
{ 

tmp[14]=180; 

} 
if(buffer[32]==66 && buffer[33]==53)      //b5      
{ 

tmp[14]=181; 

} 
if(buffer[32]==66 && buffer[33]==54)      //b6       
{ 

tmp[14]=182; 

} 
if(buffer[32]==66 && buffer[33]==55)      //b7     
{ 

tmp[14]=183; 

} 
if(buffer[32]==66 && buffer[33]==56)      //b8     
{ 

tmp[14]=184; 

} 
if(buffer[32]==66 && buffer[33]==57)      //b9   
{ 

tmp[14]=185; 

} 

if(buffer[32]==66 && buffer[33]==65)      //ba 
{ 

tmp[14]=186; 

} 

if(buffer[32]==66 && buffer[33]==66)      //bb 
{ 

tmp[14]=187; 

} 
if(buffer[32]==66 && buffer[33]==67)      //bc 
{ 

tmp[14]=188; 

} 
if(buffer[32]==66 && buffer[33]==68)      //bd 
{ 

tmp[14]=189; 

} 
if(buffer[32]==66 && buffer[33]==69)      //be  
{ 

tmp[14]=190; 

} 
if(buffer[32]==66 && buffer[33]==70)      //bf  
{ 
 
tmp[14]=191; 

} 
//------------ 



if(buffer[32]==67 && buffer[33]==48)      //c0       
{ 

tmp[14]=192; 

} 

if(buffer[32]==67 && buffer[33]==49)      //c1        
{ 

tmp[14]=193; 

} 
if(buffer[32]==67 && buffer[33]==50)      //c2        
{ 

tmp[14]=194; 

} 
if(buffer[32]==67 && buffer[33]==51)      //c3         
{ 

tmp[14]=195; 

} 
if(buffer[32]==67 && buffer[33]==52)      //c4        
{ 

tmp[14]=196; 

} 
if(buffer[32]==67 && buffer[33]==53)      //c5      
{ 

tmp[14]=197; 

} 
if(buffer[32]==67 && buffer[33]==54)      //c6       
{ 

tmp[14]=198; 

} 
if(buffer[32]==67 && buffer[33]==55)      //c7     
{ 

tmp[14]=199; 

} 
if(buffer[32]==67 && buffer[33]==56)      //c8     
{ 

tmp[14]=200; 

} 
if(buffer[32]==67 && buffer[33]==57)      //c9   
{ 

tmp[14]=201; 

} 

if(buffer[32]==67 && buffer[33]==65)      //ca 
{ 

tmp[14]=202; 

} 

if(buffer[32]==67 && buffer[33]==66)      //cb 
{ 

tmp[14]=203; 

} 
if(buffer[32]==67 && buffer[33]==67)      //cc 
{ 

tmp[14]=204; 

} 
if(buffer[32]==67 && buffer[33]==68)      //cd 
{ 

tmp[14]=205; 

} 
if(buffer[32]==67 && buffer[33]==69)      //ce  
{ 

tmp[14]=206; 

} 
if(buffer[32]==67 && buffer[33]==70)      //cf  
{ 

tmp[14]=207; 

} 
//------------ 


if(buffer[32]==68 && buffer[33]==48)      //d0       
{ 

tmp[14]=208; 

} 

if(buffer[32]==68 && buffer[33]==49)      //d1        
{ 

tmp[14]=209; 

} 
if(buffer[32]==68 && buffer[33]==50)      //d2        
{ 

tmp[14]=210; 

} 
if(buffer[32]==68 && buffer[33]==51)      //d3         
{ 

tmp[14]=211; 

} 
if(buffer[32]==68 && buffer[33]==52)      //d4        
{ 

tmp[14]=212; 

} 
if(buffer[32]==68 && buffer[33]==53)      //d5      
{ 

tmp[14]=213; 

} 
if(buffer[32]==68 && buffer[33]==54)      //d6       
{ 

tmp[14]=214; 

} 
if(buffer[32]==68 && buffer[33]==55)      //d7     
{ 

tmp[14]=215; 

} 
if(buffer[32]==68 && buffer[33]==56)      //d8     
{ 

tmp[14]=216; 

} 
if(buffer[32]==68 && buffer[33]==57)      //d9   
{ 

tmp[14]=217; 

} 

if(buffer[32]==68 && buffer[33]==65)      //da 
{ 

tmp[14]=218; 

} 

if(buffer[32]==68 && buffer[33]==66)      //db 
{ 

tmp[14]=219; 

} 
if(buffer[32]==68 && buffer[33]==67)      //dc 
{ 

tmp[14]=220; 

} 
if(buffer[32]==68 && buffer[33]==68)      //dd 
{ 

tmp[14]=221; 

} 
if(buffer[32]==68 && buffer[33]==69)      //de  
{ 

tmp[14]=222; 

} 
if(buffer[32]==68 && buffer[33]==70)      //df  
{ 

tmp[14]=223; 

} 
//------------ 



if(buffer[32]==69 && buffer[33]==48)      //e0       
{ 

tmp[14]=224; 

} 

if(buffer[32]==69 && buffer[33]==49)      //e1        
{ 

tmp[14]=225; 

} 
if(buffer[32]==69 && buffer[33]==50)      //e2        
{ 

tmp[14]=226; 

} 
if(buffer[32]==69 && buffer[33]==51)      //e3         
{ 

tmp[14]=227; 

} 
if(buffer[32]==69 && buffer[33]==52)      //e4        
{ 

tmp[14]=228; 

} 
if(buffer[32]==69 && buffer[33]==53)      //e5      
{ 

tmp[14]=229; 

} 
if(buffer[32]==69 && buffer[33]==54)      //e6       
{ 

tmp[14]=230; 

} 
if(buffer[32]==69 && buffer[33]==55)      //e7     
{ 

tmp[14]=231; 
 
} 
if(buffer[32]==69 && buffer[33]==56)      //e8     
{ 

tmp[14]=232; 

} 
if(buffer[32]==69 && buffer[33]==57)      //e9   
{ 

tmp[14]=233; 

} 

if(buffer[32]==69 && buffer[33]==65)      //ea 
{ 

tmp[14]=234; 

} 

if(buffer[32]==69 && buffer[33]==66)      //eb 
{ 

tmp[14]=235; 

} 
if(buffer[32]==69 && buffer[33]==67)      //ec 
{ 

tmp[14]=236; 

} 
if(buffer[32]==69 && buffer[33]==68)      //ed 
{ 

tmp[14]=237; 

} 
if(buffer[32]==69 && buffer[33]==69)      //ee  
{ 

tmp[14]=238; 

} 
if(buffer[32]==69 && buffer[33]==70)      //ef  
{ 

tmp[14]=239; 

} 
//------------ 

if(buffer[32]==70 && buffer[33]==48)      //f0       
{ 

tmp[14]=240; 

} 

if(buffer[32]==70 && buffer[33]==49)      //f1        
{ 

tmp[14]=241; 

} 
if(buffer[32]==70 && buffer[33]==50)      //f2        
{ 

tmp[14]=242; 

} 
if(buffer[32]==70 && buffer[33]==51)      //f3         
{ 

tmp[14]=243; 

} 
if(buffer[32]==70 && buffer[33]==52)      //f4        
{ 

tmp[14]=244; 

} 
if(buffer[32]==70 && buffer[33]==53)      //f5      
{ 

tmp[14]=245; 

} 
if(buffer[32]==70 && buffer[33]==54)      //f6       
{ 

tmp[14]=246; 

} 
if(buffer[32]==70 && buffer[33]==55)      //f7     
{ 

tmp[14]=247; 

} 
if(buffer[32]==70 && buffer[33]==56)      //f8     
{ 

tmp[14]=248; 

} 
if(buffer[32]==70 && buffer[33]==57)      //f9   
{ 

tmp[14]=249; 

} 

if(buffer[32]==70 && buffer[33]==65)      //fa 
{ 

tmp[14]=250; 

} 

if(buffer[32]==70 && buffer[33]==66)      //fb 
{ 

tmp[14]=251; 

} 
if(buffer[32]==70 && buffer[33]==67)      //fc 
{ 

tmp[14]=252; 

} 
if(buffer[32]==70 && buffer[33]==68)      //fd 
{ 

tmp[14]=253; 

} 
if(buffer[32]==70 && buffer[33]==69)      //fe  
{ 

tmp[14]=254; 

} 
if(buffer[32]==70 && buffer[33]==70)      //ff  
{ 

tmp[14]=255; 

} 

//----------------------- end of tmp[14]--------------------------- 

 
//----------------------- start of tmp[15]--------------------------- 


if(buffer[34]==48 && buffer[35]==48)      //00        
{ 

tmp[15]=0; 

} 

if(buffer[34]==48 && buffer[35]==49)      //01        
{ 

tmp[15]=1; 

} 
if(buffer[34]==48 && buffer[35]==50)      //02        
{ 

tmp[15]=2; 

} 
if(buffer[34]==48 && buffer[35]==51)      //03         
{ 

tmp[15]=3; 

} 
if(buffer[34]==48 && buffer[35]==52)      //04        
{ 

tmp[15]=4; 

} 
if(buffer[34]==48 && buffer[35]==53)      //05      
{ 

tmp[15]=5; 

} 


if(buffer[34]==48 && buffer[35]==54)      //06       
{ 

tmp[15]=6; 

} 
if(buffer[34]==48 && buffer[35]==55)      //07     
{ 

tmp[15]=7; 

} 
if(buffer[34]==48 && buffer[35]==56)      //08     
{ 

tmp[15]=8; 

} 
if(buffer[34]==48 && buffer[35]==57)      //09   
{ 

tmp[15]=9; 

} 

if(buffer[34]==48 && buffer[35]==65)      //0a 
{ 

tmp[15]=10; 

} 

if(buffer[34]==48 && buffer[35]==66)      //0b 
{ 

tmp[15]=11; 

} 
if(buffer[34]==48 && buffer[35]==67)      //0c 
{ 

tmp[15]=12; 

} 
if(buffer[34]==48 && buffer[35]==68)      //0d 
{ 

tmp[15]=13; 

} 
if(buffer[34]==48 && buffer[35]==69)      //0e  
{ 

tmp[15]=14; 

} 
if(buffer[34]==48 && buffer[35]==70)      //0f  
{ 

tmp[15]=15; 

} 

//----------- 

if(buffer[34]==49 && buffer[35]==48)      //        10 
{ 

tmp[15]=16; 

} 
if(buffer[34]==49 && buffer[35]==49)      //         11 
{ 

tmp[15]=17; 

} 
if(buffer[34]==49 && buffer[35]==50)      //         12 
{ 

tmp[15]=18; 

} 
if(buffer[34]==49 && buffer[35]==51)      //         13 
{ 

tmp[15]=19; 

} 
if(buffer[34]==49 && buffer[35]==52)      //         14 
{ 

tmp[15]=20; 

} 
if(buffer[34]==49 && buffer[35]==53)      //         15 
{ 

tmp[15]=21; 

} 
if(buffer[34]==49 && buffer[35]==54)      //         16 
{ 

tmp[15]=22; 

} 
if(buffer[34]==49 && buffer[35]==55)      //         17 
{ 

tmp[15]=23; 

} 
if(buffer[34]==49 && buffer[35]==56)      //         18 
{ 

tmp[15]=24; 

} 
if(buffer[34]==49 && buffer[35]==57)      //         19 
{ 

tmp[15]=25; 

} 

if(buffer[34]==49 && buffer[35]==65)      //         1a 
{ 

tmp[15]=26; 

} 
if(buffer[34]==49 && buffer[35]==66)      //         1b 
{ 

tmp[15]=27; 

} 
if(buffer[34]==49 && buffer[35]==67)      //         1c 
{ 

tmp[15]=28; 

} 
if(buffer[34]==49 && buffer[35]==68)      //         1d 
{ 

tmp[15]=29; 

} 
if(buffer[34]==49 && buffer[35]==69)      //         1e 
{ 

tmp[15]=30; 

} 
if(buffer[34]==49 && buffer[35]==70)      //         1f 
{ 

tmp[15]=31; 

} 


//--------------- 
 

if(buffer[34]==50 && buffer[35]==48)      //         20 
{ 

tmp[15]=32; 

} 

if(buffer[34]==50 && buffer[35]==49)      //         21 
{ 

tmp[15]=33; 

} 
if(buffer[34]==50 && buffer[35]==50)      //         22 
{ 

tmp[15]=34; 

} 
if(buffer[34]==50 && buffer[35]==51)      //         23 
{ 

tmp[15]=35; 

} 
if(buffer[34]==50 && buffer[35]==52)      //         24 
{ 

tmp[15]=36; 

} 
if(buffer[34]==50 && buffer[35]==53)      //         25 
{ 

tmp[15]=37; 

} 
if(buffer[34]==50 && buffer[35]==54)      //         26 
{ 

tmp[15]=38; 

} 
if(buffer[34]==50 && buffer[35]==55)      //         27 
{ 

tmp[15]=39; 

} 
if(buffer[34]==50 && buffer[35]==56)      //         28 
{ 

tmp[15]=40; 

} 
if(buffer[34]==50 && buffer[35]==57)      //         29 
{ 

tmp[15]=41; 

} 
if(buffer[34]==50 && buffer[35]==65)      //         2a 
{ 

tmp[15]=42; 

} 
if(buffer[34]==50 && buffer[35]==66)      //         2b 
{ 

tmp[15]=43; 

} 
if(buffer[34]==50 && buffer[35]==67)      //         2c 
{ 

tmp[15]=44; 

} 

if(buffer[34]==50 && buffer[35]==68)      //       2d  
{ 

tmp[15]=45; 

} 
if(buffer[34]==50 && buffer[35]==69)      //         2e 
{ 

tmp[15]=46; 

} 
if(buffer[34]==50 && buffer[35]==70)      //         2f 
{ 

tmp[15]=47; 

} 

//------------- 


if(buffer[34]==51 && buffer[35]==48)      // 30        
{ 

tmp[15]=48; 

} 

if(buffer[34]==51 && buffer[35]==49)      // 31        
{ 

tmp[15]=49; 

} 
if(buffer[34]==51 && buffer[35]==50)      // 32        
{ 

tmp[15]=50; 

} 
if(buffer[34]==51 && buffer[35]==51)      //33         
{ 

tmp[15]=51; 

} 
if(buffer[34]==51 && buffer[35]==52)      //34        
{ 

tmp[15]=52; 

} 
if(buffer[34]==51 && buffer[35]==53)      //35      
{ 

tmp[15]=53; 

} 
if(buffer[34]==51 && buffer[35]==54)      //36       
{ 
//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 
 
tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 
 
} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 
 
} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 
 
tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 
 
tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 
 
} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 
 
tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 
 
tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 
 
} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 
 
tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 
} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 
 
} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 
 
tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 
 
tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 
 
} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 
 
} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 
 
tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 
 
} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 
 
tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 
 
} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 
 
tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 
 
} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 
 
} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 
 
tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 
 
tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 
 
} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 
 
} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 
 
tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 
 
} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 

tmp[15]=54; 

} 
if(buffer[34]==51 && buffer[35]==55)      //37     
{ 

tmp[15]=55; 

} 
if(buffer[34]==51 && buffer[35]==56)      //38     
{ 

tmp[15]=56; 

} 
if(buffer[34]==51 && buffer[35]==57)      //39   
{ 

tmp[15]=57; 

} 

if(buffer[34]==51 && buffer[35]==65)      //3a 
{ 

tmp[15]=58; 

} 

if(buffer[34]==51 && buffer[35]==66)      //3b 
{ 

tmp[15]=59; 

} 
if(buffer[34]==51 && buffer[35]==67)      //3c 
{ 

tmp[15]=60; 

} 
if(buffer[34]==51 && buffer[35]==68)      //3d 
{ 

tmp[15]=61; 

} 
if(buffer[34]==51 && buffer[35]==69)      //3e  
{ 

tmp[15]=62; 

} 
if(buffer[34]==51 && buffer[35]==70)      //3f  
{ 

tmp[15]=63; 

} 

//------------ 


if(buffer[34]==52 && buffer[35]==48)      // 40       
{ 

tmp[15]=64; 

} 

if(buffer[34]==52 && buffer[35]==49)      // 41        
{ 

tmp[15]=65; 

} 
if(buffer[34]==52 && buffer[35]==50)      // 42        
{ 

tmp[15]=66; 

} 
if(buffer[34]==52 && buffer[35]==51)      //43         
{ 

tmp[15]=67; 

} 
if(buffer[34]==52 && buffer[35]==52)      //44        
{ 

tmp[15]=68; 

} 
if(buffer[34]==52 && buffer[35]==53)      //45      
{ 

tmp[15]=69; 

} 

if(buffer[34]==52 && buffer[35]==54)      //46       
{ 

tmp[15]=70; 

} 
if(buffer[34]==52 && buffer[35]==55)      //47     
{ 

tmp[15]=71; 

} 
if(buffer[34]==52 && buffer[35]==56)      //48     
{ 

tmp[15]=72; 

} 
if(buffer[34]==52 && buffer[35]==57)      //49   
{ 

tmp[15]=73; 

} 

if(buffer[34]==52 && buffer[35]==65)      //4a 
{ 

tmp[15]=74; 

} 

if(buffer[34]==52 && buffer[35]==66)      //4b 
{ 

tmp[15]=75; 

} 
if(buffer[34]==52 && buffer[35]==67)      //4c 
{ 

tmp[15]=76; 

} 
if(buffer[34]==52 && buffer[35]==68)      //4d 
{ 

tmp[15]=77; 

} 
if(buffer[34]==52 && buffer[35]==69)      //4e  
{ 

tmp[15]=78; 

} 
if(buffer[34]==52 && buffer[35]==70)      //4f  
{ 

tmp[15]=79; 

} 
//------------ 




if(buffer[34]==53 && buffer[35]==48)      //50       
{ 

tmp[15]=80; 

} 

if(buffer[34]==53 && buffer[35]==49)      //51        
{ 

tmp[15]=81; 

} 
if(buffer[34]==53 && buffer[35]==50)      //52        
{ 

tmp[15]=82; 

} 
if(buffer[34]==53 && buffer[35]==51)      //53         
{ 

tmp[15]=83; 

} 
if(buffer[34]==53 && buffer[35]==52)      //54        
{ 

tmp[15]=84; 

} 
if(buffer[34]==53 && buffer[35]==53)      //55      
{ 

tmp[15]=85; 

} 
if(buffer[34]==53 && buffer[35]==54)      //56       
{ 

tmp[15]=86; 

} 
if(buffer[34]==53 && buffer[35]==55)      //57     
{ 

tmp[15]=87; 

} 
if(buffer[34]==53 && buffer[35]==56)      //58     
{ 

tmp[15]=88; 

} 
if(buffer[34]==53 && buffer[35]==57)      //59   
{ 

tmp[15]=89; 

} 

if(buffer[34]==53 && buffer[35]==65)      //5a 
{ 

tmp[15]=90; 

} 

if(buffer[34]==53 && buffer[35]==66)      //5b 
{ 

tmp[15]=91; 

} 
if(buffer[34]==53 && buffer[35]==67)      //5c 
{ 

tmp[15]=92; 

} 
if(buffer[34]==53 && buffer[35]==68)      //5d 
{ 

tmp[15]=93; 

} 
if(buffer[34]==53 && buffer[35]==69)      //5e  
{ 

tmp[15]=94; 

} 
if(buffer[34]==53 && buffer[35]==70)      //5f  
{ 

tmp[15]=95; 

} 
//------------ 




if(buffer[34]==54 && buffer[35]==48)      //60       
{ 

tmp[15]=96; 

} 

if(buffer[34]==54 && buffer[35]==49)      //61        
{ 

tmp[15]=97; 

} 
if(buffer[34]==54 && buffer[35]==50)      //62        
{ 

tmp[15]=98; 

} 
if(buffer[34]==54 && buffer[35]==51)      //63         
{ 

tmp[15]=99; 

} 
if(buffer[34]==54 && buffer[35]==52)      //64        
{ 

tmp[15]=100; 

} 
if(buffer[34]==54 && buffer[35]==53)      //65      
{ 

tmp[15]=101; 

} 
if(buffer[34]==54 && buffer[35]==54)      //66       
{ 

tmp[15]=102; 

} 
if(buffer[34]==54 && buffer[35]==55)      //67     
{ 

tmp[15]=103; 

} 
if(buffer[34]==54 && buffer[35]==56)      //68     
{ 

tmp[15]=104; 

} 
if(buffer[34]==54 && buffer[35]==57)      //69   
{ 

tmp[15]=105; 

} 

if(buffer[34]==54 && buffer[35]==65)      //6a 
{ 

tmp[15]=106; 

} 

if(buffer[34]==54 && buffer[35]==66)      //6b 
{ 

tmp[15]=107; 

} 
if(buffer[34]==54 && buffer[35]==67)      //6c 
{ 

tmp[15]=108; 

} 
if(buffer[34]==54 && buffer[35]==68)      //6d 
{ 

tmp[15]=109; 

} 
if(buffer[34]==54 && buffer[35]==69)      //6e  
{ 

tmp[15]=110; 

} 
if(buffer[34]==54 && buffer[35]==70)      //6f  
{ 

tmp[15]=111; 

} 
//------------ 




if(buffer[34]==55 && buffer[35]==48)      //70       
{ 

tmp[15]=112; 

} 

if(buffer[34]==55 && buffer[35]==49)      //71        
{ 

tmp[15]=113; 

} 
if(buffer[34]==55 && buffer[35]==50)      //72        
{ 

tmp[15]=114; 

} 
if(buffer[34]==55 && buffer[35]==51)      //73         
{ 

tmp[15]=115; 

} 
if(buffer[34]==55 && buffer[35]==52)      //74        
{ 

tmp[15]=116; 

} 
if(buffer[34]==55 && buffer[35]==53)      //75      
{ 

tmp[15]=117; 

} 
if(buffer[34]==55 && buffer[35]==54)      //76       
{ 

tmp[15]=118; 

} 
if(buffer[34]==55 && buffer[35]==55)      //77     
{ 

tmp[15]=119; 

} 
if(buffer[34]==55 && buffer[35]==56)      //78     
{ 

tmp[15]=120; 

} 
if(buffer[34]==55 && buffer[35]==57)      //79   
{ 

tmp[15]=121; 

} 

if(buffer[34]==55 && buffer[35]==65)      //7a 
{ 

tmp[15]=122; 

} 

if(buffer[34]==55 && buffer[35]==66)      //7b 
{ 

tmp[15]=123; 

} 
if(buffer[34]==55 && buffer[35]==67)      //7c 
{ 

tmp[15]=124; 

} 
if(buffer[34]==55 && buffer[35]==68)      //7d 
{ 

tmp[15]=125; 

} 
if(buffer[34]==55 && buffer[35]==69)      //7e  
{ 

tmp[15]=126; 

} 
if(buffer[34]==55 && buffer[35]==70)      //7f  
{ 

tmp[15]=127; 

} 

//------------ 

if(buffer[34]==56 && buffer[35]==48)      //80       
{ 

tmp[15]=128; 

} 

if(buffer[34]==56 && buffer[35]==49)      //81        
{ 

tmp[15]=129; 

} 
if(buffer[34]==56 && buffer[35]==50)      //82        
{ 

tmp[15]=130; 

} 
if(buffer[34]==56 && buffer[35]==51)      //83         
{ 

tmp[15]=131; 

} 
if(buffer[34]==56 && buffer[35]==52)      //84        
{ 

tmp[15]=132; 

} 
if(buffer[34]==56 && buffer[35]==53)      //85      
{ 

tmp[15]=133; 

} 
if(buffer[34]==56 && buffer[35]==54)      //86       
{ 

tmp[15]=134; 

} 
if(buffer[34]==56 && buffer[35]==55)      //87     
{ 

tmp[15]=135; 

} 
if(buffer[34]==56 && buffer[35]==56)      //88     
{ 

tmp[15]=136; 

} 
if(buffer[34]==56 && buffer[35]==57)      //89   
{ 

tmp[15]=137; 

} 

if(buffer[34]==56 && buffer[35]==65)      //8a 
{ 

tmp[15]=138; 

} 

if(buffer[34]==56 && buffer[35]==66)      //8b 
{ 

tmp[15]=139; 

} 
if(buffer[34]==56 && buffer[35]==67)      //8c 
{ 

tmp[15]=140; 

} 
if(buffer[34]==56 && buffer[35]==68)      //8d 
{ 

tmp[15]=141; 

} 
if(buffer[34]==56 && buffer[35]==69)      //8e  
{ 

tmp[15]=142; 

} 
if(buffer[34]==56 && buffer[35]==70)      //8f  
{ 

tmp[15]=143; 

} 
//------------ 


if(buffer[34]==57 && buffer[35]==48)      //90       
{ 

tmp[15]=144; 

} 

if(buffer[34]==57 && buffer[35]==49)      //91        
{ 

tmp[15]=145; 

} 
if(buffer[34]==57 && buffer[35]==50)      //92        
{ 

tmp[15]=146; 

} 
if(buffer[34]==57 && buffer[35]==51)      //93         
{ 

tmp[15]=147; 

} 
if(buffer[34]==57 && buffer[35]==52)      //94        
{ 

tmp[15]=148; 

} 
if(buffer[34]==57 && buffer[35]==53)      //95      
{ 

tmp[15]=149; 

} 
if(buffer[34]==57 && buffer[35]==54)      //96       
{ 

tmp[15]=150; 

} 
if(buffer[34]==57 && buffer[35]==55)      //97     
{ 

tmp[15]=151; 

} 
if(buffer[34]==57 && buffer[35]==56)      //98     
{ 

tmp[15]=152; 

} 
if(buffer[34]==57 && buffer[35]==57)      //99   
{ 

tmp[15]=153; 

} 

if(buffer[34]==57 && buffer[35]==65)      //9a 
{ 

tmp[15]=154; 

} 

if(buffer[34]==57 && buffer[35]==66)      //9b 
{ 

tmp[15]=155; 

} 
if(buffer[34]==57 && buffer[35]==67)      //9c 
{ 

tmp[15]=156; 

} 
if(buffer[34]==57 && buffer[35]==68)      //9d 
{ 

tmp[15]=157; 

} 
if(buffer[34]==57 && buffer[35]==69)      //9e  
{ 

tmp[15]=158; 

} 
if(buffer[34]==57 && buffer[35]==70)      //9f  
{ 

tmp[15]=159; 

} 
//------------ 


if(buffer[34]==65 && buffer[35]==48)      //a0       
{ 

tmp[15]=160; 

} 

if(buffer[34]==65 && buffer[35]==49)      //a1        
{ 

tmp[15]=161; 

} 
if(buffer[34]==65 && buffer[35]==50)      //a2        
{ 

tmp[15]=162; 

} 
if(buffer[34]==65 && buffer[35]==51)      //a3         
{ 

tmp[15]=163; 

} 
if(buffer[34]==65 && buffer[35]==52)      //a4        
{ 

tmp[15]=164; 

} 
if(buffer[34]==65 && buffer[35]==53)      //a5      
{ 

tmp[15]=165; 

} 
if(buffer[34]==65 && buffer[35]==54)      //a6       
{ 

tmp[15]=166; 

} 
if(buffer[34]==65 && buffer[35]==55)      //a7     
{ 

tmp[15]=167; 

} 
if(buffer[34]==65 && buffer[35]==56)      //a8     
{ 

tmp[15]=168; 

} 
if(buffer[34]==65 && buffer[35]==57)      //a9   
{ 

tmp[15]=169; 

} 

if(buffer[34]==65 && buffer[35]==65)      //aa 
{ 

tmp[15]=170; 

} 

if(buffer[34]==65 && buffer[35]==66)      //ab 
{ 

tmp[15]=171; 

} 
if(buffer[34]==65 && buffer[35]==67)      //ac 
{ 

tmp[15]=172; 

} 
if(buffer[34]==65 && buffer[35]==68)      //ad 
{ 

tmp[15]=173; 

} 
if(buffer[34]==65 && buffer[35]==69)      //ae  
{ 

tmp[15]=174; 

} 
if(buffer[34]==65 && buffer[35]==70)      //af  
{ 

tmp[15]=175; 

} 
//------------ 


if(buffer[34]==66 && buffer[35]==48)      //b0       
{ 

tmp[15]=176; 

} 

if(buffer[34]==66 && buffer[35]==49)      //b1        
{ 

tmp[15]=177; 

} 
if(buffer[34]==66 && buffer[35]==50)      //b2        
{ 

tmp[15]=178; 

} 
if(buffer[34]==66 && buffer[35]==51)      //b3         
{ 

tmp[15]=179; 

} 
if(buffer[34]==66 && buffer[35]==52)      //b4        
{ 

tmp[15]=180; 

} 
if(buffer[34]==66 && buffer[35]==53)      //b5      
{ 

tmp[15]=181; 

} 
if(buffer[34]==66 && buffer[35]==54)      //b6       
{ 

tmp[15]=182; 

} 
if(buffer[34]==66 && buffer[35]==55)      //b7     
{ 

tmp[15]=183; 

} 
if(buffer[34]==66 && buffer[35]==56)      //b8     
{ 

tmp[15]=184; 

} 
if(buffer[34]==66 && buffer[35]==57)      //b9   
{ 

tmp[15]=185; 

} 

if(buffer[34]==66 && buffer[35]==65)      //ba 
{ 

tmp[15]=186; 

} 

if(buffer[34]==66 && buffer[35]==66)      //bb 
{ 

tmp[15]=187; 

} 
if(buffer[34]==66 && buffer[35]==67)      //bc 
{ 

tmp[15]=188; 

} 
if(buffer[34]==66 && buffer[35]==68)      //bd 
{ 

tmp[15]=189; 

} 
if(buffer[34]==66 && buffer[35]==69)      //be  
{ 

tmp[15]=190; 

} 
if(buffer[34]==66 && buffer[35]==70)      //bf  
{ 

tmp[15]=191; 

} 
//------------ 



if(buffer[34]==67 && buffer[35]==48)      //c0       
{ 

tmp[15]=192; 

} 

if(buffer[34]==67 && buffer[35]==49)      //c1        
{ 

tmp[15]=193; 

} 
if(buffer[34]==67 && buffer[35]==50)      //c2        
{ 

tmp[15]=194; 

} 
if(buffer[34]==67 && buffer[35]==51)      //c3         
{ 

tmp[15]=195; 

} 
if(buffer[34]==67 && buffer[35]==52)      //c4        
{ 

tmp[15]=196; 

} 
if(buffer[34]==67 && buffer[35]==53)      //c5      
{ 

tmp[15]=197; 

} 
if(buffer[34]==67 && buffer[35]==54)      //c6       
{ 

tmp[15]=198; 

} 
if(buffer[34]==67 && buffer[35]==55)      //c7     
{ 

tmp[15]=199; 
 
} 
if(buffer[34]==67 && buffer[35]==56)      //c8     
{ 

tmp[15]=200; 

} 
if(buffer[34]==67 && buffer[35]==57)      //c9   
{ 

tmp[15]=201; 

} 

if(buffer[34]==67 && buffer[35]==65)      //ca 
{ 

tmp[15]=202; 

} 

if(buffer[34]==67 && buffer[35]==66)      //cb 
{ 

tmp[15]=203; 

} 
if(buffer[34]==67 && buffer[35]==67)      //cc 
{ 

tmp[15]=204; 

} 
if(buffer[34]==67 && buffer[35]==68)      //cd 
{ 

tmp[15]=205; 

} 
if(buffer[34]==67 && buffer[35]==69)      //ce  
{ 

tmp[15]=206; 

} 
if(buffer[34]==67 && buffer[35]==70)      //cf  
{ 

tmp[15]=207; 

} 
//------------ 


if(buffer[34]==68 && buffer[35]==48)      //d0       
{ 

tmp[15]=208; 

} 

if(buffer[34]==68 && buffer[35]==49)      //d1        
{ 

tmp[15]=209; 

} 
if(buffer[34]==68 && buffer[35]==50)      //d2        
{ 

tmp[15]=210; 

} 
if(buffer[34]==68 && buffer[35]==51)      //d3         
{ 

tmp[15]=211; 

} 
if(buffer[34]==68 && buffer[35]==52)      //d4        
{ 

tmp[15]=212; 

} 
if(buffer[34]==68 && buffer[35]==53)      //d5      
{ 

tmp[15]=213; 

} 
if(buffer[34]==68 && buffer[35]==54)      //d6       
{ 

tmp[15]=214; 

} 
if(buffer[34]==68 && buffer[35]==55)      //d7     
{ 

tmp[15]=215; 

} 
if(buffer[34]==68 && buffer[35]==56)      //d8     
{ 

tmp[15]=216; 

} 
if(buffer[34]==68 && buffer[35]==57)      //d9   
{ 

tmp[15]=217; 

} 

if(buffer[34]==68 && buffer[35]==65)      //da 
{ 

tmp[15]=218; 

} 

if(buffer[34]==68 && buffer[35]==66)      //db 
{ 

tmp[15]=219; 

} 
if(buffer[34]==68 && buffer[35]==67)      //dc 
{ 

tmp[15]=220; 

} 
if(buffer[34]==68 && buffer[35]==68)      //dd 
{ 

tmp[15]=221; 

} 
if(buffer[34]==68 && buffer[35]==69)      //de  
{ 

tmp[15]=222; 

} 
if(buffer[34]==68 && buffer[35]==70)      //df  
{ 

tmp[15]=223; 

} 
//------------ 

 

if(buffer[34]==69 && buffer[35]==48)      //e0       
{ 

tmp[15]=224; 

} 

if(buffer[34]==69 && buffer[35]==49)      //e1        
{ 

tmp[15]=225; 

} 
if(buffer[34]==69 && buffer[35]==50)      //e2        
{ 

tmp[15]=226; 

} 
if(buffer[34]==69 && buffer[35]==51)      //e3         
{ 

tmp[15]=227; 

} 
if(buffer[34]==69 && buffer[35]==52)      //e4        
{ 

tmp[15]=228; 

} 
if(buffer[34]==69 && buffer[35]==53)      //e5      
{ 

tmp[15]=229; 

} 
if(buffer[34]==69 && buffer[35]==54)      //e6       
{ 

tmp[15]=230; 

} 
if(buffer[34]==69 && buffer[35]==55)      //e7     
{ 

tmp[15]=231; 

} 
if(buffer[34]==69 && buffer[35]==56)      //e8     
{ 

tmp[15]=232; 

} 
if(buffer[34]==69 && buffer[35]==57)      //e9   
{ 

tmp[15]=233; 

} 

if(buffer[34]==69 && buffer[35]==65)      //ea 
{ 

tmp[15]=234; 

} 

if(buffer[34]==69 && buffer[35]==66)      //eb 
{ 

tmp[15]=235; 

} 
if(buffer[34]==69 && buffer[35]==67)      //ec 
{ 

tmp[15]=236; 

} 
if(buffer[34]==69 && buffer[35]==68)      //ed 
{ 

tmp[15]=237; 

} 
if(buffer[34]==69 && buffer[35]==69)      //ee  
{ 

tmp[15]=238; 

} 
if(buffer[34]==69 && buffer[35]==70)      //ef  
{ 

tmp[15]=239; 

} 
//------------ 

if(buffer[34]==70 && buffer[35]==48)      //f0       
{ 

tmp[15]=240; 

} 

if(buffer[34]==70 && buffer[35]==49)      //f1        
{ 

tmp[15]=241; 

} 
if(buffer[34]==70 && buffer[35]==50)      //f2        
{ 

tmp[15]=242; 

} 
if(buffer[34]==70 && buffer[35]==51)      //f3         
{ 

tmp[15]=243; 

} 
if(buffer[34]==70 && buffer[35]==52)      //f4        
{ 

tmp[15]=244; 

} 
if(buffer[34]==70 && buffer[35]==53)      //f5      
{ 

tmp[15]=245; 

} 
if(buffer[34]==70 && buffer[35]==54)      //f6       
{ 

tmp[15]=246; 

} 
if(buffer[34]==70 && buffer[35]==55)      //f7     
{ 

tmp[15]=247; 

} 
if(buffer[34]==70 && buffer[35]==56)      //f8     
{ 

tmp[15]=248; 
 
} 
if(buffer[34]==70 && buffer[35]==57)      //f9   
{ 

tmp[15]=249; 

} 

if(buffer[34]==70 && buffer[35]==65)      //fa 
{ 

tmp[15]=250; 

} 

if(buffer[34]==70 && buffer[35]==66)      //fb 
{ 

tmp[15]=251; 

} 
if(buffer[34]==70 && buffer[35]==67)      //fc 
{ 

tmp[15]=252; 

} 
if(buffer[34]==70 && buffer[35]==68)      //fd 
{ 

tmp[15]=253; 

} 
if(buffer[34]==70 && buffer[35]==69)      //fe  
{ 

tmp[15]=254; 

} 
if(buffer[34]==70 && buffer[35]==70)      //ff  
{ 

tmp[15]=255; 

} 

//----------------------- end of tmp[15]--------------------------- 


//----------------------- start of tmp[16]--------------------------- 

 
if(buffer[36]==48 && buffer[37]==48)      //00        
{ 

tmp[16]=0; 

} 

if(buffer[36]==48 && buffer[37]==49)      //01        
{ 

tmp[16]=1; 

} 
if(buffer[36]==48 && buffer[37]==50)      //02        
{ 

tmp[16]=2; 

} 
if(buffer[36]==48 && buffer[37]==51)      //03         
{ 

tmp[16]=3; 

} 
if(buffer[36]==48 && buffer[37]==52)      //04        
{ 

tmp[16]=4; 

} 
if(buffer[36]==48 && buffer[37]==53)      //05      
{ 

tmp[16]=5; 

} 


if(buffer[36]==48 && buffer[37]==54)      //06       
{ 

tmp[16]=6; 

} 
if(buffer[36]==48 && buffer[37]==55)      //07     
{ 

tmp[16]=7; 

} 
if(buffer[36]==48 && buffer[37]==56)      //08     
{ 

tmp[16]=8; 

} 
if(buffer[36]==48 && buffer[37]==57)      //09   
{ 

tmp[16]=9; 

} 

if(buffer[36]==48 && buffer[37]==65)      //0a 
{ 

tmp[16]=10; 

} 

if(buffer[36]==48 && buffer[37]==66)      //0b 
{ 

tmp[16]=11; 

} 
if(buffer[36]==48 && buffer[37]==67)      //0c 
{ 

tmp[16]=12; 

} 
if(buffer[36]==48 && buffer[37]==68)      //0d 
{ 

tmp[16]=13; 

} 
if(buffer[36]==48 && buffer[37]==69)      //0e  
{ 

tmp[16]=14; 

} 
if(buffer[36]==48 && buffer[37]==70)      //0f  
{ 

tmp[16]=15; 

} 

//----------- 
 
if(buffer[36]==49 && buffer[37]==48)      //        10 
{ 

tmp[16]=16; 

} 
if(buffer[36]==49 && buffer[37]==49)      //         11 
{ 

tmp[16]=17; 

} 
if(buffer[36]==49 && buffer[37]==50)      //         12 
{ 

tmp[16]=18; 

} 
if(buffer[36]==49 && buffer[37]==51)      //         13 
{ 

tmp[16]=19; 

} 
if(buffer[36]==49 && buffer[37]==52)      //         14 
{ 

tmp[16]=20; 

} 
if(buffer[36]==49 && buffer[37]==53)      //         15 
{ 

tmp[16]=21; 

} 
if(buffer[36]==49 && buffer[37]==54)      //         16 
{ 

tmp[16]=22; 

} 
if(buffer[36]==49 && buffer[37]==55)      //         17 
{ 

tmp[16]=23; 

} 
if(buffer[36]==49 && buffer[37]==56)      //         18 
{ 

tmp[16]=24; 

} 
if(buffer[36]==49 && buffer[37]==57)      //         19 
{ 

tmp[16]=25; 

} 

if(buffer[36]==49 && buffer[37]==65)      //         1a 
{ 

tmp[16]=26; 

} 
if(buffer[36]==49 && buffer[37]==66)      //         1b 
{ 

tmp[16]=27; 

} 
if(buffer[36]==49 && buffer[37]==67)      //         1c 
{ 

tmp[16]=28; 

} 
if(buffer[36]==49 && buffer[37]==68)      //         1d 
{ 

tmp[16]=29; 

} 
if(buffer[36]==49 && buffer[37]==69)      //         1e 
{ 

tmp[16]=30; 

} 
if(buffer[36]==49 && buffer[37]==70)      //         1f 
{ 

tmp[16]=31; 

} 


//--------------- 


if(buffer[36]==50 && buffer[37]==48)      //         20 
{ 

tmp[16]=32; 

} 

if(buffer[36]==50 && buffer[37]==49)      //         21 
{ 

tmp[16]=33; 

} 
if(buffer[36]==50 && buffer[37]==50)      //         22 
{ 

tmp[16]=34; 

} 
if(buffer[36]==50 && buffer[37]==51)      //         23 
{ 

tmp[16]=35; 

} 
if(buffer[36]==50 && buffer[37]==52)      //         24 
{ 

tmp[16]=36; 

} 
if(buffer[36]==50 && buffer[37]==53)      //         25 
{ 

tmp[16]=37; 

} 
if(buffer[36]==50 && buffer[37]==54)      //         26 
{ 

tmp[16]=38; 

} 
if(buffer[36]==50 && buffer[37]==55)      //         27 
{ 

tmp[16]=39; 

} 
if(buffer[36]==50 && buffer[37]==56)      //         28 
{ 

tmp[16]=40; 
 
} 
if(buffer[36]==50 && buffer[37]==57)      //         29 
{ 

tmp[16]=41; 

} 
if(buffer[36]==50 && buffer[37]==65)      //         2a 
{ 

tmp[16]=42; 

} 
if(buffer[36]==50 && buffer[37]==66)      //         2b 
{ 

tmp[16]=43; 

} 
if(buffer[36]==50 && buffer[37]==67)      //         2c 
{ 

tmp[16]=44; 

} 

if(buffer[36]==50 && buffer[37]==68)      //       2d  
{ 

tmp[16]=45; 

} 
if(buffer[36]==50 && buffer[37]==69)      //         2e 
{ 

tmp[16]=46; 

} 
if(buffer[36]==50 && buffer[37]==70)      //         2f 
{ 

tmp[16]=47; 

} 

//------------- 


if(buffer[36]==51 && buffer[37]==48)      // 30        
{ 

tmp[16]=48; 

} 

if(buffer[36]==51 && buffer[37]==49)      // 31        
{ 

tmp[16]=49; 

} 
if(buffer[36]==51 && buffer[37]==50)      // 32        
{ 

tmp[16]=50; 

} 
if(buffer[36]==51 && buffer[37]==51)      //33         
{ 

tmp[16]=51; 

} 
if(buffer[36]==51 && buffer[37]==52)      //34        
{ 

tmp[16]=52; 

} 
if(buffer[36]==51 && buffer[37]==53)      //35      
{ 

tmp[16]=53; 

} 
if(buffer[36]==51 && buffer[37]==54)      //36       
{ 
//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 
 
if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 
 
} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 
 
if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 
 
if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 
 
if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 
 
if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 
 
tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 
 
tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 
 
} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 
 
tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 
} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 
 
tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 
 
if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 
 
tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 
 
} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 
 
} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 
 
if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 
 
tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 

tmp[16]=54; 
 
} 
if(buffer[36]==51 && buffer[37]==55)      //37     
{ 

tmp[16]=55; 

} 
if(buffer[36]==51 && buffer[37]==56)      //38     
{ 

tmp[16]=56; 

} 
if(buffer[36]==51 && buffer[37]==57)      //39   
{ 

tmp[16]=57; 

} 

if(buffer[36]==51 && buffer[37]==65)      //3a 
{ 

tmp[16]=58; 

} 

if(buffer[36]==51 && buffer[37]==66)      //3b 
{ 

tmp[16]=59; 

} 
if(buffer[36]==51 && buffer[37]==67)      //3c 
{ 

tmp[16]=60; 

} 
if(buffer[36]==51 && buffer[37]==68)      //3d 
{ 

tmp[16]=61; 

} 
if(buffer[36]==51 && buffer[37]==69)      //3e  
{ 

tmp[16]=62; 

} 
if(buffer[36]==51 && buffer[37]==70)      //3f  
{ 

tmp[16]=63; 

} 

//------------ 


if(buffer[36]==52 && buffer[37]==48)      // 40       
{ 

tmp[16]=64; 

} 

if(buffer[36]==52 && buffer[37]==49)      // 41        
{ 

tmp[16]=65; 

} 
if(buffer[36]==52 && buffer[37]==50)      // 42        
{ 

tmp[16]=66; 

} 
if(buffer[36]==52 && buffer[37]==51)      //43         
{ 

tmp[16]=67; 

} 
if(buffer[36]==52 && buffer[37]==52)      //44        
{ 

tmp[16]=68; 

} 
if(buffer[36]==52 && buffer[37]==53)      //45      
{ 

tmp[16]=69; 

} 

if(buffer[36]==52 && buffer[37]==54)      //46       
{ 

tmp[16]=70; 
 
} 
if(buffer[36]==52 && buffer[37]==55)      //47     
{ 

tmp[16]=71; 

} 
if(buffer[36]==52 && buffer[37]==56)      //48     
{ 

tmp[16]=72; 

} 
if(buffer[36]==52 && buffer[37]==57)      //49   
{ 

tmp[16]=73; 

} 

if(buffer[36]==52 && buffer[37]==65)      //4a 
{ 

tmp[16]=74; 

} 

if(buffer[36]==52 && buffer[37]==66)      //4b 
{ 

tmp[16]=75; 

} 
if(buffer[36]==52 && buffer[37]==67)      //4c 
{ 

tmp[16]=76; 

} 
if(buffer[36]==52 && buffer[37]==68)      //4d 
{ 

tmp[16]=77; 

} 
if(buffer[36]==52 && buffer[37]==69)      //4e  
{ 

tmp[16]=78; 

} 
if(buffer[36]==52 && buffer[37]==70)      //4f  
{ 

tmp[16]=79; 

} 
//------------ 




if(buffer[36]==53 && buffer[37]==48)      //50       
{ 

tmp[16]=80; 

} 

if(buffer[36]==53 && buffer[37]==49)      //51        
{ 

tmp[16]=81; 

} 
if(buffer[36]==53 && buffer[37]==50)      //52        
{ 

tmp[16]=82; 

} 
if(buffer[36]==53 && buffer[37]==51)      //53         
{ 

tmp[16]=83; 

} 
if(buffer[36]==53 && buffer[37]==52)      //54        
{ 

tmp[16]=84; 

} 
if(buffer[36]==53 && buffer[37]==53)      //55      
{ 

tmp[16]=85; 

} 
if(buffer[36]==53 && buffer[37]==54)      //56       
{ 

tmp[16]=86; 
 
} 
if(buffer[36]==53 && buffer[37]==55)      //57     
{ 

tmp[16]=87; 

} 
if(buffer[36]==53 && buffer[37]==56)      //58     
{ 

tmp[16]=88; 

} 
if(buffer[36]==53 && buffer[37]==57)      //59   
{ 

tmp[16]=89; 

} 

if(buffer[36]==53 && buffer[37]==65)      //5a 
{ 

tmp[16]=90; 

} 

if(buffer[36]==53 && buffer[37]==66)      //5b 
{ 

tmp[16]=91; 

} 
if(buffer[36]==53 && buffer[37]==67)      //5c 
{ 

tmp[16]=92; 

} 
if(buffer[36]==53 && buffer[37]==68)      //5d 
{ 

tmp[16]=93; 

} 
if(buffer[36]==53 && buffer[37]==69)      //5e  
{ 

tmp[16]=94; 

} 
if(buffer[36]==53 && buffer[37]==70)      //5f  
{ 

tmp[16]=95; 

} 
//------------ 




if(buffer[36]==54 && buffer[37]==48)      //60       
{ 

tmp[16]=96; 

} 

if(buffer[36]==54 && buffer[37]==49)      //61        
{ 

tmp[16]=97; 

} 
if(buffer[36]==54 && buffer[37]==50)      //62        
{ 

tmp[16]=98; 

} 
if(buffer[36]==54 && buffer[37]==51)      //63         
{ 

tmp[16]=99; 

} 
if(buffer[36]==54 && buffer[37]==52)      //64        
{ 

tmp[16]=100; 

} 
if(buffer[36]==54 && buffer[37]==53)      //65      
{ 

tmp[16]=101; 

} 
if(buffer[36]==54 && buffer[37]==54)      //66       
{ 

tmp[16]=102; 
 
} 
if(buffer[36]==54 && buffer[37]==55)      //67     
{ 

tmp[16]=103; 

} 
if(buffer[36]==54 && buffer[37]==56)      //68     
{ 

tmp[16]=104; 

} 
if(buffer[36]==54 && buffer[37]==57)      //69   
{ 

tmp[16]=105; 

} 

if(buffer[36]==54 && buffer[37]==65)      //6a 
{ 

tmp[16]=106; 

} 

if(buffer[36]==54 && buffer[37]==66)      //6b 
{ 

tmp[16]=107; 

} 
if(buffer[36]==54 && buffer[37]==67)      //6c 
{ 

tmp[16]=108; 

} 
if(buffer[36]==54 && buffer[37]==68)      //6d 
{ 

tmp[16]=109; 

} 
if(buffer[36]==54 && buffer[37]==69)      //6e  
{ 

tmp[16]=110; 

} 
if(buffer[36]==54 && buffer[37]==70)      //6f  
{ 

tmp[16]=111; 

} 
//------------ 




if(buffer[36]==55 && buffer[37]==48)      //70       
{ 

tmp[16]=112; 

} 

if(buffer[36]==55 && buffer[37]==49)      //71        
{ 

tmp[16]=113; 

} 
if(buffer[36]==55 && buffer[37]==50)      //72        
{ 

tmp[16]=114; 

} 
if(buffer[36]==55 && buffer[37]==51)      //73         
{ 

tmp[16]=115; 

} 
if(buffer[36]==55 && buffer[37]==52)      //74        
{ 

tmp[16]=116; 

} 
if(buffer[36]==55 && buffer[37]==53)      //75      
{ 

tmp[16]=117; 

} 
if(buffer[36]==55 && buffer[37]==54)      //76       
{ 

tmp[16]=118; 
 
} 
if(buffer[36]==55 && buffer[37]==55)      //77     
{ 

tmp[16]=119; 

} 
if(buffer[36]==55 && buffer[37]==56)      //78     
{ 

tmp[16]=120; 

} 
if(buffer[36]==55 && buffer[37]==57)      //79   
{ 

tmp[16]=121; 

} 

if(buffer[36]==55 && buffer[37]==65)      //7a 
{ 

tmp[16]=122; 

} 

if(buffer[36]==55 && buffer[37]==66)      //7b 
{ 

tmp[16]=123; 

} 
if(buffer[36]==55 && buffer[37]==67)      //7c 
{ 

tmp[16]=124; 

} 
if(buffer[36]==55 && buffer[37]==68)      //7d 
{ 

tmp[16]=125; 

} 
if(buffer[36]==55 && buffer[37]==69)      //7e  
{ 

tmp[16]=126; 

} 
if(buffer[36]==55 && buffer[37]==70)      //7f  
{ 

tmp[16]=127; 

} 

//------------ 

if(buffer[36]==56 && buffer[37]==48)      //80       
{ 

tmp[16]=128; 

} 

if(buffer[36]==56 && buffer[37]==49)      //81        
{ 

tmp[16]=129; 

} 
if(buffer[36]==56 && buffer[37]==50)      //82        
{ 

tmp[16]=130; 

} 
if(buffer[36]==56 && buffer[37]==51)      //83         
{ 

tmp[16]=131; 

} 
if(buffer[36]==56 && buffer[37]==52)      //84        
{ 

tmp[16]=132; 

} 
if(buffer[36]==56 && buffer[37]==53)      //85      
{ 

tmp[16]=133; 

} 
if(buffer[36]==56 && buffer[37]==54)      //86       
{ 

tmp[16]=134; 

} 
if(buffer[36]==56 && buffer[37]==55)      //87     
{ 

tmp[16]=135; 

} 
if(buffer[36]==56 && buffer[37]==56)      //88     
{ 

tmp[16]=136; 

} 
if(buffer[36]==56 && buffer[37]==57)      //89   
{ 

tmp[16]=137; 

} 

if(buffer[36]==56 && buffer[37]==65)      //8a 
{ 

tmp[16]=138; 

} 

if(buffer[36]==56 && buffer[37]==66)      //8b 
{ 

tmp[16]=139; 

} 
if(buffer[36]==56 && buffer[37]==67)      //8c 
{ 

tmp[16]=140; 

} 
if(buffer[36]==56 && buffer[37]==68)      //8d 
{ 

tmp[16]=141; 

} 
if(buffer[36]==56 && buffer[37]==69)      //8e  
{ 

tmp[16]=142; 

} 
if(buffer[36]==56 && buffer[37]==70)      //8f  
{ 
 
tmp[16]=143; 

} 
//------------ 


if(buffer[36]==57 && buffer[37]==48)      //90       
{ 

tmp[16]=144; 

} 

if(buffer[36]==57 && buffer[37]==49)      //91        
{ 

tmp[16]=145; 

} 
if(buffer[36]==57 && buffer[37]==50)      //92        
{ 

tmp[16]=146; 

} 
if(buffer[36]==57 && buffer[37]==51)      //93         
{ 

tmp[16]=147; 

} 
if(buffer[36]==57 && buffer[37]==52)      //94        
{ 

tmp[16]=148; 

} 
if(buffer[36]==57 && buffer[37]==53)      //95      
{ 

tmp[16]=149; 

} 
if(buffer[36]==57 && buffer[37]==54)      //96       
{ 

tmp[16]=150; 

} 
if(buffer[36]==57 && buffer[37]==55)      //97     
{ 
 
tmp[16]=151; 

} 
if(buffer[36]==57 && buffer[37]==56)      //98     
{ 

tmp[16]=152; 

} 
if(buffer[36]==57 && buffer[37]==57)      //99   
{ 

tmp[16]=153; 

} 

if(buffer[36]==57 && buffer[37]==65)      //9a 
{ 

tmp[16]=154; 

} 

if(buffer[36]==57 && buffer[37]==66)      //9b 
{ 

tmp[16]=155; 

} 
if(buffer[36]==57 && buffer[37]==67)      //9c 
{ 

tmp[16]=156; 

} 
if(buffer[36]==57 && buffer[37]==68)      //9d 
{ 

tmp[16]=157; 

} 
if(buffer[36]==57 && buffer[37]==69)      //9e  
{ 

tmp[16]=158; 

} 
if(buffer[36]==57 && buffer[37]==70)      //9f  
{ 

tmp[16]=159; 
 
} 
//------------ 


if(buffer[36]==65 && buffer[37]==48)      //a0       
{ 

tmp[16]=160; 

} 

if(buffer[36]==65 && buffer[37]==49)      //a1        
{ 

tmp[16]=161; 

} 
if(buffer[36]==65 && buffer[37]==50)      //a2        
{ 

tmp[16]=162; 

} 
if(buffer[36]==65 && buffer[37]==51)      //a3         
{ 

tmp[16]=163; 

} 
if(buffer[36]==65 && buffer[37]==52)      //a4        
{ 

tmp[16]=164; 

} 
if(buffer[36]==65 && buffer[37]==53)      //a5      
{ 

tmp[16]=165; 

} 
if(buffer[36]==65 && buffer[37]==54)      //a6       
{ 

tmp[16]=166; 

} 
if(buffer[36]==65 && buffer[37]==55)      //a7     
{ 

tmp[16]=167; 
 
} 
if(buffer[36]==65 && buffer[37]==56)      //a8     
{ 

tmp[16]=168; 

} 
if(buffer[36]==65 && buffer[37]==57)      //a9   
{ 

tmp[16]=169; 

} 

if(buffer[36]==65 && buffer[37]==65)      //aa 
{ 

tmp[16]=170; 

} 

if(buffer[36]==65 && buffer[37]==66)      //ab 
{ 

tmp[16]=171; 

} 
if(buffer[36]==65 && buffer[37]==67)      //ac 
{ 

tmp[16]=172; 

} 
if(buffer[36]==65 && buffer[37]==68)      //ad 
{ 

tmp[16]=173; 

} 
if(buffer[36]==65 && buffer[37]==69)      //ae  
{ 

tmp[16]=174; 

} 
if(buffer[36]==65 && buffer[37]==70)      //af  
{ 

tmp[16]=175; 

} 
//------------ 


if(buffer[36]==66 && buffer[37]==48)      //b0       
{ 

tmp[16]=176; 

} 

if(buffer[36]==66 && buffer[37]==49)      //b1        
{ 

tmp[16]=177; 

} 
if(buffer[36]==66 && buffer[37]==50)      //b2        
{ 

tmp[16]=178; 

} 
if(buffer[36]==66 && buffer[37]==51)      //b3         
{ 

tmp[16]=179; 

} 
if(buffer[36]==66 && buffer[37]==52)      //b4        
{ 

tmp[16]=180; 

} 
if(buffer[36]==66 && buffer[37]==53)      //b5      
{ 

tmp[16]=181; 

} 
if(buffer[36]==66 && buffer[37]==54)      //b6       
{ 

tmp[16]=182; 

} 
if(buffer[36]==66 && buffer[37]==55)      //b7     
{ 

tmp[16]=183; 

} 
if(buffer[36]==66 && buffer[37]==56)      //b8     
{ 

tmp[16]=184; 

} 
if(buffer[36]==66 && buffer[37]==57)      //b9   
{ 

tmp[16]=185; 

} 

if(buffer[36]==66 && buffer[37]==65)      //ba 
{ 

tmp[16]=186; 

} 

if(buffer[36]==66 && buffer[37]==66)      //bb 
{ 

tmp[16]=187; 

} 
if(buffer[36]==66 && buffer[37]==67)      //bc 
{ 

tmp[16]=188; 

} 
if(buffer[36]==66 && buffer[37]==68)      //bd 
{ 

tmp[16]=189; 

} 
if(buffer[36]==66 && buffer[37]==69)      //be  
{ 

tmp[16]=190; 

} 
if(buffer[36]==66 && buffer[37]==70)      //bf  
{ 

tmp[16]=191; 

} 
//------------ 

 

if(buffer[36]==67 && buffer[37]==48)      //c0       
{ 

tmp[16]=192; 

} 

if(buffer[36]==67 && buffer[37]==49)      //c1        
{ 

tmp[16]=193; 

} 
if(buffer[36]==67 && buffer[37]==50)      //c2        
{ 

tmp[16]=194; 

} 
if(buffer[36]==67 && buffer[37]==51)      //c3         
{ 

tmp[16]=195; 

} 
if(buffer[36]==67 && buffer[37]==52)      //c4        
{ 

tmp[16]=196; 

} 
if(buffer[36]==67 && buffer[37]==53)      //c5      
{ 

tmp[16]=197; 

} 
if(buffer[36]==67 && buffer[37]==54)      //c6       
{ 

tmp[16]=198; 

} 
if(buffer[36]==67 && buffer[37]==55)      //c7     
{ 

tmp[16]=199; 

} 
if(buffer[36]==67 && buffer[37]==56)      //c8     
{ 

tmp[16]=200; 

} 
if(buffer[36]==67 && buffer[37]==57)      //c9   
{ 

tmp[16]=201; 

} 

if(buffer[36]==67 && buffer[37]==65)      //ca 
{ 

tmp[16]=202; 

} 

if(buffer[36]==67 && buffer[37]==66)      //cb 
{ 

tmp[16]=203; 

} 
if(buffer[36]==67 && buffer[37]==67)      //cc 
{ 

tmp[16]=204; 

} 
if(buffer[36]==67 && buffer[37]==68)      //cd 
{ 

tmp[16]=205; 

} 
if(buffer[36]==67 && buffer[37]==69)      //ce  
{ 

tmp[16]=206; 

} 
if(buffer[36]==67 && buffer[37]==70)      //cf  
{ 

tmp[16]=207; 

} 
//------------ 


if(buffer[36]==68 && buffer[37]==48)      //d0       
{ 

tmp[16]=208; 

} 

if(buffer[36]==68 && buffer[37]==49)      //d1        
{ 

tmp[16]=209; 

} 
if(buffer[36]==68 && buffer[37]==50)      //d2        
{ 

tmp[16]=210; 

} 
if(buffer[36]==68 && buffer[37]==51)      //d3         
{ 

tmp[16]=211; 

} 
if(buffer[36]==68 && buffer[37]==52)      //d4        
{ 

tmp[16]=212; 

} 
if(buffer[36]==68 && buffer[37]==53)      //d5      
{ 

tmp[16]=213; 

} 
if(buffer[36]==68 && buffer[37]==54)      //d6       
{ 

tmp[16]=214; 

} 
if(buffer[36]==68 && buffer[37]==55)      //d7     
{ 

tmp[16]=215; 

} 
if(buffer[36]==68 && buffer[37]==56)      //d8     
{ 

tmp[16]=216; 

} 
if(buffer[36]==68 && buffer[37]==57)      //d9   
{ 

tmp[16]=217; 

} 

if(buffer[36]==68 && buffer[37]==65)      //da 
{ 

tmp[16]=218; 

} 

if(buffer[36]==68 && buffer[37]==66)      //db 
{ 

tmp[16]=219; 

} 
if(buffer[36]==68 && buffer[37]==67)      //dc 
{ 

tmp[16]=220; 

} 
if(buffer[36]==68 && buffer[37]==68)      //dd 
{ 

tmp[16]=221; 

} 
if(buffer[36]==68 && buffer[37]==69)      //de  
{ 

tmp[16]=222; 

} 
if(buffer[36]==68 && buffer[37]==70)      //df  
{ 

tmp[16]=223; 

} 
//------------ 



if(buffer[36]==69 && buffer[37]==48)      //e0       
{ 

tmp[16]=224; 

} 

if(buffer[36]==69 && buffer[37]==49)      //e1        
{ 

tmp[16]=225; 

} 
if(buffer[36]==69 && buffer[37]==50)      //e2        
{ 

tmp[16]=226; 

} 
if(buffer[36]==69 && buffer[37]==51)      //e3         
{ 

tmp[16]=227; 

} 
if(buffer[36]==69 && buffer[37]==52)      //e4        
{ 

tmp[16]=228; 

} 
if(buffer[36]==69 && buffer[37]==53)      //e5      
{ 

tmp[16]=229; 

} 
if(buffer[36]==69 && buffer[37]==54)      //e6       
{ 

tmp[16]=230; 

} 
if(buffer[36]==69 && buffer[37]==55)      //e7     
{ 

tmp[16]=231; 

} 
if(buffer[36]==69 && buffer[37]==56)      //e8     
{ 

tmp[16]=232; 
 
} 
if(buffer[36]==69 && buffer[37]==57)      //e9   
{ 

tmp[16]=233; 

} 

if(buffer[36]==69 && buffer[37]==65)      //ea 
{ 

tmp[16]=234; 

} 

if(buffer[36]==69 && buffer[37]==66)      //eb 
{ 

tmp[16]=235; 

} 
if(buffer[36]==69 && buffer[37]==67)      //ec 
{ 

tmp[16]=236; 

} 
if(buffer[36]==69 && buffer[37]==68)      //ed 
{ 

tmp[16]=237; 

} 
if(buffer[36]==69 && buffer[37]==69)      //ee  
{ 

tmp[16]=238; 

} 
if(buffer[36]==69 && buffer[37]==70)      //ef  
{ 

tmp[16]=239; 

} 
//------------ 

if(buffer[36]==70 && buffer[37]==48)      //f0       
{ 

tmp[16]=240; 
 
} 

if(buffer[36]==70 && buffer[37]==49)      //f1        
{ 

tmp[16]=241; 

} 
if(buffer[36]==70 && buffer[37]==50)      //f2        
{ 

tmp[16]=242; 

} 
if(buffer[36]==70 && buffer[37]==51)      //f3         
{ 

tmp[16]=243; 

} 
if(buffer[36]==70 && buffer[37]==52)      //f4        
{ 

tmp[16]=244; 

} 
if(buffer[36]==70 && buffer[37]==53)      //f5      
{ 

tmp[16]=245; 

} 
if(buffer[36]==70 && buffer[37]==54)      //f6       
{ 

tmp[16]=246; 

} 
if(buffer[36]==70 && buffer[37]==55)      //f7     
{ 

tmp[16]=247; 

} 
if(buffer[36]==70 && buffer[37]==56)      //f8     
{ 

tmp[16]=248; 

} 
if(buffer[36]==70 && buffer[37]==57)      //f9   
{ 

tmp[16]=249; 

} 

if(buffer[36]==70 && buffer[37]==65)      //fa 
{ 

tmp[16]=250; 

} 

if(buffer[36]==70 && buffer[37]==66)      //fb 
{ 

tmp[16]=251; 

} 
if(buffer[36]==70 && buffer[37]==67)      //fc 
{ 

tmp[16]=252; 

} 
if(buffer[36]==70 && buffer[37]==68)      //fd 
{ 

tmp[16]=253; 

} 
if(buffer[36]==70 && buffer[37]==69)      //fe  
{ 

tmp[16]=254; 

} 
if(buffer[36]==70 && buffer[37]==70)      //ff  
{ 

tmp[16]=255; 

} 

//----------------------- end of tmp[16]--------------------------- 


//----------------------- start of tmp[17]--------------------------- 


if(buffer[38]==48 && buffer[39]==48)      //00        
{ 
 
tmp[17]=0; 

} 

if(buffer[38]==48 && buffer[39]==49)      //01        
{ 

tmp[17]=1; 

} 
if(buffer[38]==48 && buffer[39]==50)      //02        
{ 

tmp[17]=2; 

} 
if(buffer[38]==48 && buffer[39]==51)      //03         
{ 

tmp[17]=3; 

} 
if(buffer[38]==48 && buffer[39]==52)      //04        
{ 

tmp[17]=4; 

} 
if(buffer[38]==48 && buffer[39]==53)      //05      
{ 

tmp[17]=5; 

} 


if(buffer[38]==48 && buffer[39]==54)      //06       
{ 

tmp[17]=6; 

} 
if(buffer[38]==48 && buffer[39]==55)      //07     
{ 

tmp[17]=7; 

} 
if(buffer[38]==48 && buffer[39]==56)      //08     
{ 

tmp[17]=8; 

} 
if(buffer[38]==48 && buffer[39]==57)      //09   
{ 

tmp[17]=9; 

} 

if(buffer[38]==48 && buffer[39]==65)      //0a 
{ 

tmp[17]=10; 

} 

if(buffer[38]==48 && buffer[39]==66)      //0b 
{ 

tmp[17]=11; 

} 
if(buffer[38]==48 && buffer[39]==67)      //0c 
{ 

tmp[17]=12; 

} 
if(buffer[38]==48 && buffer[39]==68)      //0d 
{ 

tmp[17]=13; 

} 
if(buffer[38]==48 && buffer[39]==69)      //0e  
{ 

tmp[17]=14; 

} 
if(buffer[38]==48 && buffer[39]==70)      //0f  
{ 

tmp[17]=15; 

} 

//----------- 

if(buffer[38]==49 && buffer[39]==48)      //        10 
{ 
 
tmp[17]=16; 

} 
if(buffer[38]==49 && buffer[39]==49)      //         11 
{ 

tmp[17]=17; 

} 
if(buffer[38]==49 && buffer[39]==50)      //         12 
{ 

tmp[17]=18; 

} 
if(buffer[38]==49 && buffer[39]==51)      //         13 
{ 

tmp[17]=19; 

} 
if(buffer[38]==49 && buffer[39]==52)      //         14 
{ 

tmp[17]=20; 

} 
if(buffer[38]==49 && buffer[39]==53)      //         15 
{ 

tmp[17]=21; 

} 
if(buffer[38]==49 && buffer[39]==54)      //         16 
{ 

tmp[17]=22; 

} 
if(buffer[38]==49 && buffer[39]==55)      //         17 
{ 

tmp[17]=23; 

} 
if(buffer[38]==49 && buffer[39]==56)      //         18 
{ 

tmp[17]=24; 

} 
if(buffer[38]==49 && buffer[39]==57)      //         19 
{ 

tmp[17]=25; 

} 

if(buffer[38]==49 && buffer[39]==65)      //         1a 
{ 

tmp[17]=26; 

} 
if(buffer[38]==49 && buffer[39]==66)      //         1b 
{ 

tmp[17]=27; 

} 
if(buffer[38]==49 && buffer[39]==67)      //         1c 
{ 

tmp[17]=28; 

} 
if(buffer[38]==49 && buffer[39]==68)      //         1d 
{ 

tmp[17]=29; 

} 
if(buffer[38]==49 && buffer[39]==69)      //         1e 
{ 

tmp[17]=30; 

} 
if(buffer[38]==49 && buffer[39]==70)      //         1f 
{ 

tmp[17]=31; 

} 


//--------------- 


if(buffer[38]==50 && buffer[39]==48)      //         20 
{ 

tmp[17]=32; 
 
} 

if(buffer[38]==50 && buffer[39]==49)      //         21 
{ 

tmp[17]=33; 

} 
if(buffer[38]==50 && buffer[39]==50)      //         22 
{ 

tmp[17]=34; 

} 
if(buffer[38]==50 && buffer[39]==51)      //         23 
{ 

tmp[17]=35; 

} 
if(buffer[38]==50 && buffer[39]==52)      //         24 
{ 

tmp[17]=36; 

} 
if(buffer[38]==50 && buffer[39]==53)      //         25 
{ 

tmp[17]=37; 

} 
if(buffer[38]==50 && buffer[39]==54)      //         26 
{ 

tmp[17]=38; 

} 
if(buffer[38]==50 && buffer[39]==55)      //         27 
{ 

tmp[17]=39; 

} 
if(buffer[38]==50 && buffer[39]==56)      //         28 
{ 

tmp[17]=40; 

} 
if(buffer[38]==50 && buffer[39]==57)      //         29 
{ 

tmp[17]=41; 

} 
if(buffer[38]==50 && buffer[39]==65)      //         2a 
{ 

tmp[17]=42; 

} 
if(buffer[38]==50 && buffer[39]==66)      //         2b 
{ 

tmp[17]=43; 

} 
if(buffer[38]==50 && buffer[39]==67)      //         2c 
{ 

tmp[17]=44; 

} 

if(buffer[38]==50 && buffer[39]==68)      //       2d  
{ 

tmp[17]=45; 

} 
if(buffer[38]==50 && buffer[39]==69)      //         2e 
{ 

tmp[17]=46; 

} 
if(buffer[38]==50 && buffer[39]==70)      //         2f 
{ 

tmp[17]=47; 

} 

//------------- 


if(buffer[38]==51 && buffer[39]==48)      // 30        
{ 

tmp[17]=48; 

} 
 
if(buffer[38]==51 && buffer[39]==49)      // 31        
{ 

tmp[17]=49; 

} 
if(buffer[38]==51 && buffer[39]==50)      // 32        
{ 

tmp[17]=50; 

} 
if(buffer[38]==51 && buffer[39]==51)      //33         
{ 

tmp[17]=51; 

} 
if(buffer[38]==51 && buffer[39]==52)      //34        
{ 

tmp[17]=52; 

} 
if(buffer[38]==51 && buffer[39]==53)      //35      
{ 

tmp[17]=53; 

} 
if(buffer[38]==51 && buffer[39]==54)      //36       
{ 
//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 
 
tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 
 
} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 
 
tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 
 
tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 
 
tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 
 
tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 
 
tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 
 
tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 
 
tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 
 
} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 
 
} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 
 
tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 
 
tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 
 
} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 
 
tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 
} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 
 
} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 
 
tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 
 
tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 
 
} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 
 
tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 
 
} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 
 
tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 
 
} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 
 
tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 
 
} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 
 
tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 
 
} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 
 
} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 
 
tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 
 
tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 
 
} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 
 
} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 
 

if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 


 
if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 
 
tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 
 
tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 

tmp[17]=54; 

} 
if(buffer[38]==51 && buffer[39]==55)      //37     
{ 

tmp[17]=55; 

} 
if(buffer[38]==51 && buffer[39]==56)      //38     
{ 

tmp[17]=56; 

} 
if(buffer[38]==51 && buffer[39]==57)      //39   
{ 

tmp[17]=57; 

} 

if(buffer[38]==51 && buffer[39]==65)      //3a 
{ 

tmp[17]=58; 

} 

if(buffer[38]==51 && buffer[39]==66)      //3b 
{ 

tmp[17]=59; 

} 
if(buffer[38]==51 && buffer[39]==67)      //3c 
{ 

tmp[17]=60; 

} 
if(buffer[38]==51 && buffer[39]==68)      //3d 
{ 

tmp[17]=61; 

} 
if(buffer[38]==51 && buffer[39]==69)      //3e  
{ 

tmp[17]=62; 

} 
if(buffer[38]==51 && buffer[39]==70)      //3f  
{ 

tmp[17]=63; 

} 

//------------ 


if(buffer[38]==52 && buffer[39]==48)      // 40       
{ 

tmp[17]=64; 

} 

if(buffer[38]==52 && buffer[39]==49)      // 41        
{ 

tmp[17]=65; 

} 
if(buffer[38]==52 && buffer[39]==50)      // 42        
{ 

tmp[17]=66; 

} 
if(buffer[38]==52 && buffer[39]==51)      //43         
{ 

tmp[17]=67; 

} 
if(buffer[38]==52 && buffer[39]==52)      //44        
{ 

tmp[17]=68; 

} 
if(buffer[38]==52 && buffer[39]==53)      //45      
{ 

tmp[17]=69; 

} 

if(buffer[38]==52 && buffer[39]==54)      //46       
{ 

tmp[17]=70; 

} 
if(buffer[38]==52 && buffer[39]==55)      //47     
{ 

tmp[17]=71; 

} 
if(buffer[38]==52 && buffer[39]==56)      //48     
{ 

tmp[17]=72; 

} 
if(buffer[38]==52 && buffer[39]==57)      //49   
{ 

tmp[17]=73; 

} 

if(buffer[38]==52 && buffer[39]==65)      //4a 
{ 

tmp[17]=74; 

} 

if(buffer[38]==52 && buffer[39]==66)      //4b 
{ 

tmp[17]=75; 

} 
if(buffer[38]==52 && buffer[39]==67)      //4c 
{ 

tmp[17]=76; 

} 
if(buffer[38]==52 && buffer[39]==68)      //4d 
{ 

tmp[17]=77; 

} 
if(buffer[38]==52 && buffer[39]==69)      //4e  
{ 

tmp[17]=78; 

} 
if(buffer[38]==52 && buffer[39]==70)      //4f  
{ 

tmp[17]=79; 

} 
//------------ 




if(buffer[38]==53 && buffer[39]==48)      //50       
{ 

tmp[17]=80; 

} 

if(buffer[38]==53 && buffer[39]==49)      //51        
{ 

tmp[17]=81; 

} 
if(buffer[38]==53 && buffer[39]==50)      //52        
{ 

tmp[17]=82; 

} 
if(buffer[38]==53 && buffer[39]==51)      //53         
{ 

tmp[17]=83; 

} 
if(buffer[38]==53 && buffer[39]==52)      //54        
{ 

tmp[17]=84; 

} 
if(buffer[38]==53 && buffer[39]==53)      //55      
{ 

tmp[17]=85; 

} 
if(buffer[38]==53 && buffer[39]==54)      //56       
{ 

tmp[17]=86; 

} 
if(buffer[38]==53 && buffer[39]==55)      //57     
{ 

tmp[17]=87; 

} 
if(buffer[38]==53 && buffer[39]==56)      //58     
{ 

tmp[17]=88; 

} 
if(buffer[38]==53 && buffer[39]==57)      //59   
{ 

tmp[17]=89; 

} 

if(buffer[38]==53 && buffer[39]==65)      //5a 
{ 

tmp[17]=90; 

} 

if(buffer[38]==53 && buffer[39]==66)      //5b 
{ 

tmp[17]=91; 

} 
if(buffer[38]==53 && buffer[39]==67)      //5c 
{ 

tmp[17]=92; 

} 
if(buffer[38]==53 && buffer[39]==68)      //5d 
{ 

tmp[17]=93; 

} 
if(buffer[38]==53 && buffer[39]==69)      //5e  
{ 

tmp[17]=94; 

} 
if(buffer[38]==53 && buffer[39]==70)      //5f  
{ 

tmp[17]=95; 

} 
//------------ 




if(buffer[38]==54 && buffer[39]==48)      //60       
{ 

tmp[17]=96; 

} 

if(buffer[38]==54 && buffer[39]==49)      //61        
{ 

tmp[17]=97; 

} 
if(buffer[38]==54 && buffer[39]==50)      //62        
{ 

tmp[17]=98; 

} 
if(buffer[38]==54 && buffer[39]==51)      //63         
{ 

tmp[17]=99; 

} 
if(buffer[38]==54 && buffer[39]==52)      //64        
{ 

tmp[17]=100; 

} 
if(buffer[38]==54 && buffer[39]==53)      //65      
{ 

tmp[17]=101; 

} 
if(buffer[38]==54 && buffer[39]==54)      //66       
{ 

tmp[17]=102; 

} 
if(buffer[38]==54 && buffer[39]==55)      //67     
{ 

tmp[17]=103; 

} 
if(buffer[38]==54 && buffer[39]==56)      //68     
{ 

tmp[17]=104; 

} 
if(buffer[38]==54 && buffer[39]==57)      //69   
{ 

tmp[17]=105; 

} 

if(buffer[38]==54 && buffer[39]==65)      //6a 
{ 

tmp[17]=106; 

} 

if(buffer[38]==54 && buffer[39]==66)      //6b 
{ 

tmp[17]=107; 

} 
if(buffer[38]==54 && buffer[39]==67)      //6c 
{ 

tmp[17]=108; 

} 
if(buffer[38]==54 && buffer[39]==68)      //6d 
{ 

tmp[17]=109; 

} 
if(buffer[38]==54 && buffer[39]==69)      //6e  
{ 

tmp[17]=110; 

} 
if(buffer[38]==54 && buffer[39]==70)      //6f  
{ 

tmp[17]=111; 

} 
//------------ 




if(buffer[38]==55 && buffer[39]==48)      //70       
{ 

tmp[17]=112; 

} 

if(buffer[38]==55 && buffer[39]==49)      //71        
{ 

tmp[17]=113; 

} 
if(buffer[38]==55 && buffer[39]==50)      //72        
{ 

tmp[17]=114; 

} 
if(buffer[38]==55 && buffer[39]==51)      //73         
{ 

tmp[17]=115; 

} 
if(buffer[38]==55 && buffer[39]==52)      //74        
{ 

tmp[17]=116; 

} 
if(buffer[38]==55 && buffer[39]==53)      //75      
{ 

tmp[17]=117; 

} 
if(buffer[38]==55 && buffer[39]==54)      //76       
{ 

tmp[17]=118; 

} 
if(buffer[38]==55 && buffer[39]==55)      //77     
{ 

tmp[17]=119; 

} 
if(buffer[38]==55 && buffer[39]==56)      //78     
{ 

tmp[17]=120; 

} 
if(buffer[38]==55 && buffer[39]==57)      //79   
{ 

tmp[17]=121; 

} 

if(buffer[38]==55 && buffer[39]==65)      //7a 
{ 

tmp[17]=122; 

} 

if(buffer[38]==55 && buffer[39]==66)      //7b 
{ 

tmp[17]=123; 

} 
if(buffer[38]==55 && buffer[39]==67)      //7c 
{ 

tmp[17]=124; 

} 
if(buffer[38]==55 && buffer[39]==68)      //7d 
{ 

tmp[17]=125; 

} 
if(buffer[38]==55 && buffer[39]==69)      //7e  
{ 

tmp[17]=126; 

} 
if(buffer[38]==55 && buffer[39]==70)      //7f  
{ 

tmp[17]=127; 

} 

//------------ 

if(buffer[38]==56 && buffer[39]==48)      //80       
{ 

tmp[17]=128; 

} 

if(buffer[38]==56 && buffer[39]==49)      //81        
{ 

tmp[17]=129; 

} 
if(buffer[38]==56 && buffer[39]==50)      //82        
{ 

tmp[17]=130; 

} 
if(buffer[38]==56 && buffer[39]==51)      //83         
{ 

tmp[17]=131; 

} 
if(buffer[38]==56 && buffer[39]==52)      //84        
{ 

tmp[17]=132; 

} 
if(buffer[38]==56 && buffer[39]==53)      //85      
{ 

tmp[17]=133; 

} 
if(buffer[38]==56 && buffer[39]==54)      //86       
{ 

tmp[17]=134; 

} 
if(buffer[38]==56 && buffer[39]==55)      //87     
{ 

tmp[17]=135; 

} 
if(buffer[38]==56 && buffer[39]==56)      //88     
{ 

tmp[17]=136; 

} 
if(buffer[38]==56 && buffer[39]==57)      //89   
{ 

tmp[17]=137; 

} 

if(buffer[38]==56 && buffer[39]==65)      //8a 
{ 

tmp[17]=138; 

} 

if(buffer[38]==56 && buffer[39]==66)      //8b 
{ 

tmp[17]=139; 

} 
if(buffer[38]==56 && buffer[39]==67)      //8c 
{ 

tmp[17]=140; 

} 
if(buffer[38]==56 && buffer[39]==68)      //8d 
{ 

tmp[17]=141; 

} 
if(buffer[38]==56 && buffer[39]==69)      //8e  
{ 

tmp[17]=142; 

} 
if(buffer[38]==56 && buffer[39]==70)      //8f  
{ 

tmp[17]=143; 

} 
//------------ 


if(buffer[38]==57 && buffer[39]==48)      //90       
{ 

tmp[17]=144; 

} 

if(buffer[38]==57 && buffer[39]==49)      //91        
{ 

tmp[17]=145; 

} 
if(buffer[38]==57 && buffer[39]==50)      //92        
{ 

tmp[17]=146; 

} 
if(buffer[38]==57 && buffer[39]==51)      //93         
{ 

tmp[17]=147; 

} 
if(buffer[38]==57 && buffer[39]==52)      //94        
{ 

tmp[17]=148; 

} 
if(buffer[38]==57 && buffer[39]==53)      //95      
{ 

tmp[17]=149; 

} 
if(buffer[38]==57 && buffer[39]==54)      //96       
{ 

tmp[17]=150; 

} 
if(buffer[38]==57 && buffer[39]==55)      //97     
{ 

tmp[17]=151; 

} 
if(buffer[38]==57 && buffer[39]==56)      //98     
{ 

tmp[17]=152; 

} 
if(buffer[38]==57 && buffer[39]==57)      //99   
{ 

tmp[17]=153; 

} 

if(buffer[38]==57 && buffer[39]==65)      //9a 
{ 

tmp[17]=154; 

} 

if(buffer[38]==57 && buffer[39]==66)      //9b 
{ 

tmp[17]=155; 

} 
if(buffer[38]==57 && buffer[39]==67)      //9c 
{ 

tmp[17]=156; 

} 
if(buffer[38]==57 && buffer[39]==68)      //9d 
{ 

tmp[17]=157; 

} 
if(buffer[38]==57 && buffer[39]==69)      //9e  
{ 

tmp[17]=158; 

} 
if(buffer[38]==57 && buffer[39]==70)      //9f  
{ 

tmp[17]=159; 

} 
//------------ 
 

if(buffer[38]==65 && buffer[39]==48)      //a0       
{ 

tmp[17]=160; 

} 

if(buffer[38]==65 && buffer[39]==49)      //a1        
{ 

tmp[17]=161; 

} 
if(buffer[38]==65 && buffer[39]==50)      //a2        
{ 

tmp[17]=162; 

} 
if(buffer[38]==65 && buffer[39]==51)      //a3         
{ 

tmp[17]=163; 

} 
if(buffer[38]==65 && buffer[39]==52)      //a4        
{ 

tmp[17]=164; 

} 
if(buffer[38]==65 && buffer[39]==53)      //a5      
{ 

tmp[17]=165; 

} 
if(buffer[38]==65 && buffer[39]==54)      //a6       
{ 

tmp[17]=166; 

} 
if(buffer[38]==65 && buffer[39]==55)      //a7     
{ 

tmp[17]=167; 

} 
if(buffer[38]==65 && buffer[39]==56)      //a8     
{ 

tmp[17]=168; 

} 
if(buffer[38]==65 && buffer[39]==57)      //a9   
{ 

tmp[17]=169; 

} 

if(buffer[38]==65 && buffer[39]==65)      //aa 
{ 

tmp[17]=170; 

} 

if(buffer[38]==65 && buffer[39]==66)      //ab 
{ 

tmp[17]=171; 

} 
if(buffer[38]==65 && buffer[39]==67)      //ac 
{ 

tmp[17]=172; 

} 
if(buffer[38]==65 && buffer[39]==68)      //ad 
{ 

tmp[17]=173; 

} 
if(buffer[38]==65 && buffer[39]==69)      //ae  
{ 

tmp[17]=174; 

} 
if(buffer[38]==65 && buffer[39]==70)      //af  
{ 

tmp[17]=175; 

} 
//------------ 


if(buffer[38]==66 && buffer[39]==48)      //b0       
{ 

tmp[17]=176; 

} 

if(buffer[38]==66 && buffer[39]==49)      //b1        
{ 

tmp[17]=177; 

} 
if(buffer[38]==66 && buffer[39]==50)      //b2        
{ 

tmp[17]=178; 

} 
if(buffer[38]==66 && buffer[39]==51)      //b3         
{ 

tmp[17]=179; 

} 
if(buffer[38]==66 && buffer[39]==52)      //b4        
{ 

tmp[17]=180; 

} 
if(buffer[38]==66 && buffer[39]==53)      //b5      
{ 

tmp[17]=181; 

} 
if(buffer[38]==66 && buffer[39]==54)      //b6       
{ 

tmp[17]=182; 

} 
if(buffer[38]==66 && buffer[39]==55)      //b7     
{ 

tmp[17]=183; 

} 
if(buffer[38]==66 && buffer[39]==56)      //b8     
{ 

tmp[17]=184; 

} 
if(buffer[38]==66 && buffer[39]==57)      //b9   
{ 

tmp[17]=185; 

} 

if(buffer[38]==66 && buffer[39]==65)      //ba 
{ 

tmp[17]=186; 

} 

if(buffer[38]==66 && buffer[39]==66)      //bb 
{ 

tmp[17]=187; 

} 
if(buffer[38]==66 && buffer[39]==67)      //bc 
{ 

tmp[17]=188; 

} 
if(buffer[38]==66 && buffer[39]==68)      //bd 
{ 

tmp[17]=189; 

} 
if(buffer[38]==66 && buffer[39]==69)      //be  
{ 

tmp[17]=190; 

} 
if(buffer[38]==66 && buffer[39]==70)      //bf  
{ 

tmp[17]=191; 

} 
//------------ 



if(buffer[38]==67 && buffer[39]==48)      //c0       
{ 

tmp[17]=192; 

} 

if(buffer[38]==67 && buffer[39]==49)      //c1        
{ 

tmp[17]=193; 

} 
if(buffer[38]==67 && buffer[39]==50)      //c2        
{ 

tmp[17]=194; 

} 
if(buffer[38]==67 && buffer[39]==51)      //c3         
{ 

tmp[17]=195; 

} 
if(buffer[38]==67 && buffer[39]==52)      //c4        
{ 

tmp[17]=196; 

} 
if(buffer[38]==67 && buffer[39]==53)      //c5      
{ 

tmp[17]=197; 

} 
if(buffer[38]==67 && buffer[39]==54)      //c6       
{ 

tmp[17]=198; 

} 
if(buffer[38]==67 && buffer[39]==55)      //c7     
{ 

tmp[17]=199; 

} 
if(buffer[38]==67 && buffer[39]==56)      //c8     
{ 

tmp[17]=200; 
 
} 
if(buffer[38]==67 && buffer[39]==57)      //c9   
{ 

tmp[17]=201; 

} 

if(buffer[38]==67 && buffer[39]==65)      //ca 
{ 

tmp[17]=202; 

} 

if(buffer[38]==67 && buffer[39]==66)      //cb 
{ 

tmp[17]=203; 

} 
if(buffer[38]==67 && buffer[39]==67)      //cc 
{ 

tmp[17]=204; 

} 
if(buffer[38]==67 && buffer[39]==68)      //cd 
{ 

tmp[17]=205; 

} 
if(buffer[38]==67 && buffer[39]==69)      //ce  
{ 

tmp[17]=206; 

} 
if(buffer[38]==67 && buffer[39]==70)      //cf  
{ 

tmp[17]=207; 

} 
//------------ 


if(buffer[38]==68 && buffer[39]==48)      //d0       
{ 

tmp[17]=208; 

} 

if(buffer[38]==68 && buffer[39]==49)      //d1        
{ 

tmp[17]=209; 

} 
if(buffer[38]==68 && buffer[39]==50)      //d2        
{ 

tmp[17]=210; 

} 
if(buffer[38]==68 && buffer[39]==51)      //d3         
{ 

tmp[17]=211; 

} 
if(buffer[38]==68 && buffer[39]==52)      //d4        
{ 

tmp[17]=212; 

} 
if(buffer[38]==68 && buffer[39]==53)      //d5      
{ 

tmp[17]=213; 

} 
if(buffer[38]==68 && buffer[39]==54)      //d6       
{ 

tmp[17]=214; 

} 
if(buffer[38]==68 && buffer[39]==55)      //d7     
{ 

tmp[17]=215; 

} 
if(buffer[38]==68 && buffer[39]==56)      //d8     
{ 

tmp[17]=216; 

} 
if(buffer[38]==68 && buffer[39]==57)      //d9   
{ 

tmp[17]=217; 

} 

if(buffer[38]==68 && buffer[39]==65)      //da 
{ 

tmp[17]=218; 

} 

if(buffer[38]==68 && buffer[39]==66)      //db 
{ 

tmp[17]=219; 

} 
if(buffer[38]==68 && buffer[39]==67)      //dc 
{ 

tmp[17]=220; 

} 
if(buffer[38]==68 && buffer[39]==68)      //dd 
{ 

tmp[17]=221; 

} 
if(buffer[38]==68 && buffer[39]==69)      //de  
{ 

tmp[17]=222; 

} 
if(buffer[38]==68 && buffer[39]==70)      //df  
{ 

tmp[17]=223; 

} 
//------------ 



if(buffer[38]==69 && buffer[39]==48)      //e0       
{ 

tmp[17]=224; 
 
} 

if(buffer[38]==69 && buffer[39]==49)      //e1        
{ 

tmp[17]=225; 

} 
if(buffer[38]==69 && buffer[39]==50)      //e2        
{ 

tmp[17]=226; 

} 
if(buffer[38]==69 && buffer[39]==51)      //e3         
{ 

tmp[17]=227; 

} 
if(buffer[38]==69 && buffer[39]==52)      //e4        
{ 

tmp[17]=228; 

} 
if(buffer[38]==69 && buffer[39]==53)      //e5      
{ 

tmp[17]=229; 

} 
if(buffer[38]==69 && buffer[39]==54)      //e6       
{ 

tmp[17]=230; 

} 
if(buffer[38]==69 && buffer[39]==55)      //e7     
{ 

tmp[17]=231; 

} 
if(buffer[38]==69 && buffer[39]==56)      //e8     
{ 

tmp[17]=232; 

} 
if(buffer[38]==69 && buffer[39]==57)      //e9   
{ 

tmp[17]=233; 

} 

if(buffer[38]==69 && buffer[39]==65)      //ea 
{ 

tmp[17]=234; 

} 

if(buffer[38]==69 && buffer[39]==66)      //eb 
{ 

tmp[17]=235; 

} 
if(buffer[38]==69 && buffer[39]==67)      //ec 
{ 

tmp[17]=236; 

} 
if(buffer[38]==69 && buffer[39]==68)      //ed 
{ 

tmp[17]=237; 

} 
if(buffer[38]==69 && buffer[39]==69)      //ee  
{ 

tmp[17]=238; 

} 
if(buffer[38]==69 && buffer[39]==70)      //ef  
{ 

tmp[17]=239; 

} 
//------------ 

if(buffer[38]==70 && buffer[39]==48)      //f0       
{ 

tmp[17]=240; 

} 

if(buffer[38]==70 && buffer[39]==49)      //f1        
{ 

tmp[17]=241; 

} 
if(buffer[38]==70 && buffer[39]==50)      //f2        
{ 

tmp[17]=242; 

} 
if(buffer[38]==70 && buffer[39]==51)      //f3         
{ 

tmp[17]=243; 

} 
if(buffer[38]==70 && buffer[39]==52)      //f4        
{ 

tmp[17]=244; 

} 
if(buffer[38]==70 && buffer[39]==53)      //f5      
{ 

tmp[17]=245; 

} 
if(buffer[38]==70 && buffer[39]==54)      //f6       
{ 

tmp[17]=246; 

} 
if(buffer[38]==70 && buffer[39]==55)      //f7     
{ 

tmp[17]=247; 

} 
if(buffer[38]==70 && buffer[39]==56)      //f8     
{ 

tmp[17]=248; 

} 
if(buffer[38]==70 && buffer[39]==57)      //f9   
{ 

tmp[17]=249; 
 
} 

if(buffer[38]==70 && buffer[39]==65)      //fa 
{ 

tmp[17]=250; 

} 

if(buffer[38]==70 && buffer[39]==66)      //fb 
{ 

tmp[17]=251; 

} 
if(buffer[38]==70 && buffer[39]==67)      //fc 
{ 

tmp[17]=252; 

} 
if(buffer[38]==70 && buffer[39]==68)      //fd 
{ 

tmp[17]=253; 

} 
if(buffer[38]==70 && buffer[39]==69)      //fe  
{ 

tmp[17]=254; 

} 
if(buffer[38]==70 && buffer[39]==70)      //ff  
{ 

tmp[17]=255; 

} 

//----------------------- end of tmp[17]--------------------------- 


//----------------------- start of tmp[18]--------------------------- 


if(buffer[40]==48 && buffer[41]==48)      //00        
{ 

tmp[18]=0; 

} 

if(buffer[40]==48 && buffer[41]==49)      //01        
{ 

tmp[18]=1; 

} 
if(buffer[40]==48 && buffer[41]==50)      //02        
{ 

tmp[18]=2; 

} 
if(buffer[40]==48 && buffer[41]==51)      //03         
{ 

tmp[18]=3; 

} 
if(buffer[40]==48 && buffer[41]==52)      //04        
{ 

tmp[18]=4; 

} 
if(buffer[40]==48 && buffer[41]==53)      //05      
{ 

tmp[18]=5; 

} 


if(buffer[40]==48 && buffer[41]==54)      //06       
{ 

tmp[18]=6; 

} 
if(buffer[40]==48 && buffer[41]==55)      //07     
{ 

tmp[18]=7; 

} 
if(buffer[40]==48 && buffer[41]==56)      //08     
{ 

tmp[18]=8; 

} 
if(buffer[40]==48 && buffer[41]==57)      //09   
{ 

tmp[18]=9; 

} 

if(buffer[40]==48 && buffer[41]==65)      //0a 
{ 

tmp[18]=10; 

} 

if(buffer[40]==48 && buffer[41]==66)      //0b 
{ 

tmp[18]=11; 

} 
if(buffer[40]==48 && buffer[41]==67)      //0c 
{ 

tmp[18]=12; 

} 
if(buffer[40]==48 && buffer[41]==68)      //0d 
{ 

tmp[18]=13; 

} 
if(buffer[40]==48 && buffer[41]==69)      //0e  
{ 

tmp[18]=14; 

} 
if(buffer[40]==48 && buffer[41]==70)      //0f  
{ 

tmp[18]=15; 

} 

//----------- 

if(buffer[40]==49 && buffer[41]==48)      //        10 
{ 

tmp[18]=16; 

} 
if(buffer[40]==49 && buffer[41]==49)      //         11 
{ 

tmp[18]=17; 

} 
if(buffer[40]==49 && buffer[41]==50)      //         12 
{ 

tmp[18]=18; 

} 
if(buffer[40]==49 && buffer[41]==51)      //         13 
{ 

tmp[18]=19; 

} 
if(buffer[40]==49 && buffer[41]==52)      //         14 
{ 

tmp[18]=20; 

} 
if(buffer[40]==49 && buffer[41]==53)      //         15 
{ 

tmp[18]=21; 

} 
if(buffer[40]==49 && buffer[41]==54)      //         16 
{ 

tmp[18]=22; 

} 
if(buffer[40]==49 && buffer[41]==55)      //         17 
{ 

tmp[18]=23; 

} 
if(buffer[40]==49 && buffer[41]==56)      //         18 
{ 

tmp[18]=24; 

} 
if(buffer[40]==49 && buffer[41]==57)      //         19 
{ 

tmp[18]=25; 

} 

if(buffer[40]==49 && buffer[41]==65)      //         1a 
{ 

tmp[18]=26; 

} 
if(buffer[40]==49 && buffer[41]==66)      //         1b 
{ 

tmp[18]=27; 

} 
if(buffer[40]==49 && buffer[41]==67)      //         1c 
{ 

tmp[18]=28; 

} 
if(buffer[40]==49 && buffer[41]==68)      //         1d 
{ 

tmp[18]=29; 

} 
if(buffer[40]==49 && buffer[41]==69)      //         1e 
{ 

tmp[18]=30; 

} 
if(buffer[40]==49 && buffer[41]==70)      //         1f 
{ 

tmp[18]=31; 

} 


//--------------- 


if(buffer[40]==50 && buffer[41]==48)      //         20 
{ 

tmp[18]=32; 

} 

if(buffer[40]==50 && buffer[41]==49)      //         21 
{ 

tmp[18]=33; 

} 
if(buffer[40]==50 && buffer[41]==50)      //         22 
{ 

tmp[18]=34; 

} 
if(buffer[40]==50 && buffer[41]==51)      //         23 
{ 

tmp[18]=35; 

} 
if(buffer[40]==50 && buffer[41]==52)      //         24 
{ 

tmp[18]=36; 

} 
if(buffer[40]==50 && buffer[41]==53)      //         25 
{ 

tmp[18]=37; 

} 
if(buffer[40]==50 && buffer[41]==54)      //         26 
{ 

tmp[18]=38; 

} 
if(buffer[40]==50 && buffer[41]==55)      //         27 
{ 

tmp[18]=39; 

} 
if(buffer[40]==50 && buffer[41]==56)      //         28 
{ 

tmp[18]=40; 

} 
if(buffer[40]==50 && buffer[41]==57)      //         29 
{ 

tmp[18]=41; 
 
} 
if(buffer[40]==50 && buffer[41]==65)      //         2a 
{ 

tmp[18]=42; 

} 
if(buffer[40]==50 && buffer[41]==66)      //         2b 
{ 

tmp[18]=43; 

} 
if(buffer[40]==50 && buffer[41]==67)      //         2c 
{ 

tmp[18]=44; 

} 

if(buffer[40]==50 && buffer[41]==68)      //       2d  
{ 

tmp[18]=45; 

} 
if(buffer[40]==50 && buffer[41]==69)      //         2e 
{ 

tmp[18]=46; 

} 
if(buffer[40]==50 && buffer[41]==70)      //         2f 
{ 

tmp[18]=47; 

} 

//------------- 


if(buffer[40]==51 && buffer[41]==48)      // 30        
{ 

tmp[18]=48; 

} 

if(buffer[40]==51 && buffer[41]==49)      // 31        
{ 
 
tmp[18]=49; 

} 
if(buffer[40]==51 && buffer[41]==50)      // 32        
{ 

tmp[18]=50; 

} 
if(buffer[40]==51 && buffer[41]==51)      //33         
{ 

tmp[18]=51; 

} 
if(buffer[40]==51 && buffer[41]==52)      //34        
{ 

tmp[18]=52; 

} 
if(buffer[40]==51 && buffer[41]==53)      //35      
{ 

tmp[18]=53; 

} 
if(buffer[40]==51 && buffer[41]==54)      //36       
{ 
//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 
 
if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 
 
} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 
 
tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 
 
tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 
 
} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 
 
tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 
} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 
 
tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 
 

if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 


 
if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 
 
tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 
 
} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 
 
tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 
 
tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 

tmp[18]=54; 

} 
if(buffer[40]==51 && buffer[41]==55)      //37     
{ 

tmp[18]=55; 
 
} 
if(buffer[40]==51 && buffer[41]==56)      //38     
{ 

tmp[18]=56; 

} 
if(buffer[40]==51 && buffer[41]==57)      //39   
{ 

tmp[18]=57; 

} 

if(buffer[40]==51 && buffer[41]==65)      //3a 
{ 

tmp[18]=58; 

} 

if(buffer[40]==51 && buffer[41]==66)      //3b 
{ 

tmp[18]=59; 

} 
if(buffer[40]==51 && buffer[41]==67)      //3c 
{ 

tmp[18]=60; 

} 
if(buffer[40]==51 && buffer[41]==68)      //3d 
{ 

tmp[18]=61; 

} 
if(buffer[40]==51 && buffer[41]==69)      //3e  
{ 

tmp[18]=62; 

} 
if(buffer[40]==51 && buffer[41]==70)      //3f  
{ 

tmp[18]=63; 

} 
 
//------------ 


if(buffer[40]==52 && buffer[41]==48)      // 40       
{ 

tmp[18]=64; 

} 

if(buffer[40]==52 && buffer[41]==49)      // 41        
{ 

tmp[18]=65; 

} 
if(buffer[40]==52 && buffer[41]==50)      // 42        
{ 

tmp[18]=66; 

} 
if(buffer[40]==52 && buffer[41]==51)      //43         
{ 

tmp[18]=67; 

} 
if(buffer[40]==52 && buffer[41]==52)      //44        
{ 

tmp[18]=68; 

} 
if(buffer[40]==52 && buffer[41]==53)      //45      
{ 

tmp[18]=69; 

} 

if(buffer[40]==52 && buffer[41]==54)      //46       
{ 

tmp[18]=70; 

} 
if(buffer[40]==52 && buffer[41]==55)      //47     
{ 

tmp[18]=71; 
 
} 
if(buffer[40]==52 && buffer[41]==56)      //48     
{ 

tmp[18]=72; 

} 
if(buffer[40]==52 && buffer[41]==57)      //49   
{ 

tmp[18]=73; 

} 

if(buffer[40]==52 && buffer[41]==65)      //4a 
{ 

tmp[18]=74; 

} 

if(buffer[40]==52 && buffer[41]==66)      //4b 
{ 

tmp[18]=75; 

} 
if(buffer[40]==52 && buffer[41]==67)      //4c 
{ 

tmp[18]=76; 

} 
if(buffer[40]==52 && buffer[41]==68)      //4d 
{ 

tmp[18]=77; 

} 
if(buffer[40]==52 && buffer[41]==69)      //4e  
{ 

tmp[18]=78; 

} 
if(buffer[40]==52 && buffer[41]==70)      //4f  
{ 

tmp[18]=79; 

} 
//------------ 




if(buffer[40]==53 && buffer[41]==48)      //50       
{ 

tmp[18]=80; 

} 

if(buffer[40]==53 && buffer[41]==49)      //51        
{ 

tmp[18]=81; 

} 
if(buffer[40]==53 && buffer[41]==50)      //52        
{ 

tmp[18]=82; 

} 
if(buffer[40]==53 && buffer[41]==51)      //53         
{ 

tmp[18]=83; 

} 
if(buffer[40]==53 && buffer[41]==52)      //54        
{ 

tmp[18]=84; 

} 
if(buffer[40]==53 && buffer[41]==53)      //55      
{ 

tmp[18]=85; 

} 
if(buffer[40]==53 && buffer[41]==54)      //56       
{ 

tmp[18]=86; 

} 
if(buffer[40]==53 && buffer[41]==55)      //57     
{ 

tmp[18]=87; 
 
} 
if(buffer[40]==53 && buffer[41]==56)      //58     
{ 

tmp[18]=88; 

} 
if(buffer[40]==53 && buffer[41]==57)      //59   
{ 

tmp[18]=89; 

} 

if(buffer[40]==53 && buffer[41]==65)      //5a 
{ 

tmp[18]=90; 

} 

if(buffer[40]==53 && buffer[41]==66)      //5b 
{ 

tmp[18]=91; 

} 
if(buffer[40]==53 && buffer[41]==67)      //5c 
{ 

tmp[18]=92; 

} 
if(buffer[40]==53 && buffer[41]==68)      //5d 
{ 

tmp[18]=93; 

} 
if(buffer[40]==53 && buffer[41]==69)      //5e  
{ 

tmp[18]=94; 

} 
if(buffer[40]==53 && buffer[41]==70)      //5f  
{ 

tmp[18]=95; 

} 
//------------ 




if(buffer[40]==54 && buffer[41]==48)      //60       
{ 

tmp[18]=96; 

} 

if(buffer[40]==54 && buffer[41]==49)      //61        
{ 

tmp[18]=97; 

} 
if(buffer[40]==54 && buffer[41]==50)      //62        
{ 

tmp[18]=98; 

} 
if(buffer[40]==54 && buffer[41]==51)      //63         
{ 

tmp[18]=99; 

} 
if(buffer[40]==54 && buffer[41]==52)      //64        
{ 

tmp[18]=100; 

} 
if(buffer[40]==54 && buffer[41]==53)      //65      
{ 

tmp[18]=101; 

} 
if(buffer[40]==54 && buffer[41]==54)      //66       
{ 

tmp[18]=102; 

} 
if(buffer[40]==54 && buffer[41]==55)      //67     
{ 

tmp[18]=103; 
 
} 
if(buffer[40]==54 && buffer[41]==56)      //68     
{ 

tmp[18]=104; 

} 
if(buffer[40]==54 && buffer[41]==57)      //69   
{ 

tmp[18]=105; 

} 

if(buffer[40]==54 && buffer[41]==65)      //6a 
{ 

tmp[18]=106; 

} 

if(buffer[40]==54 && buffer[41]==66)      //6b 
{ 

tmp[18]=107; 

} 
if(buffer[40]==54 && buffer[41]==67)      //6c 
{ 

tmp[18]=108; 

} 
if(buffer[40]==54 && buffer[41]==68)      //6d 
{ 

tmp[18]=109; 

} 
if(buffer[40]==54 && buffer[41]==69)      //6e  
{ 

tmp[18]=110; 

} 
if(buffer[40]==54 && buffer[41]==70)      //6f  
{ 

tmp[18]=111; 

} 
//------------ 




if(buffer[40]==55 && buffer[41]==48)      //70       
{ 

tmp[18]=112; 

} 

if(buffer[40]==55 && buffer[41]==49)      //71        
{ 

tmp[18]=113; 

} 
if(buffer[40]==55 && buffer[41]==50)      //72        
{ 

tmp[18]=114; 

} 
if(buffer[40]==55 && buffer[41]==51)      //73         
{ 

tmp[18]=115; 

} 
if(buffer[40]==55 && buffer[41]==52)      //74        
{ 

tmp[18]=116; 

} 
if(buffer[40]==55 && buffer[41]==53)      //75      
{ 

tmp[18]=117; 

} 
if(buffer[40]==55 && buffer[41]==54)      //76       
{ 

tmp[18]=118; 

} 
if(buffer[40]==55 && buffer[41]==55)      //77     
{ 

tmp[18]=119; 
 
} 
if(buffer[40]==55 && buffer[41]==56)      //78     
{ 

tmp[18]=120; 

} 
if(buffer[40]==55 && buffer[41]==57)      //79   
{ 

tmp[18]=121; 

} 

if(buffer[40]==55 && buffer[41]==65)      //7a 
{ 

tmp[18]=122; 

} 

if(buffer[40]==55 && buffer[41]==66)      //7b 
{ 

tmp[18]=123; 

} 
if(buffer[40]==55 && buffer[41]==67)      //7c 
{ 

tmp[18]=124; 

} 
if(buffer[40]==55 && buffer[41]==68)      //7d 
{ 

tmp[18]=125; 

} 
if(buffer[40]==55 && buffer[41]==69)      //7e  
{ 

tmp[18]=126; 

} 
if(buffer[40]==55 && buffer[41]==70)      //7f  
{ 

tmp[18]=127; 

} 
 
//------------ 

if(buffer[40]==56 && buffer[41]==48)      //80       
{ 

tmp[18]=128; 

} 

if(buffer[40]==56 && buffer[41]==49)      //81        
{ 

tmp[18]=129; 

} 
if(buffer[40]==56 && buffer[41]==50)      //82        
{ 

tmp[18]=130; 

} 
if(buffer[40]==56 && buffer[41]==51)      //83         
{ 

tmp[18]=131; 

} 
if(buffer[40]==56 && buffer[41]==52)      //84        
{ 

tmp[18]=132; 

} 
if(buffer[40]==56 && buffer[41]==53)      //85      
{ 

tmp[18]=133; 

} 
if(buffer[40]==56 && buffer[41]==54)      //86       
{ 

tmp[18]=134; 

} 
if(buffer[40]==56 && buffer[41]==55)      //87     
{ 

tmp[18]=135; 

} 
if(buffer[40]==56 && buffer[41]==56)      //88     
{ 

tmp[18]=136; 

} 
if(buffer[40]==56 && buffer[41]==57)      //89   
{ 

tmp[18]=137; 

} 

if(buffer[40]==56 && buffer[41]==65)      //8a 
{ 

tmp[18]=138; 

} 

if(buffer[40]==56 && buffer[41]==66)      //8b 
{ 

tmp[18]=139; 

} 
if(buffer[40]==56 && buffer[41]==67)      //8c 
{ 

tmp[18]=140; 

} 
if(buffer[40]==56 && buffer[41]==68)      //8d 
{ 

tmp[18]=141; 

} 
if(buffer[40]==56 && buffer[41]==69)      //8e  
{ 

tmp[18]=142; 

} 
if(buffer[40]==56 && buffer[41]==70)      //8f  
{ 

tmp[18]=143; 

} 
//------------ 

 
if(buffer[40]==57 && buffer[41]==48)      //90       
{ 

tmp[18]=144; 

} 

if(buffer[40]==57 && buffer[41]==49)      //91        
{ 

tmp[18]=145; 

} 
if(buffer[40]==57 && buffer[41]==50)      //92        
{ 

tmp[18]=146; 

} 
if(buffer[40]==57 && buffer[41]==51)      //93         
{ 

tmp[18]=147; 

} 
if(buffer[40]==57 && buffer[41]==52)      //94        
{ 

tmp[18]=148; 

} 
if(buffer[40]==57 && buffer[41]==53)      //95      
{ 

tmp[18]=149; 

} 
if(buffer[40]==57 && buffer[41]==54)      //96       
{ 

tmp[18]=150; 

} 
if(buffer[40]==57 && buffer[41]==55)      //97     
{ 

tmp[18]=151; 

} 
if(buffer[40]==57 && buffer[41]==56)      //98     
{ 
 
tmp[18]=152; 

} 
if(buffer[40]==57 && buffer[41]==57)      //99   
{ 

tmp[18]=153; 

} 

if(buffer[40]==57 && buffer[41]==65)      //9a 
{ 

tmp[18]=154; 

} 

if(buffer[40]==57 && buffer[41]==66)      //9b 
{ 

tmp[18]=155; 

} 
if(buffer[40]==57 && buffer[41]==67)      //9c 
{ 

tmp[18]=156; 

} 
if(buffer[40]==57 && buffer[41]==68)      //9d 
{ 

tmp[18]=157; 

} 
if(buffer[40]==57 && buffer[41]==69)      //9e  
{ 

tmp[18]=158; 

} 
if(buffer[40]==57 && buffer[41]==70)      //9f  
{ 

tmp[18]=159; 

} 
//------------ 


if(buffer[40]==65 && buffer[41]==48)      //a0       
{ 

tmp[18]=160; 

} 

if(buffer[40]==65 && buffer[41]==49)      //a1        
{ 

tmp[18]=161; 

} 
if(buffer[40]==65 && buffer[41]==50)      //a2        
{ 

tmp[18]=162; 

} 
if(buffer[40]==65 && buffer[41]==51)      //a3         
{ 

tmp[18]=163; 

} 
if(buffer[40]==65 && buffer[41]==52)      //a4        
{ 

tmp[18]=164; 

} 
if(buffer[40]==65 && buffer[41]==53)      //a5      
{ 

tmp[18]=165; 

} 
if(buffer[40]==65 && buffer[41]==54)      //a6       
{ 

tmp[18]=166; 

} 
if(buffer[40]==65 && buffer[41]==55)      //a7     
{ 

tmp[18]=167; 

} 
if(buffer[40]==65 && buffer[41]==56)      //a8     
{ 

tmp[18]=168; 
 
} 
if(buffer[40]==65 && buffer[41]==57)      //a9   
{ 

tmp[18]=169; 

} 

if(buffer[40]==65 && buffer[41]==65)      //aa 
{ 

tmp[18]=170; 

} 

if(buffer[40]==65 && buffer[41]==66)      //ab 
{ 

tmp[18]=171; 

} 
if(buffer[40]==65 && buffer[41]==67)      //ac 
{ 

tmp[18]=172; 

} 
if(buffer[40]==65 && buffer[41]==68)      //ad 
{ 

tmp[18]=173; 

} 
if(buffer[40]==65 && buffer[41]==69)      //ae  
{ 

tmp[18]=174; 

} 
if(buffer[40]==65 && buffer[41]==70)      //af  
{ 

tmp[18]=175; 

} 
//------------ 


if(buffer[40]==66 && buffer[41]==48)      //b0       
{ 

tmp[18]=176; 

} 

if(buffer[40]==66 && buffer[41]==49)      //b1        
{ 

tmp[18]=177; 

} 
if(buffer[40]==66 && buffer[41]==50)      //b2        
{ 

tmp[18]=178; 

} 
if(buffer[40]==66 && buffer[41]==51)      //b3         
{ 

tmp[18]=179; 

} 
if(buffer[40]==66 && buffer[41]==52)      //b4        
{ 

tmp[18]=180; 

} 
if(buffer[40]==66 && buffer[41]==53)      //b5      
{ 

tmp[18]=181; 

} 
if(buffer[40]==66 && buffer[41]==54)      //b6       
{ 

tmp[18]=182; 

} 
if(buffer[40]==66 && buffer[41]==55)      //b7     
{ 

tmp[18]=183; 

} 
if(buffer[40]==66 && buffer[41]==56)      //b8     
{ 

tmp[18]=184; 

} 
if(buffer[40]==66 && buffer[41]==57)      //b9   
{ 

tmp[18]=185; 

} 

if(buffer[40]==66 && buffer[41]==65)      //ba 
{ 

tmp[18]=186; 

} 

if(buffer[40]==66 && buffer[41]==66)      //bb 
{ 

tmp[18]=187; 

} 
if(buffer[40]==66 && buffer[41]==67)      //bc 
{ 

tmp[18]=188; 

} 
if(buffer[40]==66 && buffer[41]==68)      //bd 
{ 

tmp[18]=189; 

} 
if(buffer[40]==66 && buffer[41]==69)      //be  
{ 

tmp[18]=190; 

} 
if(buffer[40]==66 && buffer[41]==70)      //bf  
{ 

tmp[18]=191; 

} 
//------------ 



if(buffer[40]==67 && buffer[41]==48)      //c0       
{ 

tmp[18]=192; 
 
} 

if(buffer[40]==67 && buffer[41]==49)      //c1        
{ 

tmp[18]=193; 

} 
if(buffer[40]==67 && buffer[41]==50)      //c2        
{ 

tmp[18]=194; 

} 
if(buffer[40]==67 && buffer[41]==51)      //c3         
{ 

tmp[18]=195; 

} 
if(buffer[40]==67 && buffer[41]==52)      //c4        
{ 

tmp[18]=196; 

} 
if(buffer[40]==67 && buffer[41]==53)      //c5      
{ 

tmp[18]=197; 

} 
if(buffer[40]==67 && buffer[41]==54)      //c6       
{ 

tmp[18]=198; 

} 
if(buffer[40]==67 && buffer[41]==55)      //c7     
{ 

tmp[18]=199; 

} 
if(buffer[40]==67 && buffer[41]==56)      //c8     
{ 

tmp[18]=200; 

} 
if(buffer[40]==67 && buffer[41]==57)      //c9   
{ 

tmp[18]=201; 

} 

if(buffer[40]==67 && buffer[41]==65)      //ca 
{ 

tmp[18]=202; 

} 

if(buffer[40]==67 && buffer[41]==66)      //cb 
{ 

tmp[18]=203; 

} 
if(buffer[40]==67 && buffer[41]==67)      //cc 
{ 

tmp[18]=204; 

} 
if(buffer[40]==67 && buffer[41]==68)      //cd 
{ 

tmp[18]=205; 

} 
if(buffer[40]==67 && buffer[41]==69)      //ce  
{ 

tmp[18]=206; 

} 
if(buffer[40]==67 && buffer[41]==70)      //cf  
{ 

tmp[18]=207; 

} 
//------------ 


if(buffer[40]==68 && buffer[41]==48)      //d0       
{ 

tmp[18]=208; 

} 
 
if(buffer[40]==68 && buffer[41]==49)      //d1        
{ 

tmp[18]=209; 

} 
if(buffer[40]==68 && buffer[41]==50)      //d2        
{ 

tmp[18]=210; 

} 
if(buffer[40]==68 && buffer[41]==51)      //d3         
{ 

tmp[18]=211; 

} 
if(buffer[40]==68 && buffer[41]==52)      //d4        
{ 

tmp[18]=212; 

} 
if(buffer[40]==68 && buffer[41]==53)      //d5      
{ 

tmp[18]=213; 

} 
if(buffer[40]==68 && buffer[41]==54)      //d6       
{ 

tmp[18]=214; 

} 
if(buffer[40]==68 && buffer[41]==55)      //d7     
{ 

tmp[18]=215; 

} 
if(buffer[40]==68 && buffer[41]==56)      //d8     
{ 

tmp[18]=216; 

} 
if(buffer[40]==68 && buffer[41]==57)      //d9   
{ 

tmp[18]=217; 

} 

if(buffer[40]==68 && buffer[41]==65)      //da 
{ 

tmp[18]=218; 

} 

if(buffer[40]==68 && buffer[41]==66)      //db 
{ 

tmp[18]=219; 

} 
if(buffer[40]==68 && buffer[41]==67)      //dc 
{ 

tmp[18]=220; 

} 
if(buffer[40]==68 && buffer[41]==68)      //dd 
{ 

tmp[18]=221; 

} 
if(buffer[40]==68 && buffer[41]==69)      //de  
{ 

tmp[18]=222; 

} 
if(buffer[40]==68 && buffer[41]==70)      //df  
{ 

tmp[18]=223; 

} 
//------------ 



if(buffer[40]==69 && buffer[41]==48)      //e0       
{ 

tmp[18]=224; 

} 

if(buffer[40]==69 && buffer[41]==49)      //e1        
{ 

tmp[18]=225; 

} 
if(buffer[40]==69 && buffer[41]==50)      //e2        
{ 

tmp[18]=226; 

} 
if(buffer[40]==69 && buffer[41]==51)      //e3         
{ 

tmp[18]=227; 

} 
if(buffer[40]==69 && buffer[41]==52)      //e4        
{ 

tmp[18]=228; 

} 
if(buffer[40]==69 && buffer[41]==53)      //e5      
{ 

tmp[18]=229; 

} 
if(buffer[40]==69 && buffer[41]==54)      //e6       
{ 

tmp[18]=230; 

} 
if(buffer[40]==69 && buffer[41]==55)      //e7     
{ 

tmp[18]=231; 

} 
if(buffer[40]==69 && buffer[41]==56)      //e8     
{ 

tmp[18]=232; 

} 
if(buffer[40]==69 && buffer[41]==57)      //e9   
{ 

tmp[18]=233; 
 
} 

if(buffer[40]==69 && buffer[41]==65)      //ea 
{ 

tmp[18]=234; 

} 

if(buffer[40]==69 && buffer[41]==66)      //eb 
{ 

tmp[18]=235; 

} 
if(buffer[40]==69 && buffer[41]==67)      //ec 
{ 

tmp[18]=236; 

} 
if(buffer[40]==69 && buffer[41]==68)      //ed 
{ 

tmp[18]=237; 

} 
if(buffer[40]==69 && buffer[41]==69)      //ee  
{ 

tmp[18]=238; 

} 
if(buffer[40]==69 && buffer[41]==70)      //ef  
{ 

tmp[18]=239; 

} 
//------------ 

if(buffer[40]==70 && buffer[41]==48)      //f0       
{ 

tmp[18]=240; 

} 

if(buffer[40]==70 && buffer[41]==49)      //f1        
{ 

tmp[18]=241; 

} 
if(buffer[40]==70 && buffer[41]==50)      //f2        
{ 

tmp[18]=242; 

} 
if(buffer[40]==70 && buffer[41]==51)      //f3         
{ 

tmp[18]=243; 

} 
if(buffer[40]==70 && buffer[41]==52)      //f4        
{ 

tmp[18]=244; 

} 
if(buffer[40]==70 && buffer[41]==53)      //f5      
{ 

tmp[18]=245; 

} 
if(buffer[40]==70 && buffer[41]==54)      //f6       
{ 

tmp[18]=246; 

} 
if(buffer[40]==70 && buffer[41]==55)      //f7     
{ 

tmp[18]=247; 

} 
if(buffer[40]==70 && buffer[41]==56)      //f8     
{ 

tmp[18]=248; 

} 
if(buffer[40]==70 && buffer[41]==57)      //f9   
{ 

tmp[18]=249; 

} 

if(buffer[40]==70 && buffer[41]==65)      //fa 
{ 

tmp[18]=250; 

} 

if(buffer[40]==70 && buffer[41]==66)      //fb 
{ 

tmp[18]=251; 

} 
if(buffer[40]==70 && buffer[41]==67)      //fc 
{ 

tmp[18]=252; 

} 
if(buffer[40]==70 && buffer[41]==68)      //fd 
{ 

tmp[18]=253; 

} 
if(buffer[40]==70 && buffer[41]==69)      //fe  
{ 

tmp[18]=254; 

} 
if(buffer[40]==70 && buffer[41]==70)      //ff  
{ 

tmp[18]=255; 

} 

//----------------------- end of tmp[18]--------------------------- 



//----------------------- start of tmp[19]--------------------------- 


if(buffer[42]==48 && buffer[43]==48)      //00        
{ 

tmp[19]=0; 

} 

if(buffer[42]==48 && buffer[43]==49)      //01        
{ 

tmp[19]=1; 

} 
if(buffer[42]==48 && buffer[43]==50)      //02        
{ 

tmp[19]=2; 

} 
if(buffer[42]==48 && buffer[43]==51)      //03         
{ 

tmp[19]=3; 

} 
if(buffer[42]==48 && buffer[43]==52)      //04        
{ 

tmp[19]=4; 

} 
if(buffer[42]==48 && buffer[43]==53)      //05      
{ 

tmp[19]=5; 

} 


if(buffer[42]==48 && buffer[43]==54)      //06       
{ 

tmp[19]=6; 

} 
if(buffer[42]==48 && buffer[43]==55)      //07     
{ 

tmp[19]=7; 

} 
if(buffer[42]==48 && buffer[43]==56)      //08     
{ 

tmp[19]=8; 

} 
if(buffer[42]==48 && buffer[43]==57)      //09   
{ 
 
tmp[19]=9; 

} 

if(buffer[42]==48 && buffer[43]==65)      //0a 
{ 

tmp[19]=10; 

} 

if(buffer[42]==48 && buffer[43]==66)      //0b 
{ 

tmp[19]=11; 

} 
if(buffer[42]==48 && buffer[43]==67)      //0c 
{ 

tmp[19]=12; 

} 
if(buffer[42]==48 && buffer[43]==68)      //0d 
{ 

tmp[19]=13; 

} 
if(buffer[42]==48 && buffer[43]==69)      //0e  
{ 

tmp[19]=14; 

} 
if(buffer[42]==48 && buffer[43]==70)      //0f  
{ 

tmp[19]=15; 

} 

//----------- 

if(buffer[42]==49 && buffer[43]==48)      //        10 
{ 

tmp[19]=16; 

} 
if(buffer[42]==49 && buffer[43]==49)      //         11 
{ 

tmp[19]=17; 

} 
if(buffer[42]==49 && buffer[43]==50)      //         12 
{ 

tmp[19]=18; 

} 
if(buffer[42]==49 && buffer[43]==51)      //         13 
{ 

tmp[19]=19; 

} 
if(buffer[42]==49 && buffer[43]==52)      //         14 
{ 

tmp[19]=20; 

} 
if(buffer[42]==49 && buffer[43]==53)      //         15 
{ 

tmp[19]=21; 

} 
if(buffer[42]==49 && buffer[43]==54)      //         16 
{ 

tmp[19]=22; 

} 
if(buffer[42]==49 && buffer[43]==55)      //         17 
{ 

tmp[19]=23; 

} 
if(buffer[42]==49 && buffer[43]==56)      //         18 
{ 

tmp[19]=24; 

} 
if(buffer[42]==49 && buffer[43]==57)      //         19 
{ 

tmp[19]=25; 

} 

if(buffer[42]==49 && buffer[43]==65)      //         1a 
{ 

tmp[19]=26; 

} 
if(buffer[42]==49 && buffer[43]==66)      //         1b 
{ 

tmp[19]=27; 

} 
if(buffer[42]==49 && buffer[43]==67)      //         1c 
{ 

tmp[19]=28; 

} 
if(buffer[42]==49 && buffer[43]==68)      //         1d 
{ 

tmp[19]=29; 

} 
if(buffer[42]==49 && buffer[43]==69)      //         1e 
{ 

tmp[19]=30; 

} 
if(buffer[42]==49 && buffer[43]==70)      //         1f 
{ 

tmp[19]=31; 

} 


//--------------- 


if(buffer[42]==50 && buffer[43]==48)      //         20 
{ 

tmp[19]=32; 

} 

if(buffer[42]==50 && buffer[43]==49)      //         21 
{ 
 
tmp[19]=33; 

} 
if(buffer[42]==50 && buffer[43]==50)      //         22 
{ 

tmp[19]=34; 

} 
if(buffer[42]==50 && buffer[43]==51)      //         23 
{ 

tmp[19]=35; 

} 
if(buffer[42]==50 && buffer[43]==52)      //         24 
{ 

tmp[19]=36; 

} 
if(buffer[42]==50 && buffer[43]==53)      //         25 
{ 

tmp[19]=37; 

} 
if(buffer[42]==50 && buffer[43]==54)      //         26 
{ 

tmp[19]=38; 

} 
if(buffer[42]==50 && buffer[43]==55)      //         27 
{ 

tmp[19]=39; 

} 
if(buffer[42]==50 && buffer[43]==56)      //         28 
{ 

tmp[19]=40; 

} 
if(buffer[42]==50 && buffer[43]==57)      //         29 
{ 

tmp[19]=41; 

} 
if(buffer[42]==50 && buffer[43]==65)      //         2a 
{ 

tmp[19]=42; 

} 
if(buffer[42]==50 && buffer[43]==66)      //         2b 
{ 

tmp[19]=43; 

} 
if(buffer[42]==50 && buffer[43]==67)      //         2c 
{ 

tmp[19]=44; 

} 

if(buffer[42]==50 && buffer[43]==68)      //       2d  
{ 

tmp[19]=45; 

} 
if(buffer[42]==50 && buffer[43]==69)      //         2e 
{ 

tmp[19]=46; 

} 
if(buffer[42]==50 && buffer[43]==70)      //         2f 
{ 

tmp[19]=47; 

} 

//------------- 


if(buffer[42]==51 && buffer[43]==48)      // 30        
{ 

tmp[19]=48; 

} 

if(buffer[42]==51 && buffer[43]==49)      // 31        
{ 

tmp[19]=49; 
 
} 
if(buffer[42]==51 && buffer[43]==50)      // 32        
{ 

tmp[19]=50; 

} 
if(buffer[42]==51 && buffer[43]==51)      //33         
{ 

tmp[19]=51; 

} 
if(buffer[42]==51 && buffer[43]==52)      //34        
{ 

tmp[19]=52; 

} 
if(buffer[42]==51 && buffer[43]==53)      //35      
{ 

tmp[19]=53; 

} 
if(buffer[42]==51 && buffer[43]==54)      //36       
{ 
//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 
 
tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 
 
tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 
 
tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 
 
} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 
 
} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 
 
tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 
 
} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 
} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 
 
} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 
 
tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 
 

if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 
 
} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 
 
} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 
 
} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 

tmp[19]=54; 

} 
if(buffer[42]==51 && buffer[43]==55)      //37     
{ 

tmp[19]=55; 

} 
if(buffer[42]==51 && buffer[43]==56)      //38     
{ 

tmp[19]=56; 

} 
if(buffer[42]==51 && buffer[43]==57)      //39   
{ 

tmp[19]=57; 

} 

if(buffer[42]==51 && buffer[43]==65)      //3a 
{ 

tmp[19]=58; 

} 

if(buffer[42]==51 && buffer[43]==66)      //3b 
{ 

tmp[19]=59; 

} 
if(buffer[42]==51 && buffer[43]==67)      //3c 
{ 

tmp[19]=60; 

} 
if(buffer[42]==51 && buffer[43]==68)      //3d 
{ 

tmp[19]=61; 

} 
if(buffer[42]==51 && buffer[43]==69)      //3e  
{ 

tmp[19]=62; 

} 
if(buffer[42]==51 && buffer[43]==70)      //3f  
{ 

tmp[19]=63; 

} 

//------------ 
 

if(buffer[42]==52 && buffer[43]==48)      // 40       
{ 

tmp[19]=64; 

} 

if(buffer[42]==52 && buffer[43]==49)      // 41        
{ 

tmp[19]=65; 

} 
if(buffer[42]==52 && buffer[43]==50)      // 42        
{ 

tmp[19]=66; 

} 
if(buffer[42]==52 && buffer[43]==51)      //43         
{ 

tmp[19]=67; 

} 
if(buffer[42]==52 && buffer[43]==52)      //44        
{ 

tmp[19]=68; 

} 
if(buffer[42]==52 && buffer[43]==53)      //45      
{ 

tmp[19]=69; 

} 

if(buffer[42]==52 && buffer[43]==54)      //46       
{ 

tmp[19]=70; 

} 
if(buffer[42]==52 && buffer[43]==55)      //47     
{ 

tmp[19]=71; 

} 
if(buffer[42]==52 && buffer[43]==56)      //48     
{ 

tmp[19]=72; 

} 
if(buffer[42]==52 && buffer[43]==57)      //49   
{ 

tmp[19]=73; 

} 

if(buffer[42]==52 && buffer[43]==65)      //4a 
{ 

tmp[19]=74; 

} 

if(buffer[42]==52 && buffer[43]==66)      //4b 
{ 

tmp[19]=75; 

} 
if(buffer[42]==52 && buffer[43]==67)      //4c 
{ 

tmp[19]=76; 

} 
if(buffer[42]==52 && buffer[43]==68)      //4d 
{ 

tmp[19]=77; 

} 
if(buffer[42]==52 && buffer[43]==69)      //4e  
{ 

tmp[19]=78; 

} 
if(buffer[42]==52 && buffer[43]==70)      //4f  
{ 

tmp[19]=79; 

} 
//------------ 

 


if(buffer[42]==53 && buffer[43]==48)      //50       
{ 

tmp[19]=80; 

} 

if(buffer[42]==53 && buffer[43]==49)      //51        
{ 

tmp[19]=81; 

} 
if(buffer[42]==53 && buffer[43]==50)      //52        
{ 

tmp[19]=82; 

} 
if(buffer[42]==53 && buffer[43]==51)      //53         
{ 

tmp[19]=83; 

} 
if(buffer[42]==53 && buffer[43]==52)      //54        
{ 

tmp[19]=84; 

} 
if(buffer[42]==53 && buffer[43]==53)      //55      
{ 

tmp[19]=85; 

} 
if(buffer[42]==53 && buffer[43]==54)      //56       
{ 

tmp[19]=86; 

} 
if(buffer[42]==53 && buffer[43]==55)      //57     
{ 

tmp[19]=87; 

} 
if(buffer[42]==53 && buffer[43]==56)      //58     
{ 

tmp[19]=88; 

} 
if(buffer[42]==53 && buffer[43]==57)      //59   
{ 

tmp[19]=89; 

} 

if(buffer[42]==53 && buffer[43]==65)      //5a 
{ 

tmp[19]=90; 

} 

if(buffer[42]==53 && buffer[43]==66)      //5b 
{ 

tmp[19]=91; 

} 
if(buffer[42]==53 && buffer[43]==67)      //5c 
{ 

tmp[19]=92; 

} 
if(buffer[42]==53 && buffer[43]==68)      //5d 
{ 

tmp[19]=93; 

} 
if(buffer[42]==53 && buffer[43]==69)      //5e  
{ 

tmp[19]=94; 

} 
if(buffer[42]==53 && buffer[43]==70)      //5f  
{ 

tmp[19]=95; 

} 
//------------ 

 


if(buffer[42]==54 && buffer[43]==48)      //60       
{ 

tmp[19]=96; 

} 

if(buffer[42]==54 && buffer[43]==49)      //61        
{ 

tmp[19]=97; 

} 
if(buffer[42]==54 && buffer[43]==50)      //62        
{ 

tmp[19]=98; 

} 
if(buffer[42]==54 && buffer[43]==51)      //63         
{ 

tmp[19]=99; 

} 
if(buffer[42]==54 && buffer[43]==52)      //64        
{ 

tmp[19]=100; 

} 
if(buffer[42]==54 && buffer[43]==53)      //65      
{ 

tmp[19]=101; 

} 
if(buffer[42]==54 && buffer[43]==54)      //66       
{ 

tmp[19]=102; 

} 
if(buffer[42]==54 && buffer[43]==55)      //67     
{ 

tmp[19]=103; 

} 
if(buffer[42]==54 && buffer[43]==56)      //68     
{ 

tmp[19]=104; 

} 
if(buffer[42]==54 && buffer[43]==57)      //69   
{ 

tmp[19]=105; 

} 

if(buffer[42]==54 && buffer[43]==65)      //6a 
{ 

tmp[19]=106; 

} 

if(buffer[42]==54 && buffer[43]==66)      //6b 
{ 

tmp[19]=107; 

} 
if(buffer[42]==54 && buffer[43]==67)      //6c 
{ 

tmp[19]=108; 

} 
if(buffer[42]==54 && buffer[43]==68)      //6d 
{ 

tmp[19]=109; 

} 
if(buffer[42]==54 && buffer[43]==69)      //6e  
{ 

tmp[19]=110; 

} 
if(buffer[42]==54 && buffer[43]==70)      //6f  
{ 

tmp[19]=111; 

} 
//------------ 

 


if(buffer[42]==55 && buffer[43]==48)      //70       
{ 

tmp[19]=112; 

} 

if(buffer[42]==55 && buffer[43]==49)      //71        
{ 

tmp[19]=113; 

} 
if(buffer[42]==55 && buffer[43]==50)      //72        
{ 

tmp[19]=114; 

} 
if(buffer[42]==55 && buffer[43]==51)      //73         
{ 

tmp[19]=115; 

} 
if(buffer[42]==55 && buffer[43]==52)      //74        
{ 

tmp[19]=116; 

} 
if(buffer[42]==55 && buffer[43]==53)      //75      
{ 

tmp[19]=117; 

} 
if(buffer[42]==55 && buffer[43]==54)      //76       
{ 

tmp[19]=118; 

} 
if(buffer[42]==55 && buffer[43]==55)      //77     
{ 

tmp[19]=119; 

} 
if(buffer[42]==55 && buffer[43]==56)      //78     
{ 

tmp[19]=120; 

} 
if(buffer[42]==55 && buffer[43]==57)      //79   
{ 

tmp[19]=121; 

} 

if(buffer[42]==55 && buffer[43]==65)      //7a 
{ 

tmp[19]=122; 

} 

if(buffer[42]==55 && buffer[43]==66)      //7b 
{ 

tmp[19]=123; 

} 
if(buffer[42]==55 && buffer[43]==67)      //7c 
{ 

tmp[19]=124; 

} 
if(buffer[42]==55 && buffer[43]==68)      //7d 
{ 

tmp[19]=125; 

} 
if(buffer[42]==55 && buffer[43]==69)      //7e  
{ 

tmp[19]=126; 

} 
if(buffer[42]==55 && buffer[43]==70)      //7f  
{ 

tmp[19]=127; 

} 

//------------ 
 
if(buffer[42]==56 && buffer[43]==48)      //80       
{ 

tmp[19]=128; 

} 

if(buffer[42]==56 && buffer[43]==49)      //81        
{ 

tmp[19]=129; 

} 
if(buffer[42]==56 && buffer[43]==50)      //82        
{ 

tmp[19]=130; 

} 
if(buffer[42]==56 && buffer[43]==51)      //83         
{ 

tmp[19]=131; 

} 
if(buffer[42]==56 && buffer[43]==52)      //84        
{ 

tmp[19]=132; 

} 
if(buffer[42]==56 && buffer[43]==53)      //85      
{ 

tmp[19]=133; 

} 
if(buffer[42]==56 && buffer[43]==54)      //86       
{ 

tmp[19]=134; 

} 
if(buffer[42]==56 && buffer[43]==55)      //87     
{ 

tmp[19]=135; 

} 
if(buffer[42]==56 && buffer[43]==56)      //88     
{ 
 
tmp[19]=136; 

} 
if(buffer[42]==56 && buffer[43]==57)      //89   
{ 

tmp[19]=137; 

} 

if(buffer[42]==56 && buffer[43]==65)      //8a 
{ 

tmp[19]=138; 

} 

if(buffer[42]==56 && buffer[43]==66)      //8b 
{ 

tmp[19]=139; 

} 
if(buffer[42]==56 && buffer[43]==67)      //8c 
{ 

tmp[19]=140; 

} 
if(buffer[42]==56 && buffer[43]==68)      //8d 
{ 

tmp[19]=141; 

} 
if(buffer[42]==56 && buffer[43]==69)      //8e  
{ 

tmp[19]=142; 

} 
if(buffer[42]==56 && buffer[43]==70)      //8f  
{ 

tmp[19]=143; 

} 
//------------ 


if(buffer[42]==57 && buffer[43]==48)      //90       
{ 

tmp[19]=144; 

} 

if(buffer[42]==57 && buffer[43]==49)      //91        
{ 

tmp[19]=145; 

} 
if(buffer[42]==57 && buffer[43]==50)      //92        
{ 

tmp[19]=146; 

} 
if(buffer[42]==57 && buffer[43]==51)      //93         
{ 

tmp[19]=147; 

} 
if(buffer[42]==57 && buffer[43]==52)      //94        
{ 

tmp[19]=148; 

} 
if(buffer[42]==57 && buffer[43]==53)      //95      
{ 

tmp[19]=149; 

} 
if(buffer[42]==57 && buffer[43]==54)      //96       
{ 

tmp[19]=150; 

} 
if(buffer[42]==57 && buffer[43]==55)      //97     
{ 

tmp[19]=151; 

} 
if(buffer[42]==57 && buffer[43]==56)      //98     
{ 

tmp[19]=152; 
 
} 
if(buffer[42]==57 && buffer[43]==57)      //99   
{ 

tmp[19]=153; 

} 

if(buffer[42]==57 && buffer[43]==65)      //9a 
{ 

tmp[19]=154; 

} 

if(buffer[42]==57 && buffer[43]==66)      //9b 
{ 

tmp[19]=155; 

} 
if(buffer[42]==57 && buffer[43]==67)      //9c 
{ 

tmp[19]=156; 

} 
if(buffer[42]==57 && buffer[43]==68)      //9d 
{ 

tmp[19]=157; 

} 
if(buffer[42]==57 && buffer[43]==69)      //9e  
{ 

tmp[19]=158; 

} 
if(buffer[42]==57 && buffer[43]==70)      //9f  
{ 

tmp[19]=159; 

} 
//------------ 


if(buffer[42]==65 && buffer[43]==48)      //a0       
{ 

tmp[19]=160; 

} 

if(buffer[42]==65 && buffer[43]==49)      //a1        
{ 

tmp[19]=161; 

} 
if(buffer[42]==65 && buffer[43]==50)      //a2        
{ 

tmp[19]=162; 

} 
if(buffer[42]==65 && buffer[43]==51)      //a3         
{ 

tmp[19]=163; 

} 
if(buffer[42]==65 && buffer[43]==52)      //a4        
{ 

tmp[19]=164; 

} 
if(buffer[42]==65 && buffer[43]==53)      //a5      
{ 

tmp[19]=165; 

} 
if(buffer[42]==65 && buffer[43]==54)      //a6       
{ 

tmp[19]=166; 

} 
if(buffer[42]==65 && buffer[43]==55)      //a7     
{ 

tmp[19]=167; 

} 
if(buffer[42]==65 && buffer[43]==56)      //a8     
{ 

tmp[19]=168; 

} 
if(buffer[42]==65 && buffer[43]==57)      //a9   
{ 

tmp[19]=169; 

} 

if(buffer[42]==65 && buffer[43]==65)      //aa 
{ 

tmp[19]=170; 

} 

if(buffer[42]==65 && buffer[43]==66)      //ab 
{ 

tmp[19]=171; 

} 
if(buffer[42]==65 && buffer[43]==67)      //ac 
{ 

tmp[19]=172; 

} 
if(buffer[42]==65 && buffer[43]==68)      //ad 
{ 

tmp[19]=173; 

} 
if(buffer[42]==65 && buffer[43]==69)      //ae  
{ 

tmp[19]=174; 

} 
if(buffer[42]==65 && buffer[43]==70)      //af  
{ 

tmp[19]=175; 

} 
//------------ 


if(buffer[42]==66 && buffer[43]==48)      //b0       
{ 

tmp[19]=176; 

} 

if(buffer[42]==66 && buffer[43]==49)      //b1        
{ 

tmp[19]=177; 

} 
if(buffer[42]==66 && buffer[43]==50)      //b2        
{ 

tmp[19]=178; 

} 
if(buffer[42]==66 && buffer[43]==51)      //b3         
{ 

tmp[19]=179; 

} 
if(buffer[42]==66 && buffer[43]==52)      //b4        
{ 

tmp[19]=180; 

} 
if(buffer[42]==66 && buffer[43]==53)      //b5      
{ 

tmp[19]=181; 

} 
if(buffer[42]==66 && buffer[43]==54)      //b6       
{ 

tmp[19]=182; 

} 
if(buffer[42]==66 && buffer[43]==55)      //b7     
{ 

tmp[19]=183; 

} 
if(buffer[42]==66 && buffer[43]==56)      //b8     
{ 

tmp[19]=184; 

} 
if(buffer[42]==66 && buffer[43]==57)      //b9   
{ 
 
tmp[19]=185; 

} 

if(buffer[42]==66 && buffer[43]==65)      //ba 
{ 

tmp[19]=186; 

} 

if(buffer[42]==66 && buffer[43]==66)      //bb 
{ 

tmp[19]=187; 

} 
if(buffer[42]==66 && buffer[43]==67)      //bc 
{ 

tmp[19]=188; 

} 
if(buffer[42]==66 && buffer[43]==68)      //bd 
{ 

tmp[19]=189; 

} 
if(buffer[42]==66 && buffer[43]==69)      //be  
{ 

tmp[19]=190; 

} 
if(buffer[42]==66 && buffer[43]==70)      //bf  
{ 

tmp[19]=191; 

} 
//------------ 



if(buffer[42]==67 && buffer[43]==48)      //c0       
{ 

tmp[19]=192; 

} 
 
if(buffer[42]==67 && buffer[43]==49)      //c1        
{ 

tmp[19]=193; 

} 
if(buffer[42]==67 && buffer[43]==50)      //c2        
{ 

tmp[19]=194; 

} 
if(buffer[42]==67 && buffer[43]==51)      //c3         
{ 

tmp[19]=195; 

} 
if(buffer[42]==67 && buffer[43]==52)      //c4        
{ 

tmp[19]=196; 

} 
if(buffer[42]==67 && buffer[43]==53)      //c5      
{ 

tmp[19]=197; 

} 
if(buffer[42]==67 && buffer[43]==54)      //c6       
{ 

tmp[19]=198; 

} 
if(buffer[42]==67 && buffer[43]==55)      //c7     
{ 

tmp[19]=199; 

} 
if(buffer[42]==67 && buffer[43]==56)      //c8     
{ 

tmp[19]=200; 

} 
if(buffer[42]==67 && buffer[43]==57)      //c9   
{ 

tmp[19]=201; 

} 

if(buffer[42]==67 && buffer[43]==65)      //ca 
{ 

tmp[19]=202; 

} 

if(buffer[42]==67 && buffer[43]==66)      //cb 
{ 

tmp[19]=203; 

} 
if(buffer[42]==67 && buffer[43]==67)      //cc 
{ 

tmp[19]=204; 

} 
if(buffer[42]==67 && buffer[43]==68)      //cd 
{ 

tmp[19]=205; 

} 
if(buffer[42]==67 && buffer[43]==69)      //ce  
{ 

tmp[19]=206; 

} 
if(buffer[42]==67 && buffer[43]==70)      //cf  
{ 

tmp[19]=207; 

} 
//------------ 


if(buffer[42]==68 && buffer[43]==48)      //d0       
{ 

tmp[19]=208; 

} 

if(buffer[42]==68 && buffer[43]==49)      //d1        
{ 

tmp[19]=209; 

} 
if(buffer[42]==68 && buffer[43]==50)      //d2        
{ 

tmp[19]=210; 

} 
if(buffer[42]==68 && buffer[43]==51)      //d3         
{ 

tmp[19]=211; 

} 
if(buffer[42]==68 && buffer[43]==52)      //d4        
{ 

tmp[19]=212; 

} 
if(buffer[42]==68 && buffer[43]==53)      //d5      
{ 

tmp[19]=213; 

} 
if(buffer[42]==68 && buffer[43]==54)      //d6       
{ 

tmp[19]=214; 

} 
if(buffer[42]==68 && buffer[43]==55)      //d7     
{ 

tmp[19]=215; 

} 
if(buffer[42]==68 && buffer[43]==56)      //d8     
{ 

tmp[19]=216; 

} 
if(buffer[42]==68 && buffer[43]==57)      //d9   
{ 

tmp[19]=217; 

} 

if(buffer[42]==68 && buffer[43]==65)      //da 
{ 

tmp[19]=218; 

} 

if(buffer[42]==68 && buffer[43]==66)      //db 
{ 

tmp[19]=219; 

} 
if(buffer[42]==68 && buffer[43]==67)      //dc 
{ 

tmp[19]=220; 

} 
if(buffer[42]==68 && buffer[43]==68)      //dd 
{ 

tmp[19]=221; 

} 
if(buffer[42]==68 && buffer[43]==69)      //de  
{ 

tmp[19]=222; 

} 
if(buffer[42]==68 && buffer[43]==70)      //df  
{ 

tmp[19]=223; 

} 
//------------ 



if(buffer[42]==69 && buffer[43]==48)      //e0       
{ 

tmp[19]=224; 

} 

if(buffer[42]==69 && buffer[43]==49)      //e1        
{ 
 
tmp[19]=225; 

} 
if(buffer[42]==69 && buffer[43]==50)      //e2        
{ 

tmp[19]=226; 

} 
if(buffer[42]==69 && buffer[43]==51)      //e3         
{ 

tmp[19]=227; 

} 
if(buffer[42]==69 && buffer[43]==52)      //e4        
{ 

tmp[19]=228; 

} 
if(buffer[42]==69 && buffer[43]==53)      //e5      
{ 

tmp[19]=229; 

} 
if(buffer[42]==69 && buffer[43]==54)      //e6       
{ 

tmp[19]=230; 

} 
if(buffer[42]==69 && buffer[43]==55)      //e7     
{ 

tmp[19]=231; 

} 
if(buffer[42]==69 && buffer[43]==56)      //e8     
{ 

tmp[19]=232; 

} 
if(buffer[42]==69 && buffer[43]==57)      //e9   
{ 

tmp[19]=233; 

} 
 
if(buffer[42]==69 && buffer[43]==65)      //ea 
{ 

tmp[19]=234; 

} 

if(buffer[42]==69 && buffer[43]==66)      //eb 
{ 

tmp[19]=235; 

} 
if(buffer[42]==69 && buffer[43]==67)      //ec 
{ 

tmp[19]=236; 

} 
if(buffer[42]==69 && buffer[43]==68)      //ed 
{ 

tmp[19]=237; 

} 
if(buffer[42]==69 && buffer[43]==69)      //ee  
{ 

tmp[19]=238; 

} 
if(buffer[42]==69 && buffer[43]==70)      //ef  
{ 

tmp[19]=239; 

} 
//------------ 

if(buffer[42]==70 && buffer[43]==48)      //f0       
{ 

tmp[19]=240; 

} 

if(buffer[42]==70 && buffer[43]==49)      //f1        
{ 

tmp[19]=241; 

} 
if(buffer[42]==70 && buffer[43]==50)      //f2        
{ 

tmp[19]=242; 

} 
if(buffer[42]==70 && buffer[43]==51)      //f3         
{ 

tmp[19]=243; 

} 
if(buffer[42]==70 && buffer[43]==52)      //f4        
{ 

tmp[19]=244; 

} 
if(buffer[42]==70 && buffer[43]==53)      //f5      
{ 

tmp[19]=245; 

} 
if(buffer[42]==70 && buffer[43]==54)      //f6       
{ 

tmp[19]=246; 

} 
if(buffer[42]==70 && buffer[43]==55)      //f7     
{ 

tmp[19]=247; 

} 
if(buffer[42]==70 && buffer[43]==56)      //f8     
{ 

tmp[19]=248; 

} 
if(buffer[42]==70 && buffer[43]==57)      //f9   
{ 

tmp[19]=249; 

} 

if(buffer[42]==70 && buffer[43]==65)      //fa 
{ 
 
tmp[19]=250; 

} 

if(buffer[42]==70 && buffer[43]==66)      //fb 
{ 

tmp[19]=251; 

} 
if(buffer[42]==70 && buffer[43]==67)      //fc 
{ 

tmp[19]=252; 

} 
if(buffer[42]==70 && buffer[43]==68)      //fd 
{ 

tmp[19]=253; 

} 
if(buffer[42]==70 && buffer[43]==69)      //fe  
{ 

tmp[19]=254; 

} 
if(buffer[42]==70 && buffer[43]==70)      //ff  
{ 

tmp[19]=255; 

} 

//----------------------- end of tmp[19]--------------------------- 


//----------------------- start of tmp[20]--------------------------- 


if(buffer[44]==48 && buffer[45]==48)      //00        
{ 

tmp[20]=0; 

} 

if(buffer[44]==48 && buffer[45]==49)      //01        
{ 

tmp[20]=1; 

} 
if(buffer[44]==48 && buffer[45]==50)      //02        
{ 

tmp[20]=2; 

} 
if(buffer[44]==48 && buffer[45]==51)      //03         
{ 

tmp[20]=3; 

} 
if(buffer[44]==48 && buffer[45]==52)      //04        
{ 

tmp[20]=4; 

} 
if(buffer[44]==48 && buffer[45]==53)      //05      
{ 

tmp[20]=5; 

} 


if(buffer[44]==48 && buffer[45]==54)      //06       
{ 

tmp[20]=6; 

} 
if(buffer[44]==48 && buffer[45]==55)      //07     
{ 

tmp[20]=7; 

} 
if(buffer[44]==48 && buffer[45]==56)      //08     
{ 

tmp[20]=8; 

} 
if(buffer[44]==48 && buffer[45]==57)      //09   
{ 

tmp[20]=9; 

} 

if(buffer[44]==48 && buffer[45]==65)      //0a 
{ 

tmp[20]=10; 

} 

if(buffer[44]==48 && buffer[45]==66)      //0b 
{ 

tmp[20]=11; 

} 
if(buffer[44]==48 && buffer[45]==67)      //0c 
{ 

tmp[20]=12; 

} 
if(buffer[44]==48 && buffer[45]==68)      //0d 
{ 

tmp[20]=13; 

} 
if(buffer[44]==48 && buffer[45]==69)      //0e  
{ 

tmp[20]=14; 

} 
if(buffer[44]==48 && buffer[45]==70)      //0f  
{ 

tmp[20]=15; 

} 

//----------- 

if(buffer[44]==49 && buffer[45]==48)      //        10 
{ 

tmp[20]=16; 

} 
if(buffer[44]==49 && buffer[45]==49)      //         11 
{ 

tmp[20]=17; 
 
} 
if(buffer[44]==49 && buffer[45]==50)      //         12 
{ 

tmp[20]=18; 

} 
if(buffer[44]==49 && buffer[45]==51)      //         13 
{ 

tmp[20]=19; 

} 
if(buffer[44]==49 && buffer[45]==52)      //         14 
{ 

tmp[20]=20; 

} 
if(buffer[44]==49 && buffer[45]==53)      //         15 
{ 

tmp[20]=21; 

} 
if(buffer[44]==49 && buffer[45]==54)      //         16 
{ 

tmp[20]=22; 

} 
if(buffer[44]==49 && buffer[45]==55)      //         17 
{ 

tmp[20]=23; 

} 
if(buffer[44]==49 && buffer[45]==56)      //         18 
{ 

tmp[20]=24; 

} 
if(buffer[44]==49 && buffer[45]==57)      //         19 
{ 

tmp[20]=25; 

} 

if(buffer[44]==49 && buffer[45]==65)      //         1a 
{ 

tmp[20]=26; 

} 
if(buffer[44]==49 && buffer[45]==66)      //         1b 
{ 

tmp[20]=27; 

} 
if(buffer[44]==49 && buffer[45]==67)      //         1c 
{ 

tmp[20]=28; 

} 
if(buffer[44]==49 && buffer[45]==68)      //         1d 
{ 

tmp[20]=29; 

} 
if(buffer[44]==49 && buffer[45]==69)      //         1e 
{ 

tmp[20]=30; 

} 
if(buffer[44]==49 && buffer[45]==70)      //         1f 
{ 

tmp[20]=31; 

} 


//--------------- 


if(buffer[44]==50 && buffer[45]==48)      //         20 
{ 

tmp[20]=32; 

} 

if(buffer[44]==50 && buffer[45]==49)      //         21 
{ 

tmp[20]=33; 

} 
if(buffer[44]==50 && buffer[45]==50)      //         22 
{ 

tmp[20]=34; 

} 
if(buffer[44]==50 && buffer[45]==51)      //         23 
{ 

tmp[20]=35; 

} 
if(buffer[44]==50 && buffer[45]==52)      //         24 
{ 

tmp[20]=36; 

} 
if(buffer[44]==50 && buffer[45]==53)      //         25 
{ 

tmp[20]=37; 

} 
if(buffer[44]==50 && buffer[45]==54)      //         26 
{ 

tmp[20]=38; 

} 
if(buffer[44]==50 && buffer[45]==55)      //         27 
{ 

tmp[20]=39; 

} 
if(buffer[44]==50 && buffer[45]==56)      //         28 
{ 

tmp[20]=40; 

} 
if(buffer[44]==50 && buffer[45]==57)      //         29 
{ 

tmp[20]=41; 

} 
if(buffer[44]==50 && buffer[45]==65)      //         2a 
{ 

tmp[20]=42; 

} 
if(buffer[44]==50 && buffer[45]==66)      //         2b 
{ 

tmp[20]=43; 

} 
if(buffer[44]==50 && buffer[45]==67)      //         2c 
{ 

tmp[20]=44; 

} 

if(buffer[44]==50 && buffer[45]==68)      //       2d  
{ 

tmp[20]=45; 

} 
if(buffer[44]==50 && buffer[45]==69)      //         2e 
{ 

tmp[20]=46; 

} 
if(buffer[44]==50 && buffer[45]==70)      //         2f 
{ 

tmp[20]=47; 

} 

//------------- 


if(buffer[44]==51 && buffer[45]==48)      // 30        
{ 

tmp[20]=48; 

} 

if(buffer[44]==51 && buffer[45]==49)      // 31        
{ 

tmp[20]=49; 

} 
if(buffer[44]==51 && buffer[45]==50)      // 32        
{ 

tmp[20]=50; 

} 
if(buffer[44]==51 && buffer[45]==51)      //33         
{ 

tmp[20]=51; 

} 
if(buffer[44]==51 && buffer[45]==52)      //34        
{ 

tmp[20]=52; 

} 
if(buffer[44]==51 && buffer[45]==53)      //35      
{ 

tmp[20]=53; 

} 
if(buffer[44]==51 && buffer[45]==54)      //36       
{ 
//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 

} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

//----------------------- start of tmp[31]--------------------------- 


if(buffer[68]==48 && buffer[69]==48)      //00        
{ 

tmp[31]=0; 

} 

if(buffer[68]==48 && buffer[69]==49)      //01        
{ 

tmp[31]=1; 

} 
if(buffer[68]==48 && buffer[69]==50)      //02        
{ 

tmp[31]=2; 

} 
if(buffer[68]==48 && buffer[69]==51)      //03         
{ 

tmp[31]=3; 
 
} 
if(buffer[68]==48 && buffer[69]==52)      //04        
{ 

tmp[31]=4; 

} 
if(buffer[68]==48 && buffer[69]==53)      //05      
{ 

tmp[31]=5; 

} 


if(buffer[68]==48 && buffer[69]==54)      //06       
{ 

tmp[31]=6; 

} 
if(buffer[68]==48 && buffer[69]==55)      //07     
{ 

tmp[31]=7; 

} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 
 
} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 
 
tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 

} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 

tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 
 
} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 
 
tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 

} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 
 
} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 

//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 

} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 
 
} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 
 
tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 

} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 
 
} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 
 
tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 

} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 
 
} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 
 
tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 

} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 
 
} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 

//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 
 
} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 


if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 

tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 
 
tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 
 
tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 

} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 
 
} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 
 
} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 

} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 

if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 
 
tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 

} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 
 
} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 
} 
if(buffer[68]==48 && buffer[69]==56)      //08     
{ 

tmp[31]=8; 

} 
if(buffer[68]==48 && buffer[69]==57)      //09   
{ 

tmp[31]=9; 

} 

if(buffer[68]==48 && buffer[69]==65)      //0a 
{ 

tmp[31]=10; 

} 

if(buffer[68]==48 && buffer[69]==66)      //0b 
{ 

tmp[31]=11; 

} 
if(buffer[68]==48 && buffer[69]==67)      //0c 
{ 

tmp[31]=12; 

} 
if(buffer[68]==48 && buffer[69]==68)      //0d 
{ 

tmp[31]=13; 

} 
if(buffer[68]==48 && buffer[69]==69)      //0e  
{ 

tmp[31]=14; 

} 
if(buffer[68]==48 && buffer[69]==70)      //0f  
{ 

tmp[31]=15; 

} 

//----------- 

if(buffer[68]==49 && buffer[69]==48)      //        10 
{ 

tmp[31]=16; 

} 
if(buffer[68]==49 && buffer[69]==49)      //         11 
{ 

tmp[31]=17; 

} 
if(buffer[68]==49 && buffer[69]==50)      //         12 
{ 

tmp[31]=18; 

} 
if(buffer[68]==49 && buffer[69]==51)      //         13 
{ 

tmp[31]=19; 

} 
if(buffer[68]==49 && buffer[69]==52)      //         14 
{ 

tmp[31]=20; 

} 
if(buffer[68]==49 && buffer[69]==53)      //         15 
{ 

tmp[31]=21; 

} 
if(buffer[68]==49 && buffer[69]==54)      //         16 
{ 

tmp[31]=22; 

} 
if(buffer[68]==49 && buffer[69]==55)      //         17 
{ 

tmp[31]=23; 

} 
if(buffer[68]==49 && buffer[69]==56)      //         18 
{ 

tmp[31]=24; 

} 
if(buffer[68]==49 && buffer[69]==57)      //         19 
{ 

tmp[31]=25; 

} 

if(buffer[68]==49 && buffer[69]==65)      //         1a 
{ 

tmp[31]=26; 

} 
if(buffer[68]==49 && buffer[69]==66)      //         1b 
{ 

tmp[31]=27; 

} 
if(buffer[68]==49 && buffer[69]==67)      //         1c 
{ 

tmp[31]=28; 

} 
if(buffer[68]==49 && buffer[69]==68)      //         1d 
{ 

tmp[31]=29; 

} 
if(buffer[68]==49 && buffer[69]==69)      //         1e 
{ 

tmp[31]=30; 

} 
if(buffer[68]==49 && buffer[69]==70)      //         1f 
{ 

tmp[31]=31; 
 
} 


//--------------- 


if(buffer[68]==50 && buffer[69]==48)      //         20 
{ 

tmp[31]=32; 

} 

if(buffer[68]==50 && buffer[69]==49)      //         21 
{ 

tmp[31]=33; 

} 
if(buffer[68]==50 && buffer[69]==50)      //         22 
{ 

tmp[31]=34; 

} 
if(buffer[68]==50 && buffer[69]==51)      //         23 
{ 

tmp[31]=35; 

} 
if(buffer[68]==50 && buffer[69]==52)      //         24 
{ 

tmp[31]=36; 

} 
if(buffer[68]==50 && buffer[69]==53)      //         25 
{ 

tmp[31]=37; 

} 
if(buffer[68]==50 && buffer[69]==54)      //         26 
{ 

tmp[31]=38; 

} 
if(buffer[68]==50 && buffer[69]==55)      //         27 
{ 
 
tmp[31]=39; 

} 
if(buffer[68]==50 && buffer[69]==56)      //         28 
{ 

tmp[31]=40; 

} 
if(buffer[68]==50 && buffer[69]==57)      //         29 
{ 

tmp[31]=41; 

} 
if(buffer[68]==50 && buffer[69]==65)      //         2a 
{ 

tmp[31]=42; 

} 
if(buffer[68]==50 && buffer[69]==66)      //         2b 
{ 

tmp[31]=43; 

} 
if(buffer[68]==50 && buffer[69]==67)      //         2c 
{ 

tmp[31]=44; 

} 

if(buffer[68]==50 && buffer[69]==68)      //       2d  
{ 

tmp[31]=45; 

} 
if(buffer[68]==50 && buffer[69]==69)      //         2e 
{ 

tmp[31]=46; 

} 
if(buffer[68]==50 && buffer[69]==70)      //         2f 
{ 

tmp[31]=47; 

} 

//------------- 


if(buffer[68]==51 && buffer[69]==48)      // 30        
{ 

tmp[31]=48; 

} 

if(buffer[68]==51 && buffer[69]==49)      // 31        
{ 

tmp[31]=49; 

} 
if(buffer[68]==51 && buffer[69]==50)      // 32        
{ 

tmp[31]=50; 

} 
if(buffer[68]==51 && buffer[69]==51)      //33         
{ 

tmp[31]=51; 

} 
if(buffer[68]==51 && buffer[69]==52)      //34        
{ 

tmp[31]=52; 

} 
if(buffer[68]==51 && buffer[69]==53)      //35      
{ 

tmp[31]=53; 

} 
if(buffer[68]==51 && buffer[69]==54)      //36       
{ 

tmp[31]=54; 

} 
if(buffer[68]==51 && buffer[69]==55)      //37     
{ 

tmp[31]=55; 
 
} 
if(buffer[68]==51 && buffer[69]==56)      //38     
{ 

tmp[31]=56; 

} 
if(buffer[68]==51 && buffer[69]==57)      //39   
{ 

tmp[31]=57; 

} 

if(buffer[68]==51 && buffer[69]==65)      //3a 
{ 

tmp[31]=58; 

} 

if(buffer[68]==51 && buffer[69]==66)      //3b 
{ 

tmp[31]=59; 

} 
if(buffer[68]==51 && buffer[69]==67)      //3c 
{ 

tmp[31]=60; 

} 
if(buffer[68]==51 && buffer[69]==68)      //3d 
{ 

tmp[31]=61; 

} 
if(buffer[68]==51 && buffer[69]==69)      //3e  
{ 

tmp[31]=62; 

} 
if(buffer[68]==51 && buffer[69]==70)      //3f  
{ 

tmp[31]=63; 

} 
 
//------------ 


if(buffer[68]==52 && buffer[69]==48)      // 40       
{ 

tmp[31]=64; 

} 

if(buffer[68]==52 && buffer[69]==49)      // 41        
{ 

tmp[31]=65; 

} 
if(buffer[68]==52 && buffer[69]==50)      // 42        
{ 

tmp[31]=66; 

} 
if(buffer[68]==52 && buffer[69]==51)      //43         
{ 

tmp[31]=67; 

} 
if(buffer[68]==52 && buffer[69]==52)      //44        
{ 

tmp[31]=68; 

} 
if(buffer[68]==52 && buffer[69]==53)      //45      
{ 

tmp[31]=69; 

} 

if(buffer[68]==52 && buffer[69]==54)      //46       
{ 

tmp[31]=70; 

} 
if(buffer[68]==52 && buffer[69]==55)      //47     
{ 

tmp[31]=71; 
 
} 
if(buffer[68]==52 && buffer[69]==56)      //48     
{ 

tmp[31]=72; 

} 
if(buffer[68]==52 && buffer[69]==57)      //49   
{ 

tmp[31]=73; 

} 

if(buffer[68]==52 && buffer[69]==65)      //4a 
{ 

tmp[31]=74; 

} 

if(buffer[68]==52 && buffer[69]==66)      //4b 
{ 

tmp[31]=75; 

} 
if(buffer[68]==52 && buffer[69]==67)      //4c 
{ 

tmp[31]=76; 

} 
if(buffer[68]==52 && buffer[69]==68)      //4d 
{ 

tmp[31]=77; 

} 
if(buffer[68]==52 && buffer[69]==69)      //4e  
{ 

tmp[31]=78; 

} 
if(buffer[68]==52 && buffer[69]==70)      //4f  
{ 

tmp[31]=79; 

} 
//------------ 




if(buffer[68]==53 && buffer[69]==48)      //50       
{ 

tmp[31]=80; 

} 

if(buffer[68]==53 && buffer[69]==49)      //51        
{ 

tmp[31]=81; 

} 
if(buffer[68]==53 && buffer[69]==50)      //52        
{ 

tmp[31]=82; 

} 
if(buffer[68]==53 && buffer[69]==51)      //53         
{ 

tmp[31]=83; 

} 
if(buffer[68]==53 && buffer[69]==52)      //54        
{ 

tmp[31]=84; 

} 
if(buffer[68]==53 && buffer[69]==53)      //55      
{ 

tmp[31]=85; 

} 
if(buffer[68]==53 && buffer[69]==54)      //56       
{ 

tmp[31]=86; 

} 
if(buffer[68]==53 && buffer[69]==55)      //57     
{ 

tmp[31]=87; 
 
} 
if(buffer[68]==53 && buffer[69]==56)      //58     
{ 

tmp[31]=88; 

} 
if(buffer[68]==53 && buffer[69]==57)      //59   
{ 

tmp[31]=89; 

} 

if(buffer[68]==53 && buffer[69]==65)      //5a 
{ 

tmp[31]=90; 

} 

if(buffer[68]==53 && buffer[69]==66)      //5b 
{ 

tmp[31]=91; 

} 
if(buffer[68]==53 && buffer[69]==67)      //5c 
{ 

tmp[31]=92; 

} 
if(buffer[68]==53 && buffer[69]==68)      //5d 
{ 

tmp[31]=93; 

} 
if(buffer[68]==53 && buffer[69]==69)      //5e  
{ 

tmp[31]=94; 

} 
if(buffer[68]==53 && buffer[69]==70)      //5f  
{ 

tmp[31]=95; 

} 
//------------ 




if(buffer[68]==54 && buffer[69]==48)      //60       
{ 

tmp[31]=96; 

} 

if(buffer[68]==54 && buffer[69]==49)      //61        
{ 

tmp[31]=97; 

} 
if(buffer[68]==54 && buffer[69]==50)      //62        
{ 

tmp[31]=98; 

} 
if(buffer[68]==54 && buffer[69]==51)      //63         
{ 

tmp[31]=99; 

} 
if(buffer[68]==54 && buffer[69]==52)      //64        
{ 

tmp[31]=100; 

} 
if(buffer[68]==54 && buffer[69]==53)      //65      
{ 

tmp[31]=101; 

} 
if(buffer[68]==54 && buffer[69]==54)      //66       
{ 

tmp[31]=102; 

} 
if(buffer[68]==54 && buffer[69]==55)      //67     
{ 

tmp[31]=103; 
 
} 
if(buffer[68]==54 && buffer[69]==56)      //68     
{ 

tmp[31]=104; 

} 
if(buffer[68]==54 && buffer[69]==57)      //69   
{ 

tmp[31]=105; 

} 

if(buffer[68]==54 && buffer[69]==65)      //6a 
{ 

tmp[31]=106; 

} 

if(buffer[68]==54 && buffer[69]==66)      //6b 
{ 

tmp[31]=107; 

} 
if(buffer[68]==54 && buffer[69]==67)      //6c 
{ 

tmp[31]=108; 

} 
if(buffer[68]==54 && buffer[69]==68)      //6d 
{ 

tmp[31]=109; 

} 
if(buffer[68]==54 && buffer[69]==69)      //6e  
{ 

tmp[31]=110; 

} 
if(buffer[68]==54 && buffer[69]==70)      //6f  
{ 

tmp[31]=111; 

} 
//------------ 




if(buffer[68]==55 && buffer[69]==48)      //70       
{ 

tmp[31]=112; 

} 

if(buffer[68]==55 && buffer[69]==49)      //71        
{ 

tmp[31]=113; 

} 
if(buffer[68]==55 && buffer[69]==50)      //72        
{ 

tmp[31]=114; 

} 
if(buffer[68]==55 && buffer[69]==51)      //73         
{ 

tmp[31]=115; 

} 
if(buffer[68]==55 && buffer[69]==52)      //74        
{ 

tmp[31]=116; 

} 
if(buffer[68]==55 && buffer[69]==53)      //75      
{ 

tmp[31]=117; 

} 
if(buffer[68]==55 && buffer[69]==54)      //76       
{ 

tmp[31]=118; 

} 
if(buffer[68]==55 && buffer[69]==55)      //77     
{ 

tmp[31]=119; 
 
} 
if(buffer[68]==55 && buffer[69]==56)      //78     
{ 

tmp[31]=120; 

} 
if(buffer[68]==55 && buffer[69]==57)      //79   
{ 

tmp[31]=121; 

} 

if(buffer[68]==55 && buffer[69]==65)      //7a 
{ 

tmp[31]=122; 

} 

if(buffer[68]==55 && buffer[69]==66)      //7b 
{ 

tmp[31]=123; 

} 
if(buffer[68]==55 && buffer[69]==67)      //7c 
{ 

tmp[31]=124; 

} 
if(buffer[68]==55 && buffer[69]==68)      //7d 
{ 

tmp[31]=125; 

} 
if(buffer[68]==55 && buffer[69]==69)      //7e  
{ 

tmp[31]=126; 

} 
if(buffer[68]==55 && buffer[69]==70)      //7f  
{ 

tmp[31]=127; 

} 
 
//------------ 

if(buffer[68]==56 && buffer[69]==48)      //80       
{ 

tmp[31]=128; 

} 

if(buffer[68]==56 && buffer[69]==49)      //81        
{ 

tmp[31]=129; 

} 
if(buffer[68]==56 && buffer[69]==50)      //82        
{ 

tmp[31]=130; 

} 
if(buffer[68]==56 && buffer[69]==51)      //83         
{ 

tmp[31]=131; 

} 
if(buffer[68]==56 && buffer[69]==52)      //84        
{ 

tmp[31]=132; 

} 
if(buffer[68]==56 && buffer[69]==53)      //85      
{ 

tmp[31]=133; 

} 
if(buffer[68]==56 && buffer[69]==54)      //86       
{ 

tmp[31]=134; 

} 
if(buffer[68]==56 && buffer[69]==55)      //87     
{ 

tmp[31]=135; 

} 
if(buffer[68]==56 && buffer[69]==56)      //88     
{ 

tmp[31]=136; 

} 
if(buffer[68]==56 && buffer[69]==57)      //89   
{ 

tmp[31]=137; 

} 

if(buffer[68]==56 && buffer[69]==65)      //8a 
{ 

tmp[31]=138; 

} 

if(buffer[68]==56 && buffer[69]==66)      //8b 
{ 

tmp[31]=139; 

} 
if(buffer[68]==56 && buffer[69]==67)      //8c 
{ 

tmp[31]=140; 

} 
if(buffer[68]==56 && buffer[69]==68)      //8d 
{ 

tmp[31]=141; 

} 
if(buffer[68]==56 && buffer[69]==69)      //8e  
{ 

tmp[31]=142; 

} 
if(buffer[68]==56 && buffer[69]==70)      //8f  
{ 

tmp[31]=143; 

} 
//------------ 

 
if(buffer[68]==57 && buffer[69]==48)      //90       
{ 

tmp[31]=144; 

} 

if(buffer[68]==57 && buffer[69]==49)      //91        
{ 

tmp[31]=145; 

} 
if(buffer[68]==57 && buffer[69]==50)      //92        
{ 

tmp[31]=146; 

} 
if(buffer[68]==57 && buffer[69]==51)      //93         
{ 

tmp[31]=147; 

} 
if(buffer[68]==57 && buffer[69]==52)      //94        
{ 

tmp[31]=148; 

} 
if(buffer[68]==57 && buffer[69]==53)      //95      
{ 

tmp[31]=149; 

} 
if(buffer[68]==57 && buffer[69]==54)      //96       
{ 

tmp[31]=150; 

} 
if(buffer[68]==57 && buffer[69]==55)      //97     
{ 

tmp[31]=151; 

} 
if(buffer[68]==57 && buffer[69]==56)      //98     
{ 
 
tmp[31]=152; 

} 
if(buffer[68]==57 && buffer[69]==57)      //99   
{ 

tmp[31]=153; 

} 

if(buffer[68]==57 && buffer[69]==65)      //9a 
{ 

tmp[31]=154; 

} 

if(buffer[68]==57 && buffer[69]==66)      //9b 
{ 

tmp[31]=155; 

} 
if(buffer[68]==57 && buffer[69]==67)      //9c 
{ 

tmp[31]=156; 

} 
if(buffer[68]==57 && buffer[69]==68)      //9d 
{ 

tmp[31]=157; 

} 
if(buffer[68]==57 && buffer[69]==69)      //9e  
{ 

tmp[31]=158; 

} 
if(buffer[68]==57 && buffer[69]==70)      //9f  
{ 

tmp[31]=159; 

} 
//------------ 


if(buffer[68]==65 && buffer[69]==48)      //a0       
{ 

tmp[31]=160; 

} 

if(buffer[68]==65 && buffer[69]==49)      //a1        
{ 

tmp[31]=161; 

} 
if(buffer[68]==65 && buffer[69]==50)      //a2        
{ 

tmp[31]=162; 

} 
if(buffer[68]==65 && buffer[69]==51)      //a3         
{ 

tmp[31]=163; 

} 
if(buffer[68]==65 && buffer[69]==52)      //a4        
{ 

tmp[31]=164; 

} 
if(buffer[68]==65 && buffer[69]==53)      //a5      
{ 

tmp[31]=165; 

} 
if(buffer[68]==65 && buffer[69]==54)      //a6       
{ 

tmp[31]=166; 

} 
if(buffer[68]==65 && buffer[69]==55)      //a7     
{ 

tmp[31]=167; 

} 
if(buffer[68]==65 && buffer[69]==56)      //a8     
{ 

tmp[31]=168; 
 
} 
if(buffer[68]==65 && buffer[69]==57)      //a9   
{ 

tmp[31]=169; 

} 

if(buffer[68]==65 && buffer[69]==65)      //aa 
{ 

tmp[31]=170; 

} 

if(buffer[68]==65 && buffer[69]==66)      //ab 
{ 

tmp[31]=171; 

} 
if(buffer[68]==65 && buffer[69]==67)      //ac 
{ 

tmp[31]=172; 

} 
if(buffer[68]==65 && buffer[69]==68)      //ad 
{ 

tmp[31]=173; 

} 
if(buffer[68]==65 && buffer[69]==69)      //ae  
{ 

tmp[31]=174; 

} 
if(buffer[68]==65 && buffer[69]==70)      //af  
{ 

tmp[31]=175; 

} 
//------------ 


if(buffer[68]==66 && buffer[69]==48)      //b0       
{ 

tmp[31]=176; 

} 

if(buffer[68]==66 && buffer[69]==49)      //b1        
{ 

tmp[31]=177; 

} 
if(buffer[68]==66 && buffer[69]==50)      //b2        
{ 

tmp[31]=178; 

} 
if(buffer[68]==66 && buffer[69]==51)      //b3         
{ 

tmp[31]=179; 

} 
if(buffer[68]==66 && buffer[69]==52)      //b4        
{ 

tmp[31]=180; 

} 
if(buffer[68]==66 && buffer[69]==53)      //b5      
{ 

tmp[31]=181; 

} 
if(buffer[68]==66 && buffer[69]==54)      //b6       
{ 

tmp[31]=182; 

} 
if(buffer[68]==66 && buffer[69]==55)      //b7     
{ 

tmp[31]=183; 

} 
if(buffer[68]==66 && buffer[69]==56)      //b8     
{ 

tmp[31]=184; 

} 
if(buffer[68]==66 && buffer[69]==57)      //b9   
{ 

tmp[31]=185; 

} 

if(buffer[68]==66 && buffer[69]==65)      //ba 
{ 

tmp[31]=186; 

} 

if(buffer[68]==66 && buffer[69]==66)      //bb 
{ 

tmp[31]=187; 

} 
if(buffer[68]==66 && buffer[69]==67)      //bc 
{ 

tmp[31]=188; 

} 
if(buffer[68]==66 && buffer[69]==68)      //bd 
{ 

tmp[31]=189; 

} 
if(buffer[68]==66 && buffer[69]==69)      //be  
{ 

tmp[31]=190; 

} 
if(buffer[68]==66 && buffer[69]==70)      //bf  
{ 

tmp[31]=191; 

} 
//------------ 



if(buffer[68]==67 && buffer[69]==48)      //c0       
{ 

tmp[31]=192; 
 
} 

if(buffer[68]==67 && buffer[69]==49)      //c1        
{ 

tmp[31]=193; 

} 
if(buffer[68]==67 && buffer[69]==50)      //c2        
{ 

tmp[31]=194; 

} 
if(buffer[68]==67 && buffer[69]==51)      //c3         
{ 

tmp[31]=195; 

} 
if(buffer[68]==67 && buffer[69]==52)      //c4        
{ 

tmp[31]=196; 

} 
if(buffer[68]==67 && buffer[69]==53)      //c5      
{ 

tmp[31]=197; 

} 
if(buffer[68]==67 && buffer[69]==54)      //c6       
{ 

tmp[31]=198; 

} 
if(buffer[68]==67 && buffer[69]==55)      //c7     
{ 

tmp[31]=199; 

} 
if(buffer[68]==67 && buffer[69]==56)      //c8     
{ 

tmp[31]=200; 

} 
if(buffer[68]==67 && buffer[69]==57)      //c9   
{ 

tmp[31]=201; 

} 

if(buffer[68]==67 && buffer[69]==65)      //ca 
{ 

tmp[31]=202; 

} 

if(buffer[68]==67 && buffer[69]==66)      //cb 
{ 

tmp[31]=203; 

} 
if(buffer[68]==67 && buffer[69]==67)      //cc 
{ 

tmp[31]=204; 

} 
if(buffer[68]==67 && buffer[69]==68)      //cd 
{ 

tmp[31]=205; 

} 
if(buffer[68]==67 && buffer[69]==69)      //ce  
{ 

tmp[31]=206; 

} 
if(buffer[68]==67 && buffer[69]==70)      //cf  
{ 

tmp[31]=207; 

} 
//------------ 


if(buffer[68]==68 && buffer[69]==48)      //d0       
{ 

tmp[31]=208; 

} 
 
if(buffer[68]==68 && buffer[69]==49)      //d1        
{ 

tmp[31]=209; 

} 
if(buffer[68]==68 && buffer[69]==50)      //d2        
{ 

tmp[31]=210; 

} 
if(buffer[68]==68 && buffer[69]==51)      //d3         
{ 

tmp[31]=211; 

} 
if(buffer[68]==68 && buffer[69]==52)      //d4        
{ 

tmp[31]=212; 

} 
if(buffer[68]==68 && buffer[69]==53)      //d5      
{ 

tmp[31]=213; 

} 
if(buffer[68]==68 && buffer[69]==54)      //d6       
{ 

tmp[31]=214; 

} 
if(buffer[68]==68 && buffer[69]==55)      //d7     
{ 

tmp[31]=215; 

} 
if(buffer[68]==68 && buffer[69]==56)      //d8     
{ 

tmp[31]=216; 

} 
if(buffer[68]==68 && buffer[69]==57)      //d9   
{ 

tmp[31]=217; 

} 

if(buffer[68]==68 && buffer[69]==65)      //da 
{ 

tmp[31]=218; 

} 

if(buffer[68]==68 && buffer[69]==66)      //db 
{ 

tmp[31]=219; 

} 
if(buffer[68]==68 && buffer[69]==67)      //dc 
{ 

tmp[31]=220; 

} 
if(buffer[68]==68 && buffer[69]==68)      //dd 
{ 

tmp[31]=221; 

} 
if(buffer[68]==68 && buffer[69]==69)      //de  
{ 

tmp[31]=222; 

} 
if(buffer[68]==68 && buffer[69]==70)      //df  
{ 

tmp[31]=223; 

} 
//------------ 



if(buffer[68]==69 && buffer[69]==48)      //e0       
{ 

tmp[31]=224; 

} 

if(buffer[68]==69 && buffer[69]==49)      //e1        
{ 

tmp[31]=225; 

} 
if(buffer[68]==69 && buffer[69]==50)      //e2        
{ 

tmp[31]=226; 

} 
if(buffer[68]==69 && buffer[69]==51)      //e3         
{ 

tmp[31]=227; 

} 
if(buffer[68]==69 && buffer[69]==52)      //e4        
{ 

tmp[31]=228; 

} 
if(buffer[68]==69 && buffer[69]==53)      //e5      
{ 

tmp[31]=229; 

} 
if(buffer[68]==69 && buffer[69]==54)      //e6       
{ 

tmp[31]=230; 

} 
if(buffer[68]==69 && buffer[69]==55)      //e7     
{ 

tmp[31]=231; 

} 
if(buffer[68]==69 && buffer[69]==56)      //e8     
{ 

tmp[31]=232; 

} 
if(buffer[68]==69 && buffer[69]==57)      //e9   
{ 

tmp[31]=233; 
 
} 

if(buffer[68]==69 && buffer[69]==65)      //ea 
{ 

tmp[31]=234; 

} 

if(buffer[68]==69 && buffer[69]==66)      //eb 
{ 

tmp[31]=235; 

} 
if(buffer[68]==69 && buffer[69]==67)      //ec 
{ 

tmp[31]=236; 

} 
if(buffer[68]==69 && buffer[69]==68)      //ed 
{ 

tmp[31]=237; 

} 
if(buffer[68]==69 && buffer[69]==69)      //ee  
{ 

tmp[31]=238; 

} 
if(buffer[68]==69 && buffer[69]==70)      //ef  
{ 

tmp[31]=239; 

} 
//------------ 

if(buffer[68]==70 && buffer[69]==48)      //f0       
{ 

tmp[31]=240; 

} 

if(buffer[68]==70 && buffer[69]==49)      //f1        
{ 

tmp[31]=241; 

} 
if(buffer[68]==70 && buffer[69]==50)      //f2        
{ 

tmp[31]=242; 

} 
if(buffer[68]==70 && buffer[69]==51)      //f3         
{ 

tmp[31]=243; 

} 
if(buffer[68]==70 && buffer[69]==52)      //f4        
{ 

tmp[31]=244; 

} 
if(buffer[68]==70 && buffer[69]==53)      //f5      
{ 

tmp[31]=245; 

} 
if(buffer[68]==70 && buffer[69]==54)      //f6       
{ 

tmp[31]=246; 

} 
if(buffer[68]==70 && buffer[69]==55)      //f7     
{ 

tmp[31]=247; 

} 
if(buffer[68]==70 && buffer[69]==56)      //f8     
{ 

tmp[31]=248; 

} 
if(buffer[68]==70 && buffer[69]==57)      //f9   
{ 

tmp[31]=249; 

} 

if(buffer[68]==70 && buffer[69]==65)      //fa 
{ 

tmp[31]=250; 

} 

if(buffer[68]==70 && buffer[69]==66)      //fb 
{ 

tmp[31]=251; 

} 
if(buffer[68]==70 && buffer[69]==67)      //fc 
{ 

tmp[31]=252; 

} 
if(buffer[68]==70 && buffer[69]==68)      //fd 
{ 

tmp[31]=253; 

} 
if(buffer[68]==70 && buffer[69]==69)      //fe  
{ 

tmp[31]=254; 

} 
if(buffer[68]==70 && buffer[69]==70)      //ff  
{ 

tmp[31]=255; 

} 

//----------------------- end of tmp[31]--------------------------- 

tmp[20]=54; 

} 
if(buffer[44]==51 && buffer[45]==55)      //37     
{ 

tmp[20]=55; 

} 
if(buffer[44]==51 && buffer[45]==56)      //38     
{ 

tmp[20]=56; 

} 
if(buffer[44]==51 && buffer[45]==57)      //39   
{ 

tmp[20]=57; 

} 

if(buffer[44]==51 && buffer[45]==65)      //3a 
{ 

tmp[20]=58; 

} 

if(buffer[44]==51 && buffer[45]==66)      //3b 
{ 

tmp[20]=59; 

} 
if(buffer[44]==51 && buffer[45]==67)      //3c 
{ 

tmp[20]=60; 

} 
if(buffer[44]==51 && buffer[45]==68)      //3d 
{ 

tmp[20]=61; 

} 
if(buffer[44]==51 && buffer[45]==69)      //3e  
{ 

tmp[20]=62; 

} 
if(buffer[44]==51 && buffer[45]==70)      //3f  
{ 

tmp[20]=63; 

} 

//------------ 


if(buffer[44]==52 && buffer[45]==48)      // 40       
{ 

tmp[20]=64; 

} 

if(buffer[44]==52 && buffer[45]==49)      // 41        
{ 

tmp[20]=65; 

} 
if(buffer[44]==52 && buffer[45]==50)      // 42        
{ 

tmp[20]=66; 

} 
if(buffer[44]==52 && buffer[45]==51)      //43         
{ 

tmp[20]=67; 

} 
if(buffer[44]==52 && buffer[45]==52)      //44        
{ 

tmp[20]=68; 

} 
if(buffer[44]==52 && buffer[45]==53)      //45      
{ 

tmp[20]=69; 

} 

if(buffer[44]==52 && buffer[45]==54)      //46       
{ 

tmp[20]=70; 

} 
if(buffer[44]==52 && buffer[45]==55)      //47     
{ 

tmp[20]=71; 

} 
if(buffer[44]==52 && buffer[45]==56)      //48     
{ 

tmp[20]=72; 

} 
if(buffer[44]==52 && buffer[45]==57)      //49   
{ 

tmp[20]=73; 

} 

if(buffer[44]==52 && buffer[45]==65)      //4a 
{ 

tmp[20]=74; 

} 

if(buffer[44]==52 && buffer[45]==66)      //4b 
{ 

tmp[20]=75; 

} 
if(buffer[44]==52 && buffer[45]==67)      //4c 
{ 

tmp[20]=76; 

} 
if(buffer[44]==52 && buffer[45]==68)      //4d 
{ 

tmp[20]=77; 

} 
if(buffer[44]==52 && buffer[45]==69)      //4e  
{ 

tmp[20]=78; 

} 
if(buffer[44]==52 && buffer[45]==70)      //4f  
{ 

tmp[20]=79; 

} 
//------------ 




if(buffer[44]==53 && buffer[45]==48)      //50       
{ 

tmp[20]=80; 

} 

if(buffer[44]==53 && buffer[45]==49)      //51        
{ 

tmp[20]=81; 

} 
if(buffer[44]==53 && buffer[45]==50)      //52        
{ 

tmp[20]=82; 

} 
if(buffer[44]==53 && buffer[45]==51)      //53         
{ 

tmp[20]=83; 

} 
if(buffer[44]==53 && buffer[45]==52)      //54        
{ 

tmp[20]=84; 

} 
if(buffer[44]==53 && buffer[45]==53)      //55      
{ 

tmp[20]=85; 

} 
if(buffer[44]==53 && buffer[45]==54)      //56       
{ 

tmp[20]=86; 

} 
if(buffer[44]==53 && buffer[45]==55)      //57     
{ 

tmp[20]=87; 

} 
if(buffer[44]==53 && buffer[45]==56)      //58     
{ 

tmp[20]=88; 

} 
if(buffer[44]==53 && buffer[45]==57)      //59   
{ 

tmp[20]=89; 

} 

if(buffer[44]==53 && buffer[45]==65)      //5a 
{ 

tmp[20]=90; 

} 

if(buffer[44]==53 && buffer[45]==66)      //5b 
{ 

tmp[20]=91; 

} 
if(buffer[44]==53 && buffer[45]==67)      //5c 
{ 

tmp[20]=92; 

} 
if(buffer[44]==53 && buffer[45]==68)      //5d 
{ 

tmp[20]=93; 

} 
if(buffer[44]==53 && buffer[45]==69)      //5e  
{ 

tmp[20]=94; 

} 
if(buffer[44]==53 && buffer[45]==70)      //5f  
{ 

tmp[20]=95; 

} 
//------------ 




if(buffer[44]==54 && buffer[45]==48)      //60       
{ 

tmp[20]=96; 

} 

if(buffer[44]==54 && buffer[45]==49)      //61        
{ 

tmp[20]=97; 

} 
if(buffer[44]==54 && buffer[45]==50)      //62        
{ 

tmp[20]=98; 

} 
if(buffer[44]==54 && buffer[45]==51)      //63         
{ 

tmp[20]=99; 

} 
if(buffer[44]==54 && buffer[45]==52)      //64        
{ 

tmp[20]=100; 

} 
if(buffer[44]==54 && buffer[45]==53)      //65      
{ 

tmp[20]=101; 

} 
if(buffer[44]==54 && buffer[45]==54)      //66       
{ 

tmp[20]=102; 

} 
if(buffer[44]==54 && buffer[45]==55)      //67     
{ 

tmp[20]=103; 

} 
if(buffer[44]==54 && buffer[45]==56)      //68     
{ 

tmp[20]=104; 

} 
if(buffer[44]==54 && buffer[45]==57)      //69   
{ 

tmp[20]=105; 

} 

if(buffer[44]==54 && buffer[45]==65)      //6a 
{ 

tmp[20]=106; 

} 

if(buffer[44]==54 && buffer[45]==66)      //6b 
{ 

tmp[20]=107; 

} 
if(buffer[44]==54 && buffer[45]==67)      //6c 
{ 

tmp[20]=108; 

} 
if(buffer[44]==54 && buffer[45]==68)      //6d 
{ 

tmp[20]=109; 

} 
if(buffer[44]==54 && buffer[45]==69)      //6e  
{ 

tmp[20]=110; 

} 
if(buffer[44]==54 && buffer[45]==70)      //6f  
{ 

tmp[20]=111; 

} 
//------------ 




if(buffer[44]==55 && buffer[45]==48)      //70       
{ 

tmp[20]=112; 

} 

if(buffer[44]==55 && buffer[45]==49)      //71        
{ 

tmp[20]=113; 

} 
if(buffer[44]==55 && buffer[45]==50)      //72        
{ 

tmp[20]=114; 

} 
if(buffer[44]==55 && buffer[45]==51)      //73         
{ 

tmp[20]=115; 

} 
if(buffer[44]==55 && buffer[45]==52)      //74        
{ 

tmp[20]=116; 

} 
if(buffer[44]==55 && buffer[45]==53)      //75      
{ 

tmp[20]=117; 

} 
if(buffer[44]==55 && buffer[45]==54)      //76       
{ 

tmp[20]=118; 

} 
if(buffer[44]==55 && buffer[45]==55)      //77     
{ 

tmp[20]=119; 

} 
if(buffer[44]==55 && buffer[45]==56)      //78     
{ 

tmp[20]=120; 

} 
if(buffer[44]==55 && buffer[45]==57)      //79   
{ 

tmp[20]=121; 

} 

if(buffer[44]==55 && buffer[45]==65)      //7a 
{ 

tmp[20]=122; 

} 

if(buffer[44]==55 && buffer[45]==66)      //7b 
{ 

tmp[20]=123; 

} 
if(buffer[44]==55 && buffer[45]==67)      //7c 
{ 

tmp[20]=124; 

} 
if(buffer[44]==55 && buffer[45]==68)      //7d 
{ 

tmp[20]=125; 

} 
if(buffer[44]==55 && buffer[45]==69)      //7e  
{ 

tmp[20]=126; 

} 
if(buffer[44]==55 && buffer[45]==70)      //7f  
{ 

tmp[20]=127; 

} 

//------------ 

if(buffer[44]==56 && buffer[45]==48)      //80       
{ 
 
tmp[20]=128; 

} 

if(buffer[44]==56 && buffer[45]==49)      //81        
{ 

tmp[20]=129; 

} 
if(buffer[44]==56 && buffer[45]==50)      //82        
{ 

tmp[20]=130; 

} 
if(buffer[44]==56 && buffer[45]==51)      //83         
{ 

tmp[20]=131; 

} 
if(buffer[44]==56 && buffer[45]==52)      //84        
{ 

tmp[20]=132; 

} 
if(buffer[44]==56 && buffer[45]==53)      //85      
{ 

tmp[20]=133; 

} 
if(buffer[44]==56 && buffer[45]==54)      //86       
{ 

tmp[20]=134; 

} 
if(buffer[44]==56 && buffer[45]==55)      //87     
{ 

tmp[20]=135; 

} 
if(buffer[44]==56 && buffer[45]==56)      //88     
{ 

tmp[20]=136; 

} 
if(buffer[44]==56 && buffer[45]==57)      //89   
{ 

tmp[20]=137; 

} 

if(buffer[44]==56 && buffer[45]==65)      //8a 
{ 

tmp[20]=138; 

} 

if(buffer[44]==56 && buffer[45]==66)      //8b 
{ 

tmp[20]=139; 

} 
if(buffer[44]==56 && buffer[45]==67)      //8c 
{ 

tmp[20]=140; 

} 
if(buffer[44]==56 && buffer[45]==68)      //8d 
{ 

tmp[20]=141; 

} 
if(buffer[44]==56 && buffer[45]==69)      //8e  
{ 

tmp[20]=142; 

} 
if(buffer[44]==56 && buffer[45]==70)      //8f  
{ 

tmp[20]=143; 

} 
//------------ 


if(buffer[44]==57 && buffer[45]==48)      //90       
{ 

tmp[20]=144; 
 
} 

if(buffer[44]==57 && buffer[45]==49)      //91        
{ 

tmp[20]=145; 

} 
if(buffer[44]==57 && buffer[45]==50)      //92        
{ 

tmp[20]=146; 

} 
if(buffer[44]==57 && buffer[45]==51)      //93         
{ 

tmp[20]=147; 

} 
if(buffer[44]==57 && buffer[45]==52)      //94        
{ 

tmp[20]=148; 

} 
if(buffer[44]==57 && buffer[45]==53)      //95      
{ 

tmp[20]=149; 

} 
if(buffer[44]==57 && buffer[45]==54)      //96       
{ 

tmp[20]=150; 

} 
if(buffer[44]==57 && buffer[45]==55)      //97     
{ 

tmp[20]=151; 

} 
if(buffer[44]==57 && buffer[45]==56)      //98     
{ 

tmp[20]=152; 

} 
if(buffer[44]==57 && buffer[45]==57)      //99   
{ 

tmp[20]=153; 

} 

if(buffer[44]==57 && buffer[45]==65)      //9a 
{ 

tmp[20]=154; 

} 

if(buffer[44]==57 && buffer[45]==66)      //9b 
{ 

tmp[20]=155; 

} 
if(buffer[44]==57 && buffer[45]==67)      //9c 
{ 

tmp[20]=156; 

} 
if(buffer[44]==57 && buffer[45]==68)      //9d 
{ 

tmp[20]=157; 

} 
if(buffer[44]==57 && buffer[45]==69)      //9e  
{ 

tmp[20]=158; 

} 
if(buffer[44]==57 && buffer[45]==70)      //9f  
{ 

tmp[20]=159; 

} 
//------------ 


if(buffer[44]==65 && buffer[45]==48)      //a0       
{ 

tmp[20]=160; 

} 
 
if(buffer[44]==65 && buffer[45]==49)      //a1        
{ 

tmp[20]=161; 

} 
if(buffer[44]==65 && buffer[45]==50)      //a2        
{ 

tmp[20]=162; 

} 
if(buffer[44]==65 && buffer[45]==51)      //a3         
{ 

tmp[20]=163; 

} 
if(buffer[44]==65 && buffer[45]==52)      //a4        
{ 

tmp[20]=164; 

} 
if(buffer[44]==65 && buffer[45]==53)      //a5      
{ 

tmp[20]=165; 

} 
if(buffer[44]==65 && buffer[45]==54)      //a6       
{ 

tmp[20]=166; 

} 
if(buffer[44]==65 && buffer[45]==55)      //a7     
{ 

tmp[20]=167; 

} 
if(buffer[44]==65 && buffer[45]==56)      //a8     
{ 

tmp[20]=168; 

} 
if(buffer[44]==65 && buffer[45]==57)      //a9   
{ 

tmp[20]=169; 

} 

if(buffer[44]==65 && buffer[45]==65)      //aa 
{ 

tmp[20]=170; 

} 

if(buffer[44]==65 && buffer[45]==66)      //ab 
{ 

tmp[20]=171; 

} 
if(buffer[44]==65 && buffer[45]==67)      //ac 
{ 

tmp[20]=172; 

} 
if(buffer[44]==65 && buffer[45]==68)      //ad 
{ 

tmp[20]=173; 

} 
if(buffer[44]==65 && buffer[45]==69)      //ae  
{ 

tmp[20]=174; 

} 
if(buffer[44]==65 && buffer[45]==70)      //af  
{ 

tmp[20]=175; 

} 
//------------ 


if(buffer[44]==66 && buffer[45]==48)      //b0       
{ 

tmp[20]=176; 

} 

if(buffer[44]==66 && buffer[45]==49)      //b1        
{ 

tmp[20]=177; 

} 
if(buffer[44]==66 && buffer[45]==50)      //b2        
{ 

tmp[20]=178; 

} 
if(buffer[44]==66 && buffer[45]==51)      //b3         
{ 

tmp[20]=179; 

} 
if(buffer[44]==66 && buffer[45]==52)      //b4        
{ 

tmp[20]=180; 

} 
if(buffer[44]==66 && buffer[45]==53)      //b5      
{ 

tmp[20]=181; 

} 
if(buffer[44]==66 && buffer[45]==54)      //b6       
{ 

tmp[20]=182; 

} 
if(buffer[44]==66 && buffer[45]==55)      //b7     
{ 

tmp[20]=183; 

} 
if(buffer[44]==66 && buffer[45]==56)      //b8     
{ 

tmp[20]=184; 

} 
if(buffer[44]==66 && buffer[45]==57)      //b9   
{ 

tmp[20]=185; 

} 

if(buffer[44]==66 && buffer[45]==65)      //ba 
{ 

tmp[20]=186; 

} 

if(buffer[44]==66 && buffer[45]==66)      //bb 
{ 

tmp[20]=187; 

} 
if(buffer[44]==66 && buffer[45]==67)      //bc 
{ 

tmp[20]=188; 

} 
if(buffer[44]==66 && buffer[45]==68)      //bd 
{ 

tmp[20]=189; 

} 
if(buffer[44]==66 && buffer[45]==69)      //be  
{ 

tmp[20]=190; 

} 
if(buffer[44]==66 && buffer[45]==70)      //bf  
{ 

tmp[20]=191; 

} 
//------------ 



if(buffer[44]==67 && buffer[45]==48)      //c0       
{ 

tmp[20]=192; 

} 

if(buffer[44]==67 && buffer[45]==49)      //c1        
{ 
 
tmp[20]=193; 

} 
if(buffer[44]==67 && buffer[45]==50)      //c2        
{ 

tmp[20]=194; 

} 
if(buffer[44]==67 && buffer[45]==51)      //c3         
{ 

tmp[20]=195; 

} 
if(buffer[44]==67 && buffer[45]==52)      //c4        
{ 

tmp[20]=196; 

} 
if(buffer[44]==67 && buffer[45]==53)      //c5      
{ 

tmp[20]=197; 

} 
if(buffer[44]==67 && buffer[45]==54)      //c6       
{ 

tmp[20]=198; 

} 
if(buffer[44]==67 && buffer[45]==55)      //c7     
{ 

tmp[20]=199; 

} 
if(buffer[44]==67 && buffer[45]==56)      //c8     
{ 

tmp[20]=200; 

} 
if(buffer[44]==67 && buffer[45]==57)      //c9   
{ 

tmp[20]=201; 

} 
 
if(buffer[44]==67 && buffer[45]==65)      //ca 
{ 

tmp[20]=202; 

} 

if(buffer[44]==67 && buffer[45]==66)      //cb 
{ 

tmp[20]=203; 

} 
if(buffer[44]==67 && buffer[45]==67)      //cc 
{ 

tmp[20]=204; 

} 
if(buffer[44]==67 && buffer[45]==68)      //cd 
{ 

tmp[20]=205; 

} 
if(buffer[44]==67 && buffer[45]==69)      //ce  
{ 

tmp[20]=206; 

} 
if(buffer[44]==67 && buffer[45]==70)      //cf  
{ 

tmp[20]=207; 

} 
//------------ 


if(buffer[44]==68 && buffer[45]==48)      //d0       
{ 

tmp[20]=208; 

} 

if(buffer[44]==68 && buffer[45]==49)      //d1        
{ 

tmp[20]=209; 
 
} 
if(buffer[44]==68 && buffer[45]==50)      //d2        
{ 

tmp[20]=210; 

} 
if(buffer[44]==68 && buffer[45]==51)      //d3         
{ 

tmp[20]=211; 

} 
if(buffer[44]==68 && buffer[45]==52)      //d4        
{ 

tmp[20]=212; 

} 
if(buffer[44]==68 && buffer[45]==53)      //d5      
{ 

tmp[20]=213; 

} 
if(buffer[44]==68 && buffer[45]==54)      //d6       
{ 

tmp[20]=214; 

} 
if(buffer[44]==68 && buffer[45]==55)      //d7     
{ 

tmp[20]=215; 

} 
if(buffer[44]==68 && buffer[45]==56)      //d8     
{ 

tmp[20]=216; 

} 
if(buffer[44]==68 && buffer[45]==57)      //d9   
{ 

tmp[20]=217; 

} 

if(buffer[44]==68 && buffer[45]==65)      //da 
{ 

tmp[20]=218; 

} 

if(buffer[44]==68 && buffer[45]==66)      //db 
{ 

tmp[20]=219; 

} 
if(buffer[44]==68 && buffer[45]==67)      //dc 
{ 

tmp[20]=220; 

} 
if(buffer[44]==68 && buffer[45]==68)      //dd 
{ 

tmp[20]=221; 

} 
if(buffer[44]==68 && buffer[45]==69)      //de  
{ 

tmp[20]=222; 

} 
if(buffer[44]==68 && buffer[45]==70)      //df  
{ 

tmp[20]=223; 

} 
//------------ 



if(buffer[44]==69 && buffer[45]==48)      //e0       
{ 

tmp[20]=224; 

} 

if(buffer[44]==69 && buffer[45]==49)      //e1        
{ 

tmp[20]=225; 

} 
if(buffer[44]==69 && buffer[45]==50)      //e2        
{ 

tmp[20]=226; 

} 
if(buffer[44]==69 && buffer[45]==51)      //e3         
{ 

tmp[20]=227; 

} 
if(buffer[44]==69 && buffer[45]==52)      //e4        
{ 

tmp[20]=228; 

} 
if(buffer[44]==69 && buffer[45]==53)      //e5      
{ 

tmp[20]=229; 

} 
if(buffer[44]==69 && buffer[45]==54)      //e6       
{ 

tmp[20]=230; 

} 
if(buffer[44]==69 && buffer[45]==55)      //e7     
{ 

tmp[20]=231; 

} 
if(buffer[44]==69 && buffer[45]==56)      //e8     
{ 

tmp[20]=232; 

} 
if(buffer[44]==69 && buffer[45]==57)      //e9   
{ 

tmp[20]=233; 

} 

if(buffer[44]==69 && buffer[45]==65)      //ea 
{ 
 
tmp[20]=234; 

} 

if(buffer[44]==69 && buffer[45]==66)      //eb 
{ 

tmp[20]=235; 

} 
if(buffer[44]==69 && buffer[45]==67)      //ec 
{ 

tmp[20]=236; 

} 
if(buffer[44]==69 && buffer[45]==68)      //ed 
{ 

tmp[20]=237; 

} 
if(buffer[44]==69 && buffer[45]==69)      //ee  
{ 

tmp[20]=238; 

} 
if(buffer[44]==69 && buffer[45]==70)      //ef  
{ 

tmp[20]=239; 

} 
//------------ 

if(buffer[44]==70 && buffer[45]==48)      //f0       
{ 

tmp[20]=240; 

} 

if(buffer[44]==70 && buffer[45]==49)      //f1        
{ 

tmp[20]=241; 

} 
if(buffer[44]==70 && buffer[45]==50)      //f2        
{ 
 
tmp[20]=242; 

} 
if(buffer[44]==70 && buffer[45]==51)      //f3         
{ 

tmp[20]=243; 

} 
if(buffer[44]==70 && buffer[45]==52)      //f4        
{ 

tmp[20]=244; 

} 
if(buffer[44]==70 && buffer[45]==53)      //f5      
{ 

tmp[20]=245; 

} 
if(buffer[44]==70 && buffer[45]==54)      //f6       
{ 

tmp[20]=246; 

} 
if(buffer[44]==70 && buffer[45]==55)      //f7     
{ 

tmp[20]=247; 

} 
if(buffer[44]==70 && buffer[45]==56)      //f8     
{ 

tmp[20]=248; 

} 
if(buffer[44]==70 && buffer[45]==57)      //f9   
{ 

tmp[20]=249; 

} 

if(buffer[44]==70 && buffer[45]==65)      //fa 
{ 

tmp[20]=250; 

} 

if(buffer[44]==70 && buffer[45]==66)      //fb 
{ 

tmp[20]=251; 

} 
if(buffer[44]==70 && buffer[45]==67)      //fc 
{ 

tmp[20]=252; 

} 
if(buffer[44]==70 && buffer[45]==68)      //fd 
{ 

tmp[20]=253; 

} 
if(buffer[44]==70 && buffer[45]==69)      //fe  
{ 

tmp[20]=254; 

} 
if(buffer[44]==70 && buffer[45]==70)      //ff  
{ 

tmp[20]=255; 

} 

//----------------------- end of tmp[20]--------------------------- 



//----------------------- start of tmp[21]--------------------------- 


if(buffer[46]==48 && buffer[47]==48)      //00        
{ 

tmp[21]=0; 

} 

if(buffer[46]==48 && buffer[47]==49)      //01        
{ 

tmp[21]=1; 

} 
if(buffer[46]==48 && buffer[47]==50)      //02        
{ 

tmp[21]=2; 

} 
if(buffer[46]==48 && buffer[47]==51)      //03         
{ 

tmp[21]=3; 

} 
if(buffer[46]==48 && buffer[47]==52)      //04        
{ 

tmp[21]=4; 

} 
if(buffer[46]==48 && buffer[47]==53)      //05      
{ 

tmp[21]=5; 

} 


if(buffer[46]==48 && buffer[47]==54)      //06       
{ 

tmp[21]=6; 

} 
if(buffer[46]==48 && buffer[47]==55)      //07     
{ 

tmp[21]=7; 

} 
if(buffer[46]==48 && buffer[47]==56)      //08     
{ 

tmp[21]=8; 

} 
if(buffer[46]==48 && buffer[47]==57)      //09   
{ 

tmp[21]=9; 

} 

if(buffer[46]==48 && buffer[47]==65)      //0a 
{ 

tmp[21]=10; 

} 

if(buffer[46]==48 && buffer[47]==66)      //0b 
{ 

tmp[21]=11; 

} 
if(buffer[46]==48 && buffer[47]==67)      //0c 
{ 

tmp[21]=12; 

} 
if(buffer[46]==48 && buffer[47]==68)      //0d 
{ 

tmp[21]=13; 

} 
if(buffer[46]==48 && buffer[47]==69)      //0e  
{ 

tmp[21]=14; 

} 
if(buffer[46]==48 && buffer[47]==70)      //0f  
{ 

tmp[21]=15; 

} 

//----------- 

if(buffer[46]==49 && buffer[47]==48)      //        10 
{ 

tmp[21]=16; 

} 
if(buffer[46]==49 && buffer[47]==49)      //         11 
{ 

tmp[21]=17; 

} 
if(buffer[46]==49 && buffer[47]==50)      //         12 
{ 

tmp[21]=18; 

} 
if(buffer[46]==49 && buffer[47]==51)      //         13 
{ 

tmp[21]=19; 

} 
if(buffer[46]==49 && buffer[47]==52)      //         14 
{ 

tmp[21]=20; 

} 
if(buffer[46]==49 && buffer[47]==53)      //         15 
{ 

tmp[21]=21; 

} 
if(buffer[46]==49 && buffer[47]==54)      //         16 
{ 

tmp[21]=22; 

} 
if(buffer[46]==49 && buffer[47]==55)      //         17 
{ 

tmp[21]=23; 

} 
if(buffer[46]==49 && buffer[47]==56)      //         18 
{ 

tmp[21]=24; 

} 
if(buffer[46]==49 && buffer[47]==57)      //         19 
{ 

tmp[21]=25; 

} 

if(buffer[46]==49 && buffer[47]==65)      //         1a 
{ 

tmp[21]=26; 

} 
if(buffer[46]==49 && buffer[47]==66)      //         1b 
{ 

tmp[21]=27; 

} 
if(buffer[46]==49 && buffer[47]==67)      //         1c 
{ 

tmp[21]=28; 

} 
if(buffer[46]==49 && buffer[47]==68)      //         1d 
{ 

tmp[21]=29; 

} 
if(buffer[46]==49 && buffer[47]==69)      //         1e 
{ 

tmp[21]=30; 

} 
if(buffer[46]==49 && buffer[47]==70)      //         1f 
{ 

tmp[21]=31; 

} 


//--------------- 


if(buffer[46]==50 && buffer[47]==48)      //         20 
{ 

tmp[21]=32; 

} 

if(buffer[46]==50 && buffer[47]==49)      //         21 
{ 

tmp[21]=33; 

} 
if(buffer[46]==50 && buffer[47]==50)      //         22 
{ 

tmp[21]=34; 

} 
if(buffer[46]==50 && buffer[47]==51)      //         23 
{ 

tmp[21]=35; 

} 
if(buffer[46]==50 && buffer[47]==52)      //         24 
{ 

tmp[21]=36; 

} 
if(buffer[46]==50 && buffer[47]==53)      //         25 
{ 

tmp[21]=37; 

} 
if(buffer[46]==50 && buffer[47]==54)      //         26 
{ 

tmp[21]=38; 

} 
if(buffer[46]==50 && buffer[47]==55)      //         27 
{ 

tmp[21]=39; 

} 
if(buffer[46]==50 && buffer[47]==56)      //         28 
{ 

tmp[21]=40; 

} 
if(buffer[46]==50 && buffer[47]==57)      //         29 
{ 

tmp[21]=41; 

} 
if(buffer[46]==50 && buffer[47]==65)      //         2a 
{ 

tmp[21]=42; 

} 
if(buffer[46]==50 && buffer[47]==66)      //         2b 
{ 

tmp[21]=43; 

} 
if(buffer[46]==50 && buffer[47]==67)      //         2c 
{ 

tmp[21]=44; 

} 

if(buffer[46]==50 && buffer[47]==68)      //       2d  
{ 

tmp[21]=45; 

} 
if(buffer[46]==50 && buffer[47]==69)      //         2e 
{ 

tmp[21]=46; 

} 
if(buffer[46]==50 && buffer[47]==70)      //         2f 
{ 

tmp[21]=47; 

} 

//------------- 


if(buffer[46]==51 && buffer[47]==48)      // 30        
{ 

tmp[21]=48; 

} 

if(buffer[46]==51 && buffer[47]==49)      // 31        
{ 

tmp[21]=49; 

} 
if(buffer[46]==51 && buffer[47]==50)      // 32        
{ 

tmp[21]=50; 

} 
if(buffer[46]==51 && buffer[47]==51)      //33         
{ 

tmp[21]=51; 

} 
if(buffer[46]==51 && buffer[47]==52)      //34        
{ 

tmp[21]=52; 

} 
if(buffer[46]==51 && buffer[47]==53)      //35      
{ 

tmp[21]=53; 

} 
if(buffer[46]==51 && buffer[47]==54)      //36       
{ 

tmp[21]=54; 

} 
if(buffer[46]==51 && buffer[47]==55)      //37     
{ 

tmp[21]=55; 

} 
if(buffer[46]==51 && buffer[47]==56)      //38     
{ 

tmp[21]=56; 

} 
if(buffer[46]==51 && buffer[47]==57)      //39   
{ 

tmp[21]=57; 

} 

if(buffer[46]==51 && buffer[47]==65)      //3a 
{ 

tmp[21]=58; 

} 
 
if(buffer[46]==51 && buffer[47]==66)      //3b 
{ 

tmp[21]=59; 

} 
if(buffer[46]==51 && buffer[47]==67)      //3c 
{ 

tmp[21]=60; 

} 
if(buffer[46]==51 && buffer[47]==68)      //3d 
{ 

tmp[21]=61; 

} 
if(buffer[46]==51 && buffer[47]==69)      //3e  
{ 

tmp[21]=62; 

} 
if(buffer[46]==51 && buffer[47]==70)      //3f  
{ 

tmp[21]=63; 

} 

//------------ 


if(buffer[46]==52 && buffer[47]==48)      // 40       
{ 

tmp[21]=64; 

} 

if(buffer[46]==52 && buffer[47]==49)      // 41        
{ 

tmp[21]=65; 

} 
if(buffer[46]==52 && buffer[47]==50)      // 42        
{ 

tmp[21]=66; 
 
} 
if(buffer[46]==52 && buffer[47]==51)      //43         
{ 

tmp[21]=67; 

} 
if(buffer[46]==52 && buffer[47]==52)      //44        
{ 

tmp[21]=68; 

} 
if(buffer[46]==52 && buffer[47]==53)      //45      
{ 

tmp[21]=69; 

} 

if(buffer[46]==52 && buffer[47]==54)      //46       
{ 

tmp[21]=70; 

} 
if(buffer[46]==52 && buffer[47]==55)      //47     
{ 

tmp[21]=71; 

} 
if(buffer[46]==52 && buffer[47]==56)      //48     
{ 

tmp[21]=72; 

} 
if(buffer[46]==52 && buffer[47]==57)      //49   
{ 

tmp[21]=73; 

} 

if(buffer[46]==52 && buffer[47]==65)      //4a 
{ 

tmp[21]=74; 

} 
 
if(buffer[46]==52 && buffer[47]==66)      //4b 
{ 

tmp[21]=75; 

} 
if(buffer[46]==52 && buffer[47]==67)      //4c 
{ 

tmp[21]=76; 

} 
if(buffer[46]==52 && buffer[47]==68)      //4d 
{ 

tmp[21]=77; 

} 
if(buffer[46]==52 && buffer[47]==69)      //4e  
{ 

tmp[21]=78; 

} 
if(buffer[46]==52 && buffer[47]==70)      //4f  
{ 

tmp[21]=79; 

} 
//------------ 




if(buffer[46]==53 && buffer[47]==48)      //50       
{ 

tmp[21]=80; 

} 

if(buffer[46]==53 && buffer[47]==49)      //51        
{ 

tmp[21]=81; 

} 
if(buffer[46]==53 && buffer[47]==50)      //52        
{ 

tmp[21]=82; 

} 
if(buffer[46]==53 && buffer[47]==51)      //53         
{ 

tmp[21]=83; 

} 
if(buffer[46]==53 && buffer[47]==52)      //54        
{ 

tmp[21]=84; 

} 
if(buffer[46]==53 && buffer[47]==53)      //55      
{ 

tmp[21]=85; 

} 
if(buffer[46]==53 && buffer[47]==54)      //56       
{ 

tmp[21]=86; 

} 
if(buffer[46]==53 && buffer[47]==55)      //57     
{ 

tmp[21]=87; 

} 
if(buffer[46]==53 && buffer[47]==56)      //58     
{ 

tmp[21]=88; 

} 
if(buffer[46]==53 && buffer[47]==57)      //59   
{ 

tmp[21]=89; 

} 

if(buffer[46]==53 && buffer[47]==65)      //5a 
{ 

tmp[21]=90; 

} 
 
if(buffer[46]==53 && buffer[47]==66)      //5b 
{ 

tmp[21]=91; 

} 
if(buffer[46]==53 && buffer[47]==67)      //5c 
{ 

tmp[21]=92; 

} 
if(buffer[46]==53 && buffer[47]==68)      //5d 
{ 

tmp[21]=93; 

} 
if(buffer[46]==53 && buffer[47]==69)      //5e  
{ 

tmp[21]=94; 

} 
if(buffer[46]==53 && buffer[47]==70)      //5f  
{ 

tmp[21]=95; 

} 
//------------ 




if(buffer[46]==54 && buffer[47]==48)      //60       
{ 

tmp[21]=96; 

} 

if(buffer[46]==54 && buffer[47]==49)      //61        
{ 

tmp[21]=97; 

} 
if(buffer[46]==54 && buffer[47]==50)      //62        
{ 

tmp[21]=98; 

} 
if(buffer[46]==54 && buffer[47]==51)      //63         
{ 

tmp[21]=99; 

} 
if(buffer[46]==54 && buffer[47]==52)      //64        
{ 

tmp[21]=100; 

} 
if(buffer[46]==54 && buffer[47]==53)      //65      
{ 

tmp[21]=101; 

} 
if(buffer[46]==54 && buffer[47]==54)      //66       
{ 

tmp[21]=102; 

} 
if(buffer[46]==54 && buffer[47]==55)      //67     
{ 

tmp[21]=103; 

} 
if(buffer[46]==54 && buffer[47]==56)      //68     
{ 

tmp[21]=104; 

} 
if(buffer[46]==54 && buffer[47]==57)      //69   
{ 

tmp[21]=105; 

} 

if(buffer[46]==54 && buffer[47]==65)      //6a 
{ 

tmp[21]=106; 

} 
 
if(buffer[46]==54 && buffer[47]==66)      //6b 
{ 

tmp[21]=107; 

} 
if(buffer[46]==54 && buffer[47]==67)      //6c 
{ 

tmp[21]=108; 

} 
if(buffer[46]==54 && buffer[47]==68)      //6d 
{ 

tmp[21]=109; 

} 
if(buffer[46]==54 && buffer[47]==69)      //6e  
{ 

tmp[21]=110; 

} 
if(buffer[46]==54 && buffer[47]==70)      //6f  
{ 

tmp[21]=111; 

} 
//------------ 




if(buffer[46]==55 && buffer[47]==48)      //70       
{ 

tmp[21]=112; 

} 

if(buffer[46]==55 && buffer[47]==49)      //71        
{ 

tmp[21]=113; 

} 
if(buffer[46]==55 && buffer[47]==50)      //72        
{ 

tmp[21]=114; 

} 
if(buffer[46]==55 && buffer[47]==51)      //73         
{ 

tmp[21]=115; 

} 
if(buffer[46]==55 && buffer[47]==52)      //74        
{ 

tmp[21]=116; 

} 
if(buffer[46]==55 && buffer[47]==53)      //75      
{ 

tmp[21]=117; 

} 
if(buffer[46]==55 && buffer[47]==54)      //76       
{ 

tmp[21]=118; 

} 
if(buffer[46]==55 && buffer[47]==55)      //77     
{ 

tmp[21]=119; 

} 
if(buffer[46]==55 && buffer[47]==56)      //78     
{ 

tmp[21]=120; 

} 
if(buffer[46]==55 && buffer[47]==57)      //79   
{ 

tmp[21]=121; 

} 

if(buffer[46]==55 && buffer[47]==65)      //7a 
{ 

tmp[21]=122; 

} 
 
if(buffer[46]==55 && buffer[47]==66)      //7b 
{ 

tmp[21]=123; 

} 
if(buffer[46]==55 && buffer[47]==67)      //7c 
{ 

tmp[21]=124; 

} 
if(buffer[46]==55 && buffer[47]==68)      //7d 
{ 

tmp[21]=125; 

} 
if(buffer[46]==55 && buffer[47]==69)      //7e  
{ 

tmp[21]=126; 

} 
if(buffer[46]==55 && buffer[47]==70)      //7f  
{ 

tmp[21]=127; 

} 

//------------ 

if(buffer[46]==56 && buffer[47]==48)      //80       
{ 

tmp[21]=128; 

} 

if(buffer[46]==56 && buffer[47]==49)      //81        
{ 

tmp[21]=129; 

} 
if(buffer[46]==56 && buffer[47]==50)      //82        
{ 

tmp[21]=130; 

} 
if(buffer[46]==56 && buffer[47]==51)      //83         
{ 

tmp[21]=131; 

} 
if(buffer[46]==56 && buffer[47]==52)      //84        
{ 

tmp[21]=132; 

} 
if(buffer[46]==56 && buffer[47]==53)      //85      
{ 

tmp[21]=133; 

} 
if(buffer[46]==56 && buffer[47]==54)      //86       
{ 

tmp[21]=134; 

} 
if(buffer[46]==56 && buffer[47]==55)      //87     
{ 

tmp[21]=135; 

} 
if(buffer[46]==56 && buffer[47]==56)      //88     
{ 

tmp[21]=136; 

} 
if(buffer[46]==56 && buffer[47]==57)      //89   
{ 

tmp[21]=137; 

} 

if(buffer[46]==56 && buffer[47]==65)      //8a 
{ 

tmp[21]=138; 

} 

if(buffer[46]==56 && buffer[47]==66)      //8b 
{ 

tmp[21]=139; 

} 
if(buffer[46]==56 && buffer[47]==67)      //8c 
{ 

tmp[21]=140; 

} 
if(buffer[46]==56 && buffer[47]==68)      //8d 
{ 

tmp[21]=141; 

} 
if(buffer[46]==56 && buffer[47]==69)      //8e  
{ 

tmp[21]=142; 

} 
if(buffer[46]==56 && buffer[47]==70)      //8f  
{ 

tmp[21]=143; 

} 
//------------ 


if(buffer[46]==57 && buffer[47]==48)      //90       
{ 

tmp[21]=144; 

} 

if(buffer[46]==57 && buffer[47]==49)      //91        
{ 

tmp[21]=145; 

} 
if(buffer[46]==57 && buffer[47]==50)      //92        
{ 

tmp[21]=146; 

} 
if(buffer[46]==57 && buffer[47]==51)      //93         
{ 

tmp[21]=147; 

} 
if(buffer[46]==57 && buffer[47]==52)      //94        
{ 

tmp[21]=148; 

} 
if(buffer[46]==57 && buffer[47]==53)      //95      
{ 

tmp[21]=149; 

} 
if(buffer[46]==57 && buffer[47]==54)      //96       
{ 

tmp[21]=150; 

} 
if(buffer[46]==57 && buffer[47]==55)      //97     
{ 

tmp[21]=151; 

} 
if(buffer[46]==57 && buffer[47]==56)      //98     
{ 

tmp[21]=152; 

} 
if(buffer[46]==57 && buffer[47]==57)      //99   
{ 

tmp[21]=153; 

} 

if(buffer[46]==57 && buffer[47]==65)      //9a 
{ 

tmp[21]=154; 

} 

if(buffer[46]==57 && buffer[47]==66)      //9b 
{ 

tmp[21]=155; 

} 
if(buffer[46]==57 && buffer[47]==67)      //9c 
{ 

tmp[21]=156; 

} 
if(buffer[46]==57 && buffer[47]==68)      //9d 
{ 

tmp[21]=157; 

} 
if(buffer[46]==57 && buffer[47]==69)      //9e  
{ 

tmp[21]=158; 

} 
if(buffer[46]==57 && buffer[47]==70)      //9f  
{ 

tmp[21]=159; 

} 
//------------ 


if(buffer[46]==65 && buffer[47]==48)      //a0       
{ 

tmp[21]=160; 

} 

if(buffer[46]==65 && buffer[47]==49)      //a1        
{ 

tmp[21]=161; 

} 
if(buffer[46]==65 && buffer[47]==50)      //a2        
{ 

tmp[21]=162; 

} 
if(buffer[46]==65 && buffer[47]==51)      //a3         
{ 

tmp[21]=163; 

} 
if(buffer[46]==65 && buffer[47]==52)      //a4        
{ 

tmp[21]=164; 

} 
if(buffer[46]==65 && buffer[47]==53)      //a5      
{ 

tmp[21]=165; 

} 
if(buffer[46]==65 && buffer[47]==54)      //a6       
{ 

tmp[21]=166; 

} 
if(buffer[46]==65 && buffer[47]==55)      //a7     
{ 

tmp[21]=167; 

} 
if(buffer[46]==65 && buffer[47]==56)      //a8     
{ 

tmp[21]=168; 

} 
if(buffer[46]==65 && buffer[47]==57)      //a9   
{ 

tmp[21]=169; 

} 

if(buffer[46]==65 && buffer[47]==65)      //aa 
{ 

tmp[21]=170; 

} 

if(buffer[46]==65 && buffer[47]==66)      //ab 
{ 

tmp[21]=171; 

} 
if(buffer[46]==65 && buffer[47]==67)      //ac 
{ 

tmp[21]=172; 

} 
if(buffer[46]==65 && buffer[47]==68)      //ad 
{ 

tmp[21]=173; 

} 
if(buffer[46]==65 && buffer[47]==69)      //ae  
{ 

tmp[21]=174; 

} 
if(buffer[46]==65 && buffer[47]==70)      //af  
{ 

tmp[21]=175; 

} 
//------------ 


if(buffer[46]==66 && buffer[47]==48)      //b0       
{ 

tmp[21]=176; 

} 

if(buffer[46]==66 && buffer[47]==49)      //b1        
{ 

tmp[21]=177; 

} 
if(buffer[46]==66 && buffer[47]==50)      //b2        
{ 

tmp[21]=178; 

} 
if(buffer[46]==66 && buffer[47]==51)      //b3         
{ 

tmp[21]=179; 

} 
if(buffer[46]==66 && buffer[47]==52)      //b4        
{ 

tmp[21]=180; 

} 
if(buffer[46]==66 && buffer[47]==53)      //b5      
{ 

tmp[21]=181; 

} 
if(buffer[46]==66 && buffer[47]==54)      //b6       
{ 

tmp[21]=182; 

} 
if(buffer[46]==66 && buffer[47]==55)      //b7     
{ 

tmp[21]=183; 

} 
if(buffer[46]==66 && buffer[47]==56)      //b8     
{ 

tmp[21]=184; 

} 
if(buffer[46]==66 && buffer[47]==57)      //b9   
{ 

tmp[21]=185; 

} 

if(buffer[46]==66 && buffer[47]==65)      //ba 
{ 

tmp[21]=186; 

} 

if(buffer[46]==66 && buffer[47]==66)      //bb 
{ 

tmp[21]=187; 

} 
if(buffer[46]==66 && buffer[47]==67)      //bc 
{ 

tmp[21]=188; 

} 
if(buffer[46]==66 && buffer[47]==68)      //bd 
{ 

tmp[21]=189; 

} 
if(buffer[46]==66 && buffer[47]==69)      //be  
{ 

tmp[21]=190; 

} 
if(buffer[46]==66 && buffer[47]==70)      //bf  
{ 

tmp[21]=191; 

} 
//------------ 



if(buffer[46]==67 && buffer[47]==48)      //c0       
{ 

tmp[21]=192; 

} 

if(buffer[46]==67 && buffer[47]==49)      //c1        
{ 

tmp[21]=193; 

} 
if(buffer[46]==67 && buffer[47]==50)      //c2        
{ 

tmp[21]=194; 

} 
if(buffer[46]==67 && buffer[47]==51)      //c3         
{ 

tmp[21]=195; 

} 
if(buffer[46]==67 && buffer[47]==52)      //c4        
{ 

tmp[21]=196; 

} 
if(buffer[46]==67 && buffer[47]==53)      //c5      
{ 

tmp[21]=197; 

} 
if(buffer[46]==67 && buffer[47]==54)      //c6       
{ 

tmp[21]=198; 

} 
if(buffer[46]==67 && buffer[47]==55)      //c7     
{ 

tmp[21]=199; 

} 
if(buffer[46]==67 && buffer[47]==56)      //c8     
{ 

tmp[21]=200; 

} 
if(buffer[46]==67 && buffer[47]==57)      //c9   
{ 

tmp[21]=201; 

} 

if(buffer[46]==67 && buffer[47]==65)      //ca 
{ 

tmp[21]=202; 

} 

if(buffer[46]==67 && buffer[47]==66)      //cb 
{ 

tmp[21]=203; 

} 
if(buffer[46]==67 && buffer[47]==67)      //cc 
{ 
 
tmp[21]=204; 

} 
if(buffer[46]==67 && buffer[47]==68)      //cd 
{ 

tmp[21]=205; 

} 
if(buffer[46]==67 && buffer[47]==69)      //ce  
{ 

tmp[21]=206; 

} 
if(buffer[46]==67 && buffer[47]==70)      //cf  
{ 

tmp[21]=207; 

} 
//------------ 


if(buffer[46]==68 && buffer[47]==48)      //d0       
{ 

tmp[21]=208; 

} 

if(buffer[46]==68 && buffer[47]==49)      //d1        
{ 

tmp[21]=209; 

} 
if(buffer[46]==68 && buffer[47]==50)      //d2        
{ 

tmp[21]=210; 

} 
if(buffer[46]==68 && buffer[47]==51)      //d3         
{ 

tmp[21]=211; 

} 
if(buffer[46]==68 && buffer[47]==52)      //d4        
{ 
 
tmp[21]=212; 

} 
if(buffer[46]==68 && buffer[47]==53)      //d5      
{ 

tmp[21]=213; 

} 
if(buffer[46]==68 && buffer[47]==54)      //d6       
{ 

tmp[21]=214; 

} 
if(buffer[46]==68 && buffer[47]==55)      //d7     
{ 

tmp[21]=215; 

} 
if(buffer[46]==68 && buffer[47]==56)      //d8     
{ 

tmp[21]=216; 

} 
if(buffer[46]==68 && buffer[47]==57)      //d9   
{ 

tmp[21]=217; 

} 

if(buffer[46]==68 && buffer[47]==65)      //da 
{ 

tmp[21]=218; 

} 

if(buffer[46]==68 && buffer[47]==66)      //db 
{ 

tmp[21]=219; 

} 
if(buffer[46]==68 && buffer[47]==67)      //dc 
{ 

tmp[21]=220; 
 
} 
if(buffer[46]==68 && buffer[47]==68)      //dd 
{ 

tmp[21]=221; 

} 
if(buffer[46]==68 && buffer[47]==69)      //de  
{ 

tmp[21]=222; 

} 
if(buffer[46]==68 && buffer[47]==70)      //df  
{ 

tmp[21]=223; 

} 
//------------ 



if(buffer[46]==69 && buffer[47]==48)      //e0       
{ 

tmp[21]=224; 

} 

if(buffer[46]==69 && buffer[47]==49)      //e1        
{ 

tmp[21]=225; 

} 
if(buffer[46]==69 && buffer[47]==50)      //e2        
{ 

tmp[21]=226; 

} 
if(buffer[46]==69 && buffer[47]==51)      //e3         
{ 

tmp[21]=227; 

} 
if(buffer[46]==69 && buffer[47]==52)      //e4        
{ 

tmp[21]=228; 

} 
if(buffer[46]==69 && buffer[47]==53)      //e5      
{ 

tmp[21]=229; 

} 
if(buffer[46]==69 && buffer[47]==54)      //e6       
{ 

tmp[21]=230; 

} 
if(buffer[46]==69 && buffer[47]==55)      //e7     
{ 

tmp[21]=231; 

} 
if(buffer[46]==69 && buffer[47]==56)      //e8     
{ 

tmp[21]=232; 

} 
if(buffer[46]==69 && buffer[47]==57)      //e9   
{ 

tmp[21]=233; 

} 

if(buffer[46]==69 && buffer[47]==65)      //ea 
{ 

tmp[21]=234; 

} 

if(buffer[46]==69 && buffer[47]==66)      //eb 
{ 

tmp[21]=235; 

} 
if(buffer[46]==69 && buffer[47]==67)      //ec 
{ 

tmp[21]=236; 

} 
if(buffer[46]==69 && buffer[47]==68)      //ed 
{ 

tmp[21]=237; 

} 
if(buffer[46]==69 && buffer[47]==69)      //ee  
{ 

tmp[21]=238; 

} 
if(buffer[46]==69 && buffer[47]==70)      //ef  
{ 

tmp[21]=239; 

} 
//------------ 

if(buffer[46]==70 && buffer[47]==48)      //f0       
{ 

tmp[21]=240; 

} 

if(buffer[46]==70 && buffer[47]==49)      //f1        
{ 

tmp[21]=241; 

} 
if(buffer[46]==70 && buffer[47]==50)      //f2        
{ 

tmp[21]=242; 

} 
if(buffer[46]==70 && buffer[47]==51)      //f3         
{ 

tmp[21]=243; 

} 
if(buffer[46]==70 && buffer[47]==52)      //f4        
{ 

tmp[21]=244; 

} 
if(buffer[46]==70 && buffer[47]==53)      //f5      
{ 

tmp[21]=245; 

} 
if(buffer[46]==70 && buffer[47]==54)      //f6       
{ 

tmp[21]=246; 

} 
if(buffer[46]==70 && buffer[47]==55)      //f7     
{ 

tmp[21]=247; 

} 
if(buffer[46]==70 && buffer[47]==56)      //f8     
{ 

tmp[21]=248; 

} 
if(buffer[46]==70 && buffer[47]==57)      //f9   
{ 

tmp[21]=249; 

} 

if(buffer[46]==70 && buffer[47]==65)      //fa 
{ 

tmp[21]=250; 

} 

if(buffer[46]==70 && buffer[47]==66)      //fb 
{ 

tmp[21]=251; 

} 
if(buffer[46]==70 && buffer[47]==67)      //fc 
{ 

tmp[21]=252; 

} 
if(buffer[46]==70 && buffer[47]==68)      //fd 
{ 
 
tmp[21]=253; 

} 
if(buffer[46]==70 && buffer[47]==69)      //fe  
{ 

tmp[21]=254; 

} 
if(buffer[46]==70 && buffer[47]==70)      //ff  
{ 

tmp[21]=255; 

} 

//----------------------- end of tmp[21]--------------------------- 


//----------------------- start of tmp[22]--------------------------- 


if(buffer[48]==48 && buffer[49]==48)      //00        
{ 

tmp[22]=0; 

} 

if(buffer[48]==48 && buffer[49]==49)      //01        
{ 

tmp[22]=1; 

} 
if(buffer[48]==48 && buffer[49]==50)      //02        
{ 

tmp[22]=2; 

} 
if(buffer[48]==48 && buffer[49]==51)      //03         
{ 

tmp[22]=3; 

} 
if(buffer[48]==48 && buffer[49]==52)      //04        
{ 

tmp[22]=4; 
 
} 
if(buffer[48]==48 && buffer[49]==53)      //05      
{ 

tmp[22]=5; 

} 


if(buffer[48]==48 && buffer[49]==54)      //06       
{ 

tmp[22]=6; 

} 
if(buffer[48]==48 && buffer[49]==55)      //07     
{ 

tmp[22]=7; 

} 
if(buffer[48]==48 && buffer[49]==56)      //08     
{ 

tmp[22]=8; 

} 
if(buffer[48]==48 && buffer[49]==57)      //09   
{ 

tmp[22]=9; 

} 

if(buffer[48]==48 && buffer[49]==65)      //0a 
{ 

tmp[22]=10; 

} 

if(buffer[48]==48 && buffer[49]==66)      //0b 
{ 

tmp[22]=11; 

} 
if(buffer[48]==48 && buffer[49]==67)      //0c 
{ 

tmp[22]=12; 
 
} 
if(buffer[48]==48 && buffer[49]==68)      //0d 
{ 

tmp[22]=13; 

} 
if(buffer[48]==48 && buffer[49]==69)      //0e  
{ 

tmp[22]=14; 

} 
if(buffer[48]==48 && buffer[49]==70)      //0f  
{ 

tmp[22]=15; 

} 

//----------- 

if(buffer[48]==49 && buffer[49]==48)      //        10 
{ 

tmp[22]=16; 

} 
if(buffer[48]==49 && buffer[49]==49)      //         11 
{ 

tmp[22]=17; 

} 
if(buffer[48]==49 && buffer[49]==50)      //         12 
{ 

tmp[22]=18; 

} 
if(buffer[48]==49 && buffer[49]==51)      //         13 
{ 

tmp[22]=19; 

} 
if(buffer[48]==49 && buffer[49]==52)      //         14 
{ 

tmp[22]=20; 

} 
if(buffer[48]==49 && buffer[49]==53)      //         15 
{ 

tmp[22]=21; 

} 
if(buffer[48]==49 && buffer[49]==54)      //         16 
{ 

tmp[22]=22; 

} 
if(buffer[48]==49 && buffer[49]==55)      //         17 
{ 

tmp[22]=23; 

} 
if(buffer[48]==49 && buffer[49]==56)      //         18 
{ 

tmp[22]=24; 

} 
if(buffer[48]==49 && buffer[49]==57)      //         19 
{ 

tmp[22]=25; 

} 

if(buffer[48]==49 && buffer[49]==65)      //         1a 
{ 

tmp[22]=26; 

} 
if(buffer[48]==49 && buffer[49]==66)      //         1b 
{ 

tmp[22]=27; 

} 
if(buffer[48]==49 && buffer[49]==67)      //         1c 
{ 

tmp[22]=28; 

} 
if(buffer[48]==49 && buffer[49]==68)      //         1d 
{ 
 
tmp[22]=29; 

} 
if(buffer[48]==49 && buffer[49]==69)      //         1e 
{ 

tmp[22]=30; 

} 
if(buffer[48]==49 && buffer[49]==70)      //         1f 
{ 

tmp[22]=31; 

} 


//--------------- 


if(buffer[48]==50 && buffer[49]==48)      //         20 
{ 

tmp[22]=32; 

} 

if(buffer[48]==50 && buffer[49]==49)      //         21 
{ 

tmp[22]=33; 

} 
if(buffer[48]==50 && buffer[49]==50)      //         22 
{ 

tmp[22]=34; 

} 
if(buffer[48]==50 && buffer[49]==51)      //         23 
{ 

tmp[22]=35; 

} 
if(buffer[48]==50 && buffer[49]==52)      //         24 
{ 

tmp[22]=36; 

} 
if(buffer[48]==50 && buffer[49]==53)      //         25 
{ 

tmp[22]=37; 

} 
if(buffer[48]==50 && buffer[49]==54)      //         26 
{ 

tmp[22]=38; 

} 
if(buffer[48]==50 && buffer[49]==55)      //         27 
{ 

tmp[22]=39; 

} 
if(buffer[48]==50 && buffer[49]==56)      //         28 
{ 

tmp[22]=40; 

} 
if(buffer[48]==50 && buffer[49]==57)      //         29 
{ 

tmp[22]=41; 

} 
if(buffer[48]==50 && buffer[49]==65)      //         2a 
{ 

tmp[22]=42; 

} 
if(buffer[48]==50 && buffer[49]==66)      //         2b 
{ 

tmp[22]=43; 

} 
if(buffer[48]==50 && buffer[49]==67)      //         2c 
{ 

tmp[22]=44; 

} 

if(buffer[48]==50 && buffer[49]==68)      //       2d  
{ 

tmp[22]=45; 

} 
if(buffer[48]==50 && buffer[49]==69)      //         2e 
{ 

tmp[22]=46; 

} 
if(buffer[48]==50 && buffer[49]==70)      //         2f 
{ 

tmp[22]=47; 

} 

//------------- 


if(buffer[48]==51 && buffer[49]==48)      // 30        
{ 

tmp[22]=48; 

} 

if(buffer[48]==51 && buffer[49]==49)      // 31        
{ 

tmp[22]=49; 

} 
if(buffer[48]==51 && buffer[49]==50)      // 32        
{ 

tmp[22]=50; 

} 
if(buffer[48]==51 && buffer[49]==51)      //33         
{ 

tmp[22]=51; 

} 
if(buffer[48]==51 && buffer[49]==52)      //34        
{ 

tmp[22]=52; 

} 
if(buffer[48]==51 && buffer[49]==53)      //35      
{ 
 
tmp[22]=53; 

} 
if(buffer[48]==51 && buffer[49]==54)      //36       
{ 

tmp[22]=54; 

} 
if(buffer[48]==51 && buffer[49]==55)      //37     
{ 

tmp[22]=55; 

} 
if(buffer[48]==51 && buffer[49]==56)      //38     
{ 

tmp[22]=56; 

} 
if(buffer[48]==51 && buffer[49]==57)      //39   
{ 

tmp[22]=57; 

} 

if(buffer[48]==51 && buffer[49]==65)      //3a 
{ 

tmp[22]=58; 

} 

if(buffer[48]==51 && buffer[49]==66)      //3b 
{ 

tmp[22]=59; 

} 
if(buffer[48]==51 && buffer[49]==67)      //3c 
{ 

tmp[22]=60; 

} 
if(buffer[48]==51 && buffer[49]==68)      //3d 
{ 

tmp[22]=61; 
 
} 
if(buffer[48]==51 && buffer[49]==69)      //3e  
{ 

tmp[22]=62; 

} 
if(buffer[48]==51 && buffer[49]==70)      //3f  
{ 

tmp[22]=63; 

} 

//------------ 


if(buffer[48]==52 && buffer[49]==48)      // 40       
{ 

tmp[22]=64; 

} 

if(buffer[48]==52 && buffer[49]==49)      // 41        
{ 

tmp[22]=65; 

} 
if(buffer[48]==52 && buffer[49]==50)      // 42        
{ 

tmp[22]=66; 

} 
if(buffer[48]==52 && buffer[49]==51)      //43         
{ 

tmp[22]=67; 

} 
if(buffer[48]==52 && buffer[49]==52)      //44        
{ 

tmp[22]=68; 

} 
if(buffer[48]==52 && buffer[49]==53)      //45      
{ 

tmp[22]=69; 

} 

if(buffer[48]==52 && buffer[49]==54)      //46       
{ 

tmp[22]=70; 

} 
if(buffer[48]==52 && buffer[49]==55)      //47     
{ 

tmp[22]=71; 

} 
if(buffer[48]==52 && buffer[49]==56)      //48     
{ 

tmp[22]=72; 

} 
if(buffer[48]==52 && buffer[49]==57)      //49   
{ 

tmp[22]=73; 

} 

if(buffer[48]==52 && buffer[49]==65)      //4a 
{ 

tmp[22]=74; 

} 

if(buffer[48]==52 && buffer[49]==66)      //4b 
{ 

tmp[22]=75; 

} 
if(buffer[48]==52 && buffer[49]==67)      //4c 
{ 

tmp[22]=76; 

} 
if(buffer[48]==52 && buffer[49]==68)      //4d 
{ 

tmp[22]=77; 
 
} 
if(buffer[48]==52 && buffer[49]==69)      //4e  
{ 

tmp[22]=78; 

} 
if(buffer[48]==52 && buffer[49]==70)      //4f  
{ 

tmp[22]=79; 

} 
//------------ 




if(buffer[48]==53 && buffer[49]==48)      //50       
{ 

tmp[22]=80; 

} 

if(buffer[48]==53 && buffer[49]==49)      //51        
{ 

tmp[22]=81; 

} 
if(buffer[48]==53 && buffer[49]==50)      //52        
{ 

tmp[22]=82; 

} 
if(buffer[48]==53 && buffer[49]==51)      //53         
{ 

tmp[22]=83; 

} 
if(buffer[48]==53 && buffer[49]==52)      //54        
{ 

tmp[22]=84; 

} 
if(buffer[48]==53 && buffer[49]==53)      //55      
{ 
 
tmp[22]=85; 

} 
if(buffer[48]==53 && buffer[49]==54)      //56       
{ 

tmp[22]=86; 

} 
if(buffer[48]==53 && buffer[49]==55)      //57     
{ 

tmp[22]=87; 

} 
if(buffer[48]==53 && buffer[49]==56)      //58     
{ 

tmp[22]=88; 

} 
if(buffer[48]==53 && buffer[49]==57)      //59   
{ 

tmp[22]=89; 

} 

if(buffer[48]==53 && buffer[49]==65)      //5a 
{ 

tmp[22]=90; 

} 

if(buffer[48]==53 && buffer[49]==66)      //5b 
{ 

tmp[22]=91; 

} 
if(buffer[48]==53 && buffer[49]==67)      //5c 
{ 

tmp[22]=92; 

} 
if(buffer[48]==53 && buffer[49]==68)      //5d 
{ 

tmp[22]=93; 
 
} 
if(buffer[48]==53 && buffer[49]==69)      //5e  
{ 

tmp[22]=94; 

} 
if(buffer[48]==53 && buffer[49]==70)      //5f  
{ 

tmp[22]=95; 

} 
//------------ 




if(buffer[48]==54 && buffer[49]==48)      //60       
{ 

tmp[22]=96; 

} 

if(buffer[48]==54 && buffer[49]==49)      //61        
{ 

tmp[22]=97; 

} 
if(buffer[48]==54 && buffer[49]==50)      //62        
{ 

tmp[22]=98; 

} 
if(buffer[48]==54 && buffer[49]==51)      //63         
{ 

tmp[22]=99; 

} 
if(buffer[48]==54 && buffer[49]==52)      //64        
{ 

tmp[22]=100; 

} 
if(buffer[48]==54 && buffer[49]==53)      //65      
{ 
 
tmp[22]=101; 

} 
if(buffer[48]==54 && buffer[49]==54)      //66       
{ 

tmp[22]=102; 

} 
if(buffer[48]==54 && buffer[49]==55)      //67     
{ 

tmp[22]=103; 

} 
if(buffer[48]==54 && buffer[49]==56)      //68     
{ 

tmp[22]=104; 

} 
if(buffer[48]==54 && buffer[49]==57)      //69   
{ 

tmp[22]=105; 

} 

if(buffer[48]==54 && buffer[49]==65)      //6a 
{ 

tmp[22]=106; 

} 

if(buffer[48]==54 && buffer[49]==66)      //6b 
{ 

tmp[22]=107; 

} 
if(buffer[48]==54 && buffer[49]==67)      //6c 
{ 

tmp[22]=108; 

} 
if(buffer[48]==54 && buffer[49]==68)      //6d 
{ 

tmp[22]=109; 
 
} 
if(buffer[48]==54 && buffer[49]==69)      //6e  
{ 

tmp[22]=110; 

} 
if(buffer[48]==54 && buffer[49]==70)      //6f  
{ 

tmp[22]=111; 

} 
//------------ 




if(buffer[48]==55 && buffer[49]==48)      //70       
{ 

tmp[22]=112; 

} 

if(buffer[48]==55 && buffer[49]==49)      //71        
{ 

tmp[22]=113; 

} 
if(buffer[48]==55 && buffer[49]==50)      //72        
{ 

tmp[22]=114; 

} 
if(buffer[48]==55 && buffer[49]==51)      //73         
{ 

tmp[22]=115; 

} 
if(buffer[48]==55 && buffer[49]==52)      //74        
{ 

tmp[22]=116; 

} 
if(buffer[48]==55 && buffer[49]==53)      //75      
{ 
 
tmp[22]=117; 

} 
if(buffer[48]==55 && buffer[49]==54)      //76       
{ 

tmp[22]=118; 

} 
if(buffer[48]==55 && buffer[49]==55)      //77     
{ 

tmp[22]=119; 

} 
if(buffer[48]==55 && buffer[49]==56)      //78     
{ 

tmp[22]=120; 

} 
if(buffer[48]==55 && buffer[49]==57)      //79   
{ 

tmp[22]=121; 

} 

if(buffer[48]==55 && buffer[49]==65)      //7a 
{ 

tmp[22]=122; 

} 

if(buffer[48]==55 && buffer[49]==66)      //7b 
{ 

tmp[22]=123; 

} 
if(buffer[48]==55 && buffer[49]==67)      //7c 
{ 

tmp[22]=124; 

} 
if(buffer[48]==55 && buffer[49]==68)      //7d 
{ 

tmp[22]=125; 
 
} 
if(buffer[48]==55 && buffer[49]==69)      //7e  
{ 

tmp[22]=126; 

} 
if(buffer[48]==55 && buffer[49]==70)      //7f  
{ 

tmp[22]=127; 

} 

//------------ 

if(buffer[48]==56 && buffer[49]==48)      //80       
{ 

tmp[22]=128; 

} 

if(buffer[48]==56 && buffer[49]==49)      //81        
{ 

tmp[22]=129; 

} 
if(buffer[48]==56 && buffer[49]==50)      //82        
{ 

tmp[22]=130; 

} 
if(buffer[48]==56 && buffer[49]==51)      //83         
{ 

tmp[22]=131; 

} 
if(buffer[48]==56 && buffer[49]==52)      //84        
{ 

tmp[22]=132; 

} 
if(buffer[48]==56 && buffer[49]==53)      //85      
{ 

tmp[22]=133; 
 
} 
if(buffer[48]==56 && buffer[49]==54)      //86       
{ 

tmp[22]=134; 

} 
if(buffer[48]==56 && buffer[49]==55)      //87     
{ 

tmp[22]=135; 

} 
if(buffer[48]==56 && buffer[49]==56)      //88     
{ 

tmp[22]=136; 

} 
if(buffer[48]==56 && buffer[49]==57)      //89   
{ 

tmp[22]=137; 

} 

if(buffer[48]==56 && buffer[49]==65)      //8a 
{ 

tmp[22]=138; 

} 

if(buffer[48]==56 && buffer[49]==66)      //8b 
{ 

tmp[22]=139; 

} 
if(buffer[48]==56 && buffer[49]==67)      //8c 
{ 

tmp[22]=140; 

} 
if(buffer[48]==56 && buffer[49]==68)      //8d 
{ 

tmp[22]=141; 

} 
if(buffer[48]==56 && buffer[49]==69)      //8e  
{ 

tmp[22]=142; 

} 
if(buffer[48]==56 && buffer[49]==70)      //8f  
{ 

tmp[22]=143; 

} 
//------------ 


if(buffer[48]==57 && buffer[49]==48)      //90       
{ 

tmp[22]=144; 

} 

if(buffer[48]==57 && buffer[49]==49)      //91        
{ 

tmp[22]=145; 

} 
if(buffer[48]==57 && buffer[49]==50)      //92        
{ 

tmp[22]=146; 

} 
if(buffer[48]==57 && buffer[49]==51)      //93         
{ 

tmp[22]=147; 

} 
if(buffer[48]==57 && buffer[49]==52)      //94        
{ 

tmp[22]=148; 

} 
if(buffer[48]==57 && buffer[49]==53)      //95      
{ 

tmp[22]=149; 

} 
if(buffer[48]==57 && buffer[49]==54)      //96       
{ 

tmp[22]=150; 

} 
if(buffer[48]==57 && buffer[49]==55)      //97     
{ 

tmp[22]=151; 

} 
if(buffer[48]==57 && buffer[49]==56)      //98     
{ 

tmp[22]=152; 

} 
if(buffer[48]==57 && buffer[49]==57)      //99   
{ 

tmp[22]=153; 

} 

if(buffer[48]==57 && buffer[49]==65)      //9a 
{ 

tmp[22]=154; 

} 

if(buffer[48]==57 && buffer[49]==66)      //9b 
{ 

tmp[22]=155; 

} 
if(buffer[48]==57 && buffer[49]==67)      //9c 
{ 

tmp[22]=156; 

} 
if(buffer[48]==57 && buffer[49]==68)      //9d 
{ 

tmp[22]=157; 

} 
if(buffer[48]==57 && buffer[49]==69)      //9e  
{ 
 
tmp[22]=158; 

} 
if(buffer[48]==57 && buffer[49]==70)      //9f  
{ 

tmp[22]=159; 

} 
//------------ 


if(buffer[48]==65 && buffer[49]==48)      //a0       
{ 

tmp[22]=160; 

} 

if(buffer[48]==65 && buffer[49]==49)      //a1        
{ 

tmp[22]=161; 

} 
if(buffer[48]==65 && buffer[49]==50)      //a2        
{ 

tmp[22]=162; 

} 
if(buffer[48]==65 && buffer[49]==51)      //a3         
{ 

tmp[22]=163; 

} 
if(buffer[48]==65 && buffer[49]==52)      //a4        
{ 

tmp[22]=164; 

} 
if(buffer[48]==65 && buffer[49]==53)      //a5      
{ 

tmp[22]=165; 

} 
if(buffer[48]==65 && buffer[49]==54)      //a6       
{ 
 
tmp[22]=166; 

} 
if(buffer[48]==65 && buffer[49]==55)      //a7     
{ 

tmp[22]=167; 

} 
if(buffer[48]==65 && buffer[49]==56)      //a8     
{ 

tmp[22]=168; 

} 
if(buffer[48]==65 && buffer[49]==57)      //a9   
{ 

tmp[22]=169; 

} 

if(buffer[48]==65 && buffer[49]==65)      //aa 
{ 

tmp[22]=170; 

} 

if(buffer[48]==65 && buffer[49]==66)      //ab 
{ 

tmp[22]=171; 

} 
if(buffer[48]==65 && buffer[49]==67)      //ac 
{ 

tmp[22]=172; 

} 
if(buffer[48]==65 && buffer[49]==68)      //ad 
{ 

tmp[22]=173; 

} 
if(buffer[48]==65 && buffer[49]==69)      //ae  
{ 

tmp[22]=174; 
 
} 
if(buffer[48]==65 && buffer[49]==70)      //af  
{ 

tmp[22]=175; 

} 
//------------ 


if(buffer[48]==66 && buffer[49]==48)      //b0       
{ 

tmp[22]=176; 

} 

if(buffer[48]==66 && buffer[49]==49)      //b1        
{ 

tmp[22]=177; 

} 
if(buffer[48]==66 && buffer[49]==50)      //b2        
{ 

tmp[22]=178; 

} 
if(buffer[48]==66 && buffer[49]==51)      //b3         
{ 

tmp[22]=179; 

} 
if(buffer[48]==66 && buffer[49]==52)      //b4        
{ 

tmp[22]=180; 

} 
if(buffer[48]==66 && buffer[49]==53)      //b5      
{ 

tmp[22]=181; 

} 
if(buffer[48]==66 && buffer[49]==54)      //b6       
{ 

tmp[22]=182; 
 
} 
if(buffer[48]==66 && buffer[49]==55)      //b7     
{ 

tmp[22]=183; 

} 
if(buffer[48]==66 && buffer[49]==56)      //b8     
{ 

tmp[22]=184; 

} 
if(buffer[48]==66 && buffer[49]==57)      //b9   
{ 

tmp[22]=185; 

} 

if(buffer[48]==66 && buffer[49]==65)      //ba 
{ 

tmp[22]=186; 

} 

if(buffer[48]==66 && buffer[49]==66)      //bb 
{ 

tmp[22]=187; 

} 
if(buffer[48]==66 && buffer[49]==67)      //bc 
{ 

tmp[22]=188; 

} 
if(buffer[48]==66 && buffer[49]==68)      //bd 
{ 

tmp[22]=189; 

} 
if(buffer[48]==66 && buffer[49]==69)      //be  
{ 

tmp[22]=190; 

} 
if(buffer[48]==66 && buffer[49]==70)      //bf  
{ 

tmp[22]=191; 

} 
//------------ 



if(buffer[48]==67 && buffer[49]==48)      //c0       
{ 

tmp[22]=192; 

} 

if(buffer[48]==67 && buffer[49]==49)      //c1        
{ 

tmp[22]=193; 

} 
if(buffer[48]==67 && buffer[49]==50)      //c2        
{ 

tmp[22]=194; 

} 
if(buffer[48]==67 && buffer[49]==51)      //c3         
{ 

tmp[22]=195; 

} 
if(buffer[48]==67 && buffer[49]==52)      //c4        
{ 

tmp[22]=196; 

} 
if(buffer[48]==67 && buffer[49]==53)      //c5      
{ 

tmp[22]=197; 

} 
if(buffer[48]==67 && buffer[49]==54)      //c6       
{ 

tmp[22]=198; 

} 
if(buffer[48]==67 && buffer[49]==55)      //c7     
{ 

tmp[22]=199; 

} 
if(buffer[48]==67 && buffer[49]==56)      //c8     
{ 

tmp[22]=200; 

} 
if(buffer[48]==67 && buffer[49]==57)      //c9   
{ 

tmp[22]=201; 

} 

if(buffer[48]==67 && buffer[49]==65)      //ca 
{ 

tmp[22]=202; 

} 

if(buffer[48]==67 && buffer[49]==66)      //cb 
{ 

tmp[22]=203; 

} 
if(buffer[48]==67 && buffer[49]==67)      //cc 
{ 

tmp[22]=204; 

} 
if(buffer[48]==67 && buffer[49]==68)      //cd 
{ 

tmp[22]=205; 

} 
if(buffer[48]==67 && buffer[49]==69)      //ce  
{ 

tmp[22]=206; 

} 
if(buffer[48]==67 && buffer[49]==70)      //cf  
{ 

tmp[22]=207; 

} 
//------------ 


if(buffer[48]==68 && buffer[49]==48)      //d0       
{ 

tmp[22]=208; 

} 

if(buffer[48]==68 && buffer[49]==49)      //d1        
{ 

tmp[22]=209; 

} 
if(buffer[48]==68 && buffer[49]==50)      //d2        
{ 

tmp[22]=210; 

} 
if(buffer[48]==68 && buffer[49]==51)      //d3         
{ 

tmp[22]=211; 

} 
if(buffer[48]==68 && buffer[49]==52)      //d4        
{ 

tmp[22]=212; 

} 
if(buffer[48]==68 && buffer[49]==53)      //d5      
{ 

tmp[22]=213; 

} 
if(buffer[48]==68 && buffer[49]==54)      //d6       
{ 

tmp[22]=214; 

} 
if(buffer[48]==68 && buffer[49]==55)      //d7     
{ 

tmp[22]=215; 

} 
if(buffer[48]==68 && buffer[49]==56)      //d8     
{ 

tmp[22]=216; 

} 
if(buffer[48]==68 && buffer[49]==57)      //d9   
{ 

tmp[22]=217; 

} 

if(buffer[48]==68 && buffer[49]==65)      //da 
{ 

tmp[22]=218; 

} 

if(buffer[48]==68 && buffer[49]==66)      //db 
{ 

tmp[22]=219; 

} 
if(buffer[48]==68 && buffer[49]==67)      //dc 
{ 

tmp[22]=220; 

} 
if(buffer[48]==68 && buffer[49]==68)      //dd 
{ 

tmp[22]=221; 

} 
if(buffer[48]==68 && buffer[49]==69)      //de  
{ 

tmp[22]=222; 

} 
if(buffer[48]==68 && buffer[49]==70)      //df  
{ 

tmp[22]=223; 

} 
//------------ 



if(buffer[48]==69 && buffer[49]==48)      //e0       
{ 

tmp[22]=224; 

} 

if(buffer[48]==69 && buffer[49]==49)      //e1        
{ 

tmp[22]=225; 

} 
if(buffer[48]==69 && buffer[49]==50)      //e2        
{ 

tmp[22]=226; 

} 
if(buffer[48]==69 && buffer[49]==51)      //e3         
{ 

tmp[22]=227; 

} 
if(buffer[48]==69 && buffer[49]==52)      //e4        
{ 

tmp[22]=228; 

} 
if(buffer[48]==69 && buffer[49]==53)      //e5      
{ 

tmp[22]=229; 

} 
if(buffer[48]==69 && buffer[49]==54)      //e6       
{ 

tmp[22]=230; 

} 
if(buffer[48]==69 && buffer[49]==55)      //e7     
{ 
 
tmp[22]=231; 

} 
if(buffer[48]==69 && buffer[49]==56)      //e8     
{ 

tmp[22]=232; 

} 
if(buffer[48]==69 && buffer[49]==57)      //e9   
{ 

tmp[22]=233; 

} 

if(buffer[48]==69 && buffer[49]==65)      //ea 
{ 

tmp[22]=234; 

} 

if(buffer[48]==69 && buffer[49]==66)      //eb 
{ 

tmp[22]=235; 

} 
if(buffer[48]==69 && buffer[49]==67)      //ec 
{ 

tmp[22]=236; 

} 
if(buffer[48]==69 && buffer[49]==68)      //ed 
{ 

tmp[22]=237; 

} 
if(buffer[48]==69 && buffer[49]==69)      //ee  
{ 

tmp[22]=238; 

} 
if(buffer[48]==69 && buffer[49]==70)      //ef  
{ 

tmp[22]=239; 
 
} 
//------------ 

if(buffer[48]==70 && buffer[49]==48)      //f0       
{ 

tmp[22]=240; 

} 

if(buffer[48]==70 && buffer[49]==49)      //f1        
{ 

tmp[22]=241; 

} 
if(buffer[48]==70 && buffer[49]==50)      //f2        
{ 

tmp[22]=242; 

} 
if(buffer[48]==70 && buffer[49]==51)      //f3         
{ 

tmp[22]=243; 

} 
if(buffer[48]==70 && buffer[49]==52)      //f4        
{ 

tmp[22]=244; 

} 
if(buffer[48]==70 && buffer[49]==53)      //f5      
{ 

tmp[22]=245; 

} 
if(buffer[48]==70 && buffer[49]==54)      //f6       
{ 

tmp[22]=246; 

} 
if(buffer[48]==70 && buffer[49]==55)      //f7     
{ 

tmp[22]=247; 

} 
if(buffer[48]==70 && buffer[49]==56)      //f8     
{ 

tmp[22]=248; 

} 
if(buffer[48]==70 && buffer[49]==57)      //f9   
{ 

tmp[22]=249; 

} 

if(buffer[48]==70 && buffer[49]==65)      //fa 
{ 

tmp[22]=250; 

} 

if(buffer[48]==70 && buffer[49]==66)      //fb 
{ 

tmp[22]=251; 

} 
if(buffer[48]==70 && buffer[49]==67)      //fc 
{ 

tmp[22]=252; 

} 
if(buffer[48]==70 && buffer[49]==68)      //fd 
{ 

tmp[22]=253; 

} 
if(buffer[48]==70 && buffer[49]==69)      //fe  
{ 

tmp[22]=254; 

} 
if(buffer[48]==70 && buffer[49]==70)      //ff  
{ 

tmp[22]=255; 

} 

//----------------------- end of tmp[22]--------------------------- 


//----------------------- start of tmp[23]--------------------------- 


if(buffer[50]==48 && buffer[51]==48)      //00        
{ 

tmp[23]=0; 

} 

if(buffer[50]==48 && buffer[51]==49)      //01        
{ 

tmp[23]=1; 

} 
if(buffer[50]==48 && buffer[51]==50)      //02        
{ 

tmp[23]=2; 

} 
if(buffer[50]==48 && buffer[51]==51)      //03         
{ 

tmp[23]=3; 

} 
if(buffer[50]==48 && buffer[51]==52)      //04        
{ 

tmp[23]=4; 

} 
if(buffer[50]==48 && buffer[51]==53)      //05      
{ 

tmp[23]=5; 

} 


if(buffer[50]==48 && buffer[51]==54)      //06       
{ 

tmp[23]=6; 

} 
if(buffer[50]==48 && buffer[51]==55)      //07     
{ 

tmp[23]=7; 

} 
if(buffer[50]==48 && buffer[51]==56)      //08     
{ 

tmp[23]=8; 

} 
if(buffer[50]==48 && buffer[51]==57)      //09   
{ 

tmp[23]=9; 

} 

if(buffer[50]==48 && buffer[51]==65)      //0a 
{ 

tmp[23]=10; 

} 

if(buffer[50]==48 && buffer[51]==66)      //0b 
{ 

tmp[23]=11; 

} 
if(buffer[50]==48 && buffer[51]==67)      //0c 
{ 

tmp[23]=12; 

} 
if(buffer[50]==48 && buffer[51]==68)      //0d 
{ 

tmp[23]=13; 

} 
if(buffer[50]==48 && buffer[51]==69)      //0e  
{ 

tmp[23]=14; 

} 
if(buffer[50]==48 && buffer[51]==70)      //0f  
{ 

tmp[23]=15; 

} 

//----------- 

if(buffer[50]==49 && buffer[51]==48)      //        10 
{ 

tmp[23]=16; 

} 
if(buffer[50]==49 && buffer[51]==49)      //         11 
{ 

tmp[23]=17; 

} 
if(buffer[50]==49 && buffer[51]==50)      //         12 
{ 

tmp[23]=18; 

} 
if(buffer[50]==49 && buffer[51]==51)      //         13 
{ 

tmp[23]=19; 

} 
if(buffer[50]==49 && buffer[51]==52)      //         14 
{ 

tmp[23]=20; 

} 
if(buffer[50]==49 && buffer[51]==53)      //         15 
{ 

tmp[23]=21; 

} 
if(buffer[50]==49 && buffer[51]==54)      //         16 
{ 

tmp[23]=22; 

} 
if(buffer[50]==49 && buffer[51]==55)      //         17 
{ 

tmp[23]=23; 
 
} 
if(buffer[50]==49 && buffer[51]==56)      //         18 
{ 

tmp[23]=24; 

} 
if(buffer[50]==49 && buffer[51]==57)      //         19 
{ 

tmp[23]=25; 

} 

if(buffer[50]==49 && buffer[51]==65)      //         1a 
{ 

tmp[23]=26; 

} 
if(buffer[50]==49 && buffer[51]==66)      //         1b 
{ 

tmp[23]=27; 

} 
if(buffer[50]==49 && buffer[51]==67)      //         1c 
{ 

tmp[23]=28; 

} 
if(buffer[50]==49 && buffer[51]==68)      //         1d 
{ 

tmp[23]=29; 

} 
if(buffer[50]==49 && buffer[51]==69)      //         1e 
{ 

tmp[23]=30; 

} 
if(buffer[50]==49 && buffer[51]==70)      //         1f 
{ 

tmp[23]=31; 

} 

 
//--------------- 


if(buffer[50]==50 && buffer[51]==48)      //         20 
{ 

tmp[23]=32; 

} 

if(buffer[50]==50 && buffer[51]==49)      //         21 
{ 

tmp[23]=33; 

} 
if(buffer[50]==50 && buffer[51]==50)      //         22 
{ 

tmp[23]=34; 

} 
if(buffer[50]==50 && buffer[51]==51)      //         23 
{ 

tmp[23]=35; 

} 
if(buffer[50]==50 && buffer[51]==52)      //         24 
{ 

tmp[23]=36; 

} 
if(buffer[50]==50 && buffer[51]==53)      //         25 
{ 

tmp[23]=37; 

} 
if(buffer[50]==50 && buffer[51]==54)      //         26 
{ 

tmp[23]=38; 

} 
if(buffer[50]==50 && buffer[51]==55)      //         27 
{ 

tmp[23]=39; 

} 
if(buffer[50]==50 && buffer[51]==56)      //         28 
{ 

tmp[23]=40; 

} 
if(buffer[50]==50 && buffer[51]==57)      //         29 
{ 

tmp[23]=41; 

} 
if(buffer[50]==50 && buffer[51]==65)      //         2a 
{ 

tmp[23]=42; 

} 
if(buffer[50]==50 && buffer[51]==66)      //         2b 
{ 

tmp[23]=43; 

} 
if(buffer[50]==50 && buffer[51]==67)      //         2c 
{ 

tmp[23]=44; 

} 

if(buffer[50]==50 && buffer[51]==68)      //       2d  
{ 

tmp[23]=45; 

} 
if(buffer[50]==50 && buffer[51]==69)      //         2e 
{ 

tmp[23]=46; 

} 
if(buffer[50]==50 && buffer[51]==70)      //         2f 
{ 

tmp[23]=47; 

} 

//------------- 
 

if(buffer[50]==51 && buffer[51]==48)      // 30        
{ 

tmp[23]=48; 

} 

if(buffer[50]==51 && buffer[51]==49)      // 31        
{ 

tmp[23]=49; 

} 
if(buffer[50]==51 && buffer[51]==50)      // 32        
{ 

tmp[23]=50; 

} 
if(buffer[50]==51 && buffer[51]==51)      //33         
{ 

tmp[23]=51; 

} 
if(buffer[50]==51 && buffer[51]==52)      //34        
{ 

tmp[23]=52; 

} 
if(buffer[50]==51 && buffer[51]==53)      //35      
{ 

tmp[23]=53; 

} 
if(buffer[50]==51 && buffer[51]==54)      //36       
{ 

tmp[23]=54; 

} 
if(buffer[50]==51 && buffer[51]==55)      //37     
{ 

tmp[23]=55; 

} 
if(buffer[50]==51 && buffer[51]==56)      //38     
{ 

tmp[23]=56; 

} 
if(buffer[50]==51 && buffer[51]==57)      //39   
{ 

tmp[23]=57; 

} 

if(buffer[50]==51 && buffer[51]==65)      //3a 
{ 

tmp[23]=58; 

} 

if(buffer[50]==51 && buffer[51]==66)      //3b 
{ 

tmp[23]=59; 

} 
if(buffer[50]==51 && buffer[51]==67)      //3c 
{ 

tmp[23]=60; 

} 
if(buffer[50]==51 && buffer[51]==68)      //3d 
{ 

tmp[23]=61; 

} 
if(buffer[50]==51 && buffer[51]==69)      //3e  
{ 

tmp[23]=62; 

} 
if(buffer[50]==51 && buffer[51]==70)      //3f  
{ 

tmp[23]=63; 

} 

//------------ 

 
if(buffer[50]==52 && buffer[51]==48)      // 40       
{ 

tmp[23]=64; 

} 

if(buffer[50]==52 && buffer[51]==49)      // 41        
{ 

tmp[23]=65; 

} 
if(buffer[50]==52 && buffer[51]==50)      // 42        
{ 

tmp[23]=66; 

} 
if(buffer[50]==52 && buffer[51]==51)      //43         
{ 

tmp[23]=67; 

} 
if(buffer[50]==52 && buffer[51]==52)      //44        
{ 

tmp[23]=68; 

} 
if(buffer[50]==52 && buffer[51]==53)      //45      
{ 

tmp[23]=69; 

} 

if(buffer[50]==52 && buffer[51]==54)      //46       
{ 

tmp[23]=70; 

} 
if(buffer[50]==52 && buffer[51]==55)      //47     
{ 

tmp[23]=71; 

} 
if(buffer[50]==52 && buffer[51]==56)      //48     
{ 

tmp[23]=72; 

} 
if(buffer[50]==52 && buffer[51]==57)      //49   
{ 

tmp[23]=73; 

} 

if(buffer[50]==52 && buffer[51]==65)      //4a 
{ 

tmp[23]=74; 

} 

if(buffer[50]==52 && buffer[51]==66)      //4b 
{ 

tmp[23]=75; 

} 
if(buffer[50]==52 && buffer[51]==67)      //4c 
{ 

tmp[23]=76; 

} 
if(buffer[50]==52 && buffer[51]==68)      //4d 
{ 

tmp[23]=77; 

} 
if(buffer[50]==52 && buffer[51]==69)      //4e  
{ 

tmp[23]=78; 

} 
if(buffer[50]==52 && buffer[51]==70)      //4f  
{ 

tmp[23]=79; 

} 
//------------ 


 

if(buffer[50]==53 && buffer[51]==48)      //50       
{ 

tmp[23]=80; 

} 

if(buffer[50]==53 && buffer[51]==49)      //51        
{ 

tmp[23]=81; 

} 
if(buffer[50]==53 && buffer[51]==50)      //52        
{ 

tmp[23]=82; 

} 
if(buffer[50]==53 && buffer[51]==51)      //53         
{ 

tmp[23]=83; 

} 
if(buffer[50]==53 && buffer[51]==52)      //54        
{ 

tmp[23]=84; 

} 
if(buffer[50]==53 && buffer[51]==53)      //55      
{ 

tmp[23]=85; 

} 
if(buffer[50]==53 && buffer[51]==54)      //56       
{ 

tmp[23]=86; 

} 
if(buffer[50]==53 && buffer[51]==55)      //57     
{ 

tmp[23]=87; 

} 
if(buffer[50]==53 && buffer[51]==56)      //58     
{ 

tmp[23]=88; 

} 
if(buffer[50]==53 && buffer[51]==57)      //59   
{ 

tmp[23]=89; 

} 

if(buffer[50]==53 && buffer[51]==65)      //5a 
{ 

tmp[23]=90; 

} 

if(buffer[50]==53 && buffer[51]==66)      //5b 
{ 

tmp[23]=91; 

} 
if(buffer[50]==53 && buffer[51]==67)      //5c 
{ 

tmp[23]=92; 

} 
if(buffer[50]==53 && buffer[51]==68)      //5d 
{ 

tmp[23]=93; 

} 
if(buffer[50]==53 && buffer[51]==69)      //5e  
{ 

tmp[23]=94; 

} 
if(buffer[50]==53 && buffer[51]==70)      //5f  
{ 

tmp[23]=95; 

} 
//------------ 


 

if(buffer[50]==54 && buffer[51]==48)      //60       
{ 

tmp[23]=96; 

} 

if(buffer[50]==54 && buffer[51]==49)      //61        
{ 

tmp[23]=97; 

} 
if(buffer[50]==54 && buffer[51]==50)      //62        
{ 

tmp[23]=98; 

} 
if(buffer[50]==54 && buffer[51]==51)      //63         
{ 

tmp[23]=99; 

} 
if(buffer[50]==54 && buffer[51]==52)      //64        
{ 

tmp[23]=100; 

} 
if(buffer[50]==54 && buffer[51]==53)      //65      
{ 

tmp[23]=101; 

} 
if(buffer[50]==54 && buffer[51]==54)      //66       
{ 

tmp[23]=102; 

} 
if(buffer[50]==54 && buffer[51]==55)      //67     
{ 

tmp[23]=103; 

} 
if(buffer[50]==54 && buffer[51]==56)      //68     
{ 

tmp[23]=104; 

} 
if(buffer[50]==54 && buffer[51]==57)      //69   
{ 

tmp[23]=105; 

} 

if(buffer[50]==54 && buffer[51]==65)      //6a 
{ 

tmp[23]=106; 

} 

if(buffer[50]==54 && buffer[51]==66)      //6b 
{ 

tmp[23]=107; 

} 
if(buffer[50]==54 && buffer[51]==67)      //6c 
{ 

tmp[23]=108; 

} 
if(buffer[50]==54 && buffer[51]==68)      //6d 
{ 

tmp[23]=109; 

} 
if(buffer[50]==54 && buffer[51]==69)      //6e  
{ 

tmp[23]=110; 

} 
if(buffer[50]==54 && buffer[51]==70)      //6f  
{ 

tmp[23]=111; 

} 
//------------ 


 

if(buffer[50]==55 && buffer[51]==48)      //70       
{ 

tmp[23]=112; 

} 

if(buffer[50]==55 && buffer[51]==49)      //71        
{ 

tmp[23]=113; 

} 
if(buffer[50]==55 && buffer[51]==50)      //72        
{ 

tmp[23]=114; 

} 
if(buffer[50]==55 && buffer[51]==51)      //73         
{ 

tmp[23]=115; 

} 
if(buffer[50]==55 && buffer[51]==52)      //74        
{ 

tmp[23]=116; 

} 
if(buffer[50]==55 && buffer[51]==53)      //75      
{ 

tmp[23]=117; 

} 
if(buffer[50]==55 && buffer[51]==54)      //76       
{ 

tmp[23]=118; 

} 
if(buffer[50]==55 && buffer[51]==55)      //77     
{ 

tmp[23]=119; 

} 
if(buffer[50]==55 && buffer[51]==56)      //78     
{ 

tmp[23]=120; 

} 
if(buffer[50]==55 && buffer[51]==57)      //79   
{ 

tmp[23]=121; 

} 

if(buffer[50]==55 && buffer[51]==65)      //7a 
{ 

tmp[23]=122; 

} 

if(buffer[50]==55 && buffer[51]==66)      //7b 
{ 

tmp[23]=123; 

} 
if(buffer[50]==55 && buffer[51]==67)      //7c 
{ 

tmp[23]=124; 

} 
if(buffer[50]==55 && buffer[51]==68)      //7d 
{ 

tmp[23]=125; 

} 
if(buffer[50]==55 && buffer[51]==69)      //7e  
{ 

tmp[23]=126; 

} 
if(buffer[50]==55 && buffer[51]==70)      //7f  
{ 

tmp[23]=127; 

} 

//------------ 

if(buffer[50]==56 && buffer[51]==48)      //80       
{ 

tmp[23]=128; 

} 

if(buffer[50]==56 && buffer[51]==49)      //81        
{ 

tmp[23]=129; 

} 
if(buffer[50]==56 && buffer[51]==50)      //82        
{ 

tmp[23]=130; 

} 
if(buffer[50]==56 && buffer[51]==51)      //83         
{ 

tmp[23]=131; 

} 
if(buffer[50]==56 && buffer[51]==52)      //84        
{ 

tmp[23]=132; 

} 
if(buffer[50]==56 && buffer[51]==53)      //85      
{ 

tmp[23]=133; 

} 
if(buffer[50]==56 && buffer[51]==54)      //86       
{ 

tmp[23]=134; 

} 
if(buffer[50]==56 && buffer[51]==55)      //87     
{ 

tmp[23]=135; 

} 
if(buffer[50]==56 && buffer[51]==56)      //88     
{ 

tmp[23]=136; 

} 
if(buffer[50]==56 && buffer[51]==57)      //89   
{ 

tmp[23]=137; 

} 

if(buffer[50]==56 && buffer[51]==65)      //8a 
{ 

tmp[23]=138; 

} 

if(buffer[50]==56 && buffer[51]==66)      //8b 
{ 

tmp[23]=139; 

} 
if(buffer[50]==56 && buffer[51]==67)      //8c 
{ 

tmp[23]=140; 

} 
if(buffer[50]==56 && buffer[51]==68)      //8d 
{ 

tmp[23]=141; 

} 
if(buffer[50]==56 && buffer[51]==69)      //8e  
{ 

tmp[23]=142; 

} 
if(buffer[50]==56 && buffer[51]==70)      //8f  
{ 

tmp[23]=143; 

} 
//------------ 


if(buffer[50]==57 && buffer[51]==48)      //90       
{ 
 
tmp[23]=144; 

} 

if(buffer[50]==57 && buffer[51]==49)      //91        
{ 

tmp[23]=145; 

} 
if(buffer[50]==57 && buffer[51]==50)      //92        
{ 

tmp[23]=146; 

} 
if(buffer[50]==57 && buffer[51]==51)      //93         
{ 

tmp[23]=147; 

} 
if(buffer[50]==57 && buffer[51]==52)      //94        
{ 

tmp[23]=148; 

} 
if(buffer[50]==57 && buffer[51]==53)      //95      
{ 

tmp[23]=149; 

} 
if(buffer[50]==57 && buffer[51]==54)      //96       
{ 

tmp[23]=150; 

} 
if(buffer[50]==57 && buffer[51]==55)      //97     
{ 

tmp[23]=151; 

} 
if(buffer[50]==57 && buffer[51]==56)      //98     
{ 

tmp[23]=152; 

} 
if(buffer[50]==57 && buffer[51]==57)      //99   
{ 

tmp[23]=153; 

} 

if(buffer[50]==57 && buffer[51]==65)      //9a 
{ 

tmp[23]=154; 

} 

if(buffer[50]==57 && buffer[51]==66)      //9b 
{ 

tmp[23]=155; 

} 
if(buffer[50]==57 && buffer[51]==67)      //9c 
{ 

tmp[23]=156; 

} 
if(buffer[50]==57 && buffer[51]==68)      //9d 
{ 

tmp[23]=157; 

} 
if(buffer[50]==57 && buffer[51]==69)      //9e  
{ 

tmp[23]=158; 

} 
if(buffer[50]==57 && buffer[51]==70)      //9f  
{ 

tmp[23]=159; 

} 
//------------ 


if(buffer[50]==65 && buffer[51]==48)      //a0       
{ 

tmp[23]=160; 
 
} 

if(buffer[50]==65 && buffer[51]==49)      //a1        
{ 

tmp[23]=161; 

} 
if(buffer[50]==65 && buffer[51]==50)      //a2        
{ 

tmp[23]=162; 

} 
if(buffer[50]==65 && buffer[51]==51)      //a3         
{ 

tmp[23]=163; 

} 
if(buffer[50]==65 && buffer[51]==52)      //a4        
{ 

tmp[23]=164; 

} 
if(buffer[50]==65 && buffer[51]==53)      //a5      
{ 

tmp[23]=165; 

} 
if(buffer[50]==65 && buffer[51]==54)      //a6       
{ 

tmp[23]=166; 

} 
if(buffer[50]==65 && buffer[51]==55)      //a7     
{ 

tmp[23]=167; 

} 
if(buffer[50]==65 && buffer[51]==56)      //a8     
{ 

tmp[23]=168; 

} 
if(buffer[50]==65 && buffer[51]==57)      //a9   
{ 

tmp[23]=169; 

} 

if(buffer[50]==65 && buffer[51]==65)      //aa 
{ 

tmp[23]=170; 

} 

if(buffer[50]==65 && buffer[51]==66)      //ab 
{ 

tmp[23]=171; 

} 
if(buffer[50]==65 && buffer[51]==67)      //ac 
{ 

tmp[23]=172; 

} 
if(buffer[50]==65 && buffer[51]==68)      //ad 
{ 

tmp[23]=173; 

} 
if(buffer[50]==65 && buffer[51]==69)      //ae  
{ 

tmp[23]=174; 

} 
if(buffer[50]==65 && buffer[51]==70)      //af  
{ 

tmp[23]=175; 

} 
//------------ 


if(buffer[50]==66 && buffer[51]==48)      //b0       
{ 

tmp[23]=176; 

} 
 
if(buffer[50]==66 && buffer[51]==49)      //b1        
{ 

tmp[23]=177; 

} 
if(buffer[50]==66 && buffer[51]==50)      //b2        
{ 

tmp[23]=178; 

} 
if(buffer[50]==66 && buffer[51]==51)      //b3         
{ 

tmp[23]=179; 

} 
if(buffer[50]==66 && buffer[51]==52)      //b4        
{ 

tmp[23]=180; 

} 
if(buffer[50]==66 && buffer[51]==53)      //b5      
{ 

tmp[23]=181; 

} 
if(buffer[50]==66 && buffer[51]==54)      //b6       
{ 

tmp[23]=182; 

} 
if(buffer[50]==66 && buffer[51]==55)      //b7     
{ 

tmp[23]=183; 

} 
if(buffer[50]==66 && buffer[51]==56)      //b8     
{ 

tmp[23]=184; 

} 
if(buffer[50]==66 && buffer[51]==57)      //b9   
{ 

tmp[23]=185; 

} 

if(buffer[50]==66 && buffer[51]==65)      //ba 
{ 

tmp[23]=186; 

} 

if(buffer[50]==66 && buffer[51]==66)      //bb 
{ 

tmp[23]=187; 

} 
if(buffer[50]==66 && buffer[51]==67)      //bc 
{ 

tmp[23]=188; 

} 
if(buffer[50]==66 && buffer[51]==68)      //bd 
{ 

tmp[23]=189; 

} 
if(buffer[50]==66 && buffer[51]==69)      //be  
{ 

tmp[23]=190; 

} 
if(buffer[50]==66 && buffer[51]==70)      //bf  
{ 

tmp[23]=191; 

} 
//------------ 



if(buffer[50]==67 && buffer[51]==48)      //c0       
{ 

tmp[23]=192; 

} 

if(buffer[50]==67 && buffer[51]==49)      //c1        
{ 

tmp[23]=193; 

} 
if(buffer[50]==67 && buffer[51]==50)      //c2        
{ 

tmp[23]=194; 

} 
if(buffer[50]==67 && buffer[51]==51)      //c3         
{ 

tmp[23]=195; 

} 
if(buffer[50]==67 && buffer[51]==52)      //c4        
{ 

tmp[23]=196; 

} 
if(buffer[50]==67 && buffer[51]==53)      //c5      
{ 

tmp[23]=197; 

} 
if(buffer[50]==67 && buffer[51]==54)      //c6       
{ 

tmp[23]=198; 

} 
if(buffer[50]==67 && buffer[51]==55)      //c7     
{ 

tmp[23]=199; 

} 
if(buffer[50]==67 && buffer[51]==56)      //c8     
{ 

tmp[23]=200; 

} 
if(buffer[50]==67 && buffer[51]==57)      //c9   
{ 

tmp[23]=201; 
 
} 

if(buffer[50]==67 && buffer[51]==65)      //ca 
{ 

tmp[23]=202; 

} 

if(buffer[50]==67 && buffer[51]==66)      //cb 
{ 

tmp[23]=203; 

} 
if(buffer[50]==67 && buffer[51]==67)      //cc 
{ 

tmp[23]=204; 

} 
if(buffer[50]==67 && buffer[51]==68)      //cd 
{ 

tmp[23]=205; 

} 
if(buffer[50]==67 && buffer[51]==69)      //ce  
{ 

tmp[23]=206; 

} 
if(buffer[50]==67 && buffer[51]==70)      //cf  
{ 

tmp[23]=207; 

} 
//------------ 


if(buffer[50]==68 && buffer[51]==48)      //d0       
{ 

tmp[23]=208; 

} 

if(buffer[50]==68 && buffer[51]==49)      //d1        
{ 
 
tmp[23]=209; 

} 
if(buffer[50]==68 && buffer[51]==50)      //d2        
{ 

tmp[23]=210; 

} 
if(buffer[50]==68 && buffer[51]==51)      //d3         
{ 

tmp[23]=211; 

} 
if(buffer[50]==68 && buffer[51]==52)      //d4        
{ 

tmp[23]=212; 

} 
if(buffer[50]==68 && buffer[51]==53)      //d5      
{ 

tmp[23]=213; 

} 
if(buffer[50]==68 && buffer[51]==54)      //d6       
{ 

tmp[23]=214; 

} 
if(buffer[50]==68 && buffer[51]==55)      //d7     
{ 

tmp[23]=215; 

} 
if(buffer[50]==68 && buffer[51]==56)      //d8     
{ 

tmp[23]=216; 

} 
if(buffer[50]==68 && buffer[51]==57)      //d9   
{ 

tmp[23]=217; 

} 
 
if(buffer[50]==68 && buffer[51]==65)      //da 
{ 

tmp[23]=218; 

} 

if(buffer[50]==68 && buffer[51]==66)      //db 
{ 

tmp[23]=219; 

} 
if(buffer[50]==68 && buffer[51]==67)      //dc 
{ 

tmp[23]=220; 

} 
if(buffer[50]==68 && buffer[51]==68)      //dd 
{ 

tmp[23]=221; 

} 
if(buffer[50]==68 && buffer[51]==69)      //de  
{ 

tmp[23]=222; 

} 
if(buffer[50]==68 && buffer[51]==70)      //df  
{ 

tmp[23]=223; 

} 
//------------ 



if(buffer[50]==69 && buffer[51]==48)      //e0       
{ 

tmp[23]=224; 

} 

if(buffer[50]==69 && buffer[51]==49)      //e1        
{ 

tmp[23]=225; 

} 
if(buffer[50]==69 && buffer[51]==50)      //e2        
{ 

tmp[23]=226; 

} 
if(buffer[50]==69 && buffer[51]==51)      //e3         
{ 

tmp[23]=227; 

} 
if(buffer[50]==69 && buffer[51]==52)      //e4        
{ 

tmp[23]=228; 

} 
if(buffer[50]==69 && buffer[51]==53)      //e5      
{ 

tmp[23]=229; 

} 
if(buffer[50]==69 && buffer[51]==54)      //e6       
{ 

tmp[23]=230; 

} 
if(buffer[50]==69 && buffer[51]==55)      //e7     
{ 

tmp[23]=231; 

} 
if(buffer[50]==69 && buffer[51]==56)      //e8     
{ 

tmp[23]=232; 

} 
if(buffer[50]==69 && buffer[51]==57)      //e9   
{ 

tmp[23]=233; 

} 

if(buffer[50]==69 && buffer[51]==65)      //ea 
{ 

tmp[23]=234; 

} 

if(buffer[50]==69 && buffer[51]==66)      //eb 
{ 

tmp[23]=235; 

} 
if(buffer[50]==69 && buffer[51]==67)      //ec 
{ 

tmp[23]=236; 

} 
if(buffer[50]==69 && buffer[51]==68)      //ed 
{ 

tmp[23]=237; 

} 
if(buffer[50]==69 && buffer[51]==69)      //ee  
{ 

tmp[23]=238; 

} 
if(buffer[50]==69 && buffer[51]==70)      //ef  
{ 

tmp[23]=239; 

} 
//------------ 

if(buffer[50]==70 && buffer[51]==48)      //f0       
{ 

tmp[23]=240; 

} 

if(buffer[50]==70 && buffer[51]==49)      //f1        
{ 

tmp[23]=241; 

} 
if(buffer[50]==70 && buffer[51]==50)      //f2        
{ 

tmp[23]=242; 

} 
if(buffer[50]==70 && buffer[51]==51)      //f3         
{ 

tmp[23]=243; 

} 
if(buffer[50]==70 && buffer[51]==52)      //f4        
{ 

tmp[23]=244; 

} 
if(buffer[50]==70 && buffer[51]==53)      //f5      
{ 

tmp[23]=245; 

} 
if(buffer[50]==70 && buffer[51]==54)      //f6       
{ 

tmp[23]=246; 

} 
if(buffer[50]==70 && buffer[51]==55)      //f7     
{ 

tmp[23]=247; 

} 
if(buffer[50]==70 && buffer[51]==56)      //f8     
{ 

tmp[23]=248; 

} 
if(buffer[50]==70 && buffer[51]==57)      //f9   
{ 

tmp[23]=249; 

} 

if(buffer[50]==70 && buffer[51]==65)      //fa 
{ 

tmp[23]=250; 

} 

if(buffer[50]==70 && buffer[51]==66)      //fb 
{ 

tmp[23]=251; 

} 
if(buffer[50]==70 && buffer[51]==67)      //fc 
{ 

tmp[23]=252; 

} 
if(buffer[50]==70 && buffer[51]==68)      //fd 
{ 

tmp[23]=253; 

} 
if(buffer[50]==70 && buffer[51]==69)      //fe  
{ 

tmp[23]=254; 

} 
if(buffer[50]==70 && buffer[51]==70)      //ff  
{ 

tmp[23]=255; 

} 

//----------------------- end of tmp[23]--------------------------- 

//----------------------- start of tmp[24]--------------------------- 


if(buffer[52]==48 && buffer[53]==48)      //00        
{ 

tmp[24]=0; 

} 

if(buffer[52]==48 && buffer[53]==49)      //01        
{ 

tmp[24]=1; 

} 
if(buffer[52]==48 && buffer[53]==50)      //02        
{ 

tmp[24]=2; 

} 
if(buffer[52]==48 && buffer[53]==51)      //03         
{ 

tmp[24]=3; 

} 
if(buffer[52]==48 && buffer[53]==52)      //04        
{ 

tmp[24]=4; 

} 
if(buffer[52]==48 && buffer[53]==53)      //05      
{ 

tmp[24]=5; 

} 


if(buffer[52]==48 && buffer[53]==54)      //06       
{ 

tmp[24]=6; 

} 
if(buffer[52]==48 && buffer[53]==55)      //07     
{ 

tmp[24]=7; 

} 
if(buffer[52]==48 && buffer[53]==56)      //08     
{ 

tmp[24]=8; 

} 
if(buffer[52]==48 && buffer[53]==57)      //09   
{ 

tmp[24]=9; 

} 

if(buffer[52]==48 && buffer[53]==65)      //0a 
{ 

tmp[24]=10; 

} 

if(buffer[52]==48 && buffer[53]==66)      //0b 
{ 

tmp[24]=11; 

} 
if(buffer[52]==48 && buffer[53]==67)      //0c 
{ 

tmp[24]=12; 

} 
if(buffer[52]==48 && buffer[53]==68)      //0d 
{ 

tmp[24]=13; 

} 
if(buffer[52]==48 && buffer[53]==69)      //0e  
{ 

tmp[24]=14; 

} 
if(buffer[52]==48 && buffer[53]==70)      //0f  
{ 

tmp[24]=15; 

} 

//----------- 

if(buffer[52]==49 && buffer[53]==48)      //        10 
{ 

tmp[24]=16; 

} 
if(buffer[52]==49 && buffer[53]==49)      //         11 
{ 

tmp[24]=17; 

} 
if(buffer[52]==49 && buffer[53]==50)      //         12 
{ 

tmp[24]=18; 

} 
if(buffer[52]==49 && buffer[53]==51)      //         13 
{ 

tmp[24]=19; 

} 
if(buffer[52]==49 && buffer[53]==52)      //         14 
{ 

tmp[24]=20; 

} 
if(buffer[52]==49 && buffer[53]==53)      //         15 
{ 

tmp[24]=21; 

} 
if(buffer[52]==49 && buffer[53]==54)      //         16 
{ 

tmp[24]=22; 

} 
if(buffer[52]==49 && buffer[53]==55)      //         17 
{ 

tmp[24]=23; 

} 
if(buffer[52]==49 && buffer[53]==56)      //         18 
{ 

tmp[24]=24; 

} 
if(buffer[52]==49 && buffer[53]==57)      //         19 
{ 

tmp[24]=25; 

} 

if(buffer[52]==49 && buffer[53]==65)      //         1a 
{ 

tmp[24]=26; 

} 
if(buffer[52]==49 && buffer[53]==66)      //         1b 
{ 

tmp[24]=27; 

} 
if(buffer[52]==49 && buffer[53]==67)      //         1c 
{ 

tmp[24]=28; 

} 
if(buffer[52]==49 && buffer[53]==68)      //         1d 
{ 

tmp[24]=29; 

} 
if(buffer[52]==49 && buffer[53]==69)      //         1e 
{ 

tmp[24]=30; 

} 
if(buffer[52]==49 && buffer[53]==70)      //         1f 
{ 

tmp[24]=31; 

} 


//--------------- 


if(buffer[52]==50 && buffer[53]==48)      //         20 
{ 

tmp[24]=32; 

} 

if(buffer[52]==50 && buffer[53]==49)      //         21 
{ 

tmp[24]=33; 

} 
if(buffer[52]==50 && buffer[53]==50)      //         22 
{ 

tmp[24]=34; 

} 
if(buffer[52]==50 && buffer[53]==51)      //         23 
{ 

tmp[24]=35; 

} 
if(buffer[52]==50 && buffer[53]==52)      //         24 
{ 

tmp[24]=36; 

} 
if(buffer[52]==50 && buffer[53]==53)      //         25 
{ 

tmp[24]=37; 

} 
if(buffer[52]==50 && buffer[53]==54)      //         26 
{ 

tmp[24]=38; 

} 
if(buffer[52]==50 && buffer[53]==55)      //         27 
{ 

tmp[24]=39; 

} 
if(buffer[52]==50 && buffer[53]==56)      //         28 
{ 

tmp[24]=40; 

} 
if(buffer[52]==50 && buffer[53]==57)      //         29 
{ 

tmp[24]=41; 

} 
if(buffer[52]==50 && buffer[53]==65)      //         2a 
{ 

tmp[24]=42; 

} 
if(buffer[52]==50 && buffer[53]==66)      //         2b 
{ 

tmp[24]=43; 

} 
if(buffer[52]==50 && buffer[53]==67)      //         2c 
{ 

tmp[24]=44; 

} 

if(buffer[52]==50 && buffer[53]==68)      //       2d  
{ 

tmp[24]=45; 

} 
if(buffer[52]==50 && buffer[53]==69)      //         2e 
{ 

tmp[24]=46; 

} 
if(buffer[52]==50 && buffer[53]==70)      //         2f 
{ 

tmp[24]=47; 

} 

//------------- 


if(buffer[52]==51 && buffer[53]==48)      // 30        
{ 

tmp[24]=48; 

} 

if(buffer[52]==51 && buffer[53]==49)      // 31        
{ 

tmp[24]=49; 

} 
if(buffer[52]==51 && buffer[53]==50)      // 32        
{ 

tmp[24]=50; 

} 
if(buffer[52]==51 && buffer[53]==51)      //33         
{ 

tmp[24]=51; 

} 
if(buffer[52]==51 && buffer[53]==52)      //34        
{ 

tmp[24]=52; 

} 
if(buffer[52]==51 && buffer[53]==53)      //35      
{ 

tmp[24]=53; 

} 
if(buffer[52]==51 && buffer[53]==54)      //36       
{ 

tmp[24]=54; 

} 
if(buffer[52]==51 && buffer[53]==55)      //37     
{ 

tmp[24]=55; 

} 
if(buffer[52]==51 && buffer[53]==56)      //38     
{ 

tmp[24]=56; 

} 
if(buffer[52]==51 && buffer[53]==57)      //39   
{ 

tmp[24]=57; 

} 

if(buffer[52]==51 && buffer[53]==65)      //3a 
{ 

tmp[24]=58; 

} 
 
if(buffer[52]==51 && buffer[53]==66)      //3b 
{ 

tmp[24]=59; 

} 
if(buffer[52]==51 && buffer[53]==67)      //3c 
{ 

tmp[24]=60; 

} 
if(buffer[52]==51 && buffer[53]==68)      //3d 
{ 

tmp[24]=61; 

} 
if(buffer[52]==51 && buffer[53]==69)      //3e  
{ 

tmp[24]=62; 

} 
if(buffer[52]==51 && buffer[53]==70)      //3f  
{ 

tmp[24]=63; 

} 

//------------ 


if(buffer[52]==52 && buffer[53]==48)      // 40       
{ 

tmp[24]=64; 

} 

if(buffer[52]==52 && buffer[53]==49)      // 41        
{ 

tmp[24]=65; 

} 
if(buffer[52]==52 && buffer[53]==50)      // 42        
{ 

tmp[24]=66; 
 
} 
if(buffer[52]==52 && buffer[53]==51)      //43         
{ 

tmp[24]=67; 

} 
if(buffer[52]==52 && buffer[53]==52)      //44        
{ 

tmp[24]=68; 

} 
if(buffer[52]==52 && buffer[53]==53)      //45      
{ 

tmp[24]=69; 

} 

if(buffer[52]==52 && buffer[53]==54)      //46       
{ 

tmp[24]=70; 

} 
if(buffer[52]==52 && buffer[53]==55)      //47     
{ 

tmp[24]=71; 

} 
if(buffer[52]==52 && buffer[53]==56)      //48     
{ 

tmp[24]=72; 

} 
if(buffer[52]==52 && buffer[53]==57)      //49   
{ 

tmp[24]=73; 

} 

if(buffer[52]==52 && buffer[53]==65)      //4a 
{ 

tmp[24]=74; 

} 
 
if(buffer[52]==52 && buffer[53]==66)      //4b 
{ 

tmp[24]=75; 

} 
if(buffer[52]==52 && buffer[53]==67)      //4c 
{ 

tmp[24]=76; 

} 
if(buffer[52]==52 && buffer[53]==68)      //4d 
{ 

tmp[24]=77; 

} 
if(buffer[52]==52 && buffer[53]==69)      //4e  
{ 

tmp[24]=78; 

} 
if(buffer[52]==52 && buffer[53]==70)      //4f  
{ 

tmp[24]=79; 

} 
//------------ 




if(buffer[52]==53 && buffer[53]==48)      //50       
{ 

tmp[24]=80; 

} 

if(buffer[52]==53 && buffer[53]==49)      //51        
{ 

tmp[24]=81; 

} 
if(buffer[52]==53 && buffer[53]==50)      //52        
{ 

tmp[24]=82; 

} 
if(buffer[52]==53 && buffer[53]==51)      //53         
{ 

tmp[24]=83; 

} 
if(buffer[52]==53 && buffer[53]==52)      //54        
{ 

tmp[24]=84; 

} 
if(buffer[52]==53 && buffer[53]==53)      //55      
{ 

tmp[24]=85; 

} 
if(buffer[52]==53 && buffer[53]==54)      //56       
{ 

tmp[24]=86; 

} 
if(buffer[52]==53 && buffer[53]==55)      //57     
{ 

tmp[24]=87; 

} 
if(buffer[52]==53 && buffer[53]==56)      //58     
{ 

tmp[24]=88; 

} 
if(buffer[52]==53 && buffer[53]==57)      //59   
{ 

tmp[24]=89; 

} 

if(buffer[52]==53 && buffer[53]==65)      //5a 
{ 

tmp[24]=90; 

} 
 
if(buffer[52]==53 && buffer[53]==66)      //5b 
{ 

tmp[24]=91; 

} 
if(buffer[52]==53 && buffer[53]==67)      //5c 
{ 

tmp[24]=92; 

} 
if(buffer[52]==53 && buffer[53]==68)      //5d 
{ 

tmp[24]=93; 

} 
if(buffer[52]==53 && buffer[53]==69)      //5e  
{ 

tmp[24]=94; 

} 
if(buffer[52]==53 && buffer[53]==70)      //5f  
{ 

tmp[24]=95; 

} 
//------------ 




if(buffer[52]==54 && buffer[53]==48)      //60       
{ 

tmp[24]=96; 

} 

if(buffer[52]==54 && buffer[53]==49)      //61        
{ 

tmp[24]=97; 

} 
if(buffer[52]==54 && buffer[53]==50)      //62        
{ 

tmp[24]=98; 

} 
if(buffer[52]==54 && buffer[53]==51)      //63         
{ 

tmp[24]=99; 

} 
if(buffer[52]==54 && buffer[53]==52)      //64        
{ 

tmp[24]=100; 

} 
if(buffer[52]==54 && buffer[53]==53)      //65      
{ 

tmp[24]=101; 

} 
if(buffer[52]==54 && buffer[53]==54)      //66       
{ 

tmp[24]=102; 

} 
if(buffer[52]==54 && buffer[53]==55)      //67     
{ 

tmp[24]=103; 

} 
if(buffer[52]==54 && buffer[53]==56)      //68     
{ 

tmp[24]=104; 

} 
if(buffer[52]==54 && buffer[53]==57)      //69   
{ 

tmp[24]=105; 

} 

if(buffer[52]==54 && buffer[53]==65)      //6a 
{ 

tmp[24]=106; 

} 
 
if(buffer[52]==54 && buffer[53]==66)      //6b 
{ 

tmp[24]=107; 

} 
if(buffer[52]==54 && buffer[53]==67)      //6c 
{ 

tmp[24]=108; 

} 
if(buffer[52]==54 && buffer[53]==68)      //6d 
{ 

tmp[24]=109; 

} 
if(buffer[52]==54 && buffer[53]==69)      //6e  
{ 

tmp[24]=110; 

} 
if(buffer[52]==54 && buffer[53]==70)      //6f  
{ 

tmp[24]=111; 

} 
//------------ 




if(buffer[52]==55 && buffer[53]==48)      //70       
{ 

tmp[24]=112; 

} 

if(buffer[52]==55 && buffer[53]==49)      //71        
{ 

tmp[24]=113; 

} 
if(buffer[52]==55 && buffer[53]==50)      //72        
{ 

tmp[24]=114; 

} 
if(buffer[52]==55 && buffer[53]==51)      //73         
{ 

tmp[24]=115; 

} 
if(buffer[52]==55 && buffer[53]==52)      //74        
{ 

tmp[24]=116; 

} 
if(buffer[52]==55 && buffer[53]==53)      //75      
{ 

tmp[24]=117; 

} 
if(buffer[52]==55 && buffer[53]==54)      //76       
{ 

tmp[24]=118; 

} 
if(buffer[52]==55 && buffer[53]==55)      //77     
{ 

tmp[24]=119; 

} 
if(buffer[52]==55 && buffer[53]==56)      //78     
{ 

tmp[24]=120; 

} 
if(buffer[52]==55 && buffer[53]==57)      //79   
{ 

tmp[24]=121; 

} 

if(buffer[52]==55 && buffer[53]==65)      //7a 
{ 

tmp[24]=122; 

} 
 
if(buffer[52]==55 && buffer[53]==66)      //7b 
{ 

tmp[24]=123; 

} 
if(buffer[52]==55 && buffer[53]==67)      //7c 
{ 

tmp[24]=124; 

} 
if(buffer[52]==55 && buffer[53]==68)      //7d 
{ 

tmp[24]=125; 

} 
if(buffer[52]==55 && buffer[53]==69)      //7e  
{ 

tmp[24]=126; 

} 
if(buffer[52]==55 && buffer[53]==70)      //7f  
{ 

tmp[24]=127; 

} 

//------------ 

if(buffer[52]==56 && buffer[53]==48)      //80       
{ 

tmp[24]=128; 

} 

if(buffer[52]==56 && buffer[53]==49)      //81        
{ 

tmp[24]=129; 

} 
if(buffer[52]==56 && buffer[53]==50)      //82        
{ 

tmp[24]=130; 

} 
if(buffer[52]==56 && buffer[53]==51)      //83         
{ 

tmp[24]=131; 

} 
if(buffer[52]==56 && buffer[53]==52)      //84        
{ 

tmp[24]=132; 

} 
if(buffer[52]==56 && buffer[53]==53)      //85      
{ 

tmp[24]=133; 

} 
if(buffer[52]==56 && buffer[53]==54)      //86       
{ 

tmp[24]=134; 

} 
if(buffer[52]==56 && buffer[53]==55)      //87     
{ 

tmp[24]=135; 

} 
if(buffer[52]==56 && buffer[53]==56)      //88     
{ 

tmp[24]=136; 

} 
if(buffer[52]==56 && buffer[53]==57)      //89   
{ 

tmp[24]=137; 

} 

if(buffer[52]==56 && buffer[53]==65)      //8a 
{ 

tmp[24]=138; 

} 

if(buffer[52]==56 && buffer[53]==66)      //8b 
{ 

tmp[24]=139; 

} 
if(buffer[52]==56 && buffer[53]==67)      //8c 
{ 

tmp[24]=140; 

} 
if(buffer[52]==56 && buffer[53]==68)      //8d 
{ 

tmp[24]=141; 

} 
if(buffer[52]==56 && buffer[53]==69)      //8e  
{ 

tmp[24]=142; 

} 
if(buffer[52]==56 && buffer[53]==70)      //8f  
{ 

tmp[24]=143; 

} 
//------------ 


if(buffer[52]==57 && buffer[53]==48)      //90       
{ 

tmp[24]=144; 

} 

if(buffer[52]==57 && buffer[53]==49)      //91        
{ 

tmp[24]=145; 

} 
if(buffer[52]==57 && buffer[53]==50)      //92        
{ 

tmp[24]=146; 

} 
if(buffer[52]==57 && buffer[53]==51)      //93         
{ 

tmp[24]=147; 

} 
if(buffer[52]==57 && buffer[53]==52)      //94        
{ 

tmp[24]=148; 

} 
if(buffer[52]==57 && buffer[53]==53)      //95      
{ 

tmp[24]=149; 

} 
if(buffer[52]==57 && buffer[53]==54)      //96       
{ 

tmp[24]=150; 

} 
if(buffer[52]==57 && buffer[53]==55)      //97     
{ 

tmp[24]=151; 

} 
if(buffer[52]==57 && buffer[53]==56)      //98     
{ 

tmp[24]=152; 

} 
if(buffer[52]==57 && buffer[53]==57)      //99   
{ 

tmp[24]=153; 

} 

if(buffer[52]==57 && buffer[53]==65)      //9a 
{ 

tmp[24]=154; 

} 

if(buffer[52]==57 && buffer[53]==66)      //9b 
{ 

tmp[24]=155; 

} 
if(buffer[52]==57 && buffer[53]==67)      //9c 
{ 

tmp[24]=156; 

} 
if(buffer[52]==57 && buffer[53]==68)      //9d 
{ 

tmp[24]=157; 

} 
if(buffer[52]==57 && buffer[53]==69)      //9e  
{ 

tmp[24]=158; 

} 
if(buffer[52]==57 && buffer[53]==70)      //9f  
{ 

tmp[24]=159; 

} 
//------------ 


if(buffer[52]==65 && buffer[53]==48)      //a0       
{ 

tmp[24]=160; 

} 

if(buffer[52]==65 && buffer[53]==49)      //a1        
{ 

tmp[24]=161; 

} 
if(buffer[52]==65 && buffer[53]==50)      //a2        
{ 

tmp[24]=162; 

} 
if(buffer[52]==65 && buffer[53]==51)      //a3         
{ 

tmp[24]=163; 

} 
if(buffer[52]==65 && buffer[53]==52)      //a4        
{ 

tmp[24]=164; 

} 
if(buffer[52]==65 && buffer[53]==53)      //a5      
{ 

tmp[24]=165; 

} 
if(buffer[52]==65 && buffer[53]==54)      //a6       
{ 

tmp[24]=166; 

} 
if(buffer[52]==65 && buffer[53]==55)      //a7     
{ 

tmp[24]=167; 

} 
if(buffer[52]==65 && buffer[53]==56)      //a8     
{ 

tmp[24]=168; 

} 
if(buffer[52]==65 && buffer[53]==57)      //a9   
{ 

tmp[24]=169; 

} 

if(buffer[52]==65 && buffer[53]==65)      //aa 
{ 

tmp[24]=170; 

} 

if(buffer[52]==65 && buffer[53]==66)      //ab 
{ 

tmp[24]=171; 

} 
if(buffer[52]==65 && buffer[53]==67)      //ac 
{ 

tmp[24]=172; 

} 
if(buffer[52]==65 && buffer[53]==68)      //ad 
{ 

tmp[24]=173; 

} 
if(buffer[52]==65 && buffer[53]==69)      //ae  
{ 

tmp[24]=174; 

} 
if(buffer[52]==65 && buffer[53]==70)      //af  
{ 

tmp[24]=175; 

} 
//------------ 


if(buffer[52]==66 && buffer[53]==48)      //b0       
{ 

tmp[24]=176; 

} 

if(buffer[52]==66 && buffer[53]==49)      //b1        
{ 

tmp[24]=177; 

} 
if(buffer[52]==66 && buffer[53]==50)      //b2        
{ 

tmp[24]=178; 

} 
if(buffer[52]==66 && buffer[53]==51)      //b3         
{ 

tmp[24]=179; 

} 
if(buffer[52]==66 && buffer[53]==52)      //b4        
{ 

tmp[24]=180; 

} 
if(buffer[52]==66 && buffer[53]==53)      //b5      
{ 

tmp[24]=181; 

} 
if(buffer[52]==66 && buffer[53]==54)      //b6       
{ 

tmp[24]=182; 

} 
if(buffer[52]==66 && buffer[53]==55)      //b7     
{ 

tmp[24]=183; 

} 
if(buffer[52]==66 && buffer[53]==56)      //b8     
{ 

tmp[24]=184; 

} 
if(buffer[52]==66 && buffer[53]==57)      //b9   
{ 

tmp[24]=185; 

} 

if(buffer[52]==66 && buffer[53]==65)      //ba 
{ 

tmp[24]=186; 

} 

if(buffer[52]==66 && buffer[53]==66)      //bb 
{ 

tmp[24]=187; 

} 
if(buffer[52]==66 && buffer[53]==67)      //bc 
{ 

tmp[24]=188; 

} 
if(buffer[52]==66 && buffer[53]==68)      //bd 
{ 

tmp[24]=189; 

} 
if(buffer[52]==66 && buffer[53]==69)      //be  
{ 

tmp[24]=190; 

} 
if(buffer[52]==66 && buffer[53]==70)      //bf  
{ 

tmp[24]=191; 

} 
//------------ 



if(buffer[52]==67 && buffer[53]==48)      //c0       
{ 

tmp[24]=192; 

} 

if(buffer[52]==67 && buffer[53]==49)      //c1        
{ 

tmp[24]=193; 

} 
if(buffer[52]==67 && buffer[53]==50)      //c2        
{ 

tmp[24]=194; 

} 
if(buffer[52]==67 && buffer[53]==51)      //c3         
{ 

tmp[24]=195; 

} 
if(buffer[52]==67 && buffer[53]==52)      //c4        
{ 

tmp[24]=196; 

} 
if(buffer[52]==67 && buffer[53]==53)      //c5      
{ 

tmp[24]=197; 

} 
if(buffer[52]==67 && buffer[53]==54)      //c6       
{ 

tmp[24]=198; 

} 
if(buffer[52]==67 && buffer[53]==55)      //c7     
{ 

tmp[24]=199; 

} 
if(buffer[52]==67 && buffer[53]==56)      //c8     
{ 

tmp[24]=200; 

} 
if(buffer[52]==67 && buffer[53]==57)      //c9   
{ 

tmp[24]=201; 

} 

if(buffer[52]==67 && buffer[53]==65)      //ca 
{ 

tmp[24]=202; 

} 

if(buffer[52]==67 && buffer[53]==66)      //cb 
{ 

tmp[24]=203; 

} 
if(buffer[52]==67 && buffer[53]==67)      //cc 
{ 
 
tmp[24]=204; 

} 
if(buffer[52]==67 && buffer[53]==68)      //cd 
{ 

tmp[24]=205; 

} 
if(buffer[52]==67 && buffer[53]==69)      //ce  
{ 

tmp[24]=206; 

} 
if(buffer[52]==67 && buffer[53]==70)      //cf  
{ 

tmp[24]=207; 

} 
//------------ 


if(buffer[52]==68 && buffer[53]==48)      //d0       
{ 

tmp[24]=208; 

} 

if(buffer[52]==68 && buffer[53]==49)      //d1        
{ 

tmp[24]=209; 

} 
if(buffer[52]==68 && buffer[53]==50)      //d2        
{ 

tmp[24]=210; 

} 
if(buffer[52]==68 && buffer[53]==51)      //d3         
{ 

tmp[24]=211; 

} 
if(buffer[52]==68 && buffer[53]==52)      //d4        
{ 
 
tmp[24]=212; 

} 
if(buffer[52]==68 && buffer[53]==53)      //d5      
{ 

tmp[24]=213; 

} 
if(buffer[52]==68 && buffer[53]==54)      //d6       
{ 

tmp[24]=214; 

} 
if(buffer[52]==68 && buffer[53]==55)      //d7     
{ 

tmp[24]=215; 

} 
if(buffer[52]==68 && buffer[53]==56)      //d8     
{ 

tmp[24]=216; 

} 
if(buffer[52]==68 && buffer[53]==57)      //d9   
{ 

tmp[24]=217; 

} 

if(buffer[52]==68 && buffer[53]==65)      //da 
{ 

tmp[24]=218; 

} 

if(buffer[52]==68 && buffer[53]==66)      //db 
{ 

tmp[24]=219; 

} 
if(buffer[52]==68 && buffer[53]==67)      //dc 
{ 

tmp[24]=220; 
 
} 
if(buffer[52]==68 && buffer[53]==68)      //dd 
{ 

tmp[24]=221; 

} 
if(buffer[52]==68 && buffer[53]==69)      //de  
{ 

tmp[24]=222; 

} 
if(buffer[52]==68 && buffer[53]==70)      //df  
{ 

tmp[24]=223; 

} 
//------------ 



if(buffer[52]==69 && buffer[53]==48)      //e0       
{ 

tmp[24]=224; 

} 

if(buffer[52]==69 && buffer[53]==49)      //e1        
{ 

tmp[24]=225; 

} 
if(buffer[52]==69 && buffer[53]==50)      //e2        
{ 

tmp[24]=226; 

} 
if(buffer[52]==69 && buffer[53]==51)      //e3         
{ 

tmp[24]=227; 

} 
if(buffer[52]==69 && buffer[53]==52)      //e4        
{ 

tmp[24]=228; 

} 
if(buffer[52]==69 && buffer[53]==53)      //e5      
{ 

tmp[24]=229; 

} 
if(buffer[52]==69 && buffer[53]==54)      //e6       
{ 

tmp[24]=230; 

} 
if(buffer[52]==69 && buffer[53]==55)      //e7     
{ 

tmp[24]=231; 

} 
if(buffer[52]==69 && buffer[53]==56)      //e8     
{ 

tmp[24]=232; 

} 
if(buffer[52]==69 && buffer[53]==57)      //e9   
{ 

tmp[24]=233; 

} 

if(buffer[52]==69 && buffer[53]==65)      //ea 
{ 

tmp[24]=234; 

} 

if(buffer[52]==69 && buffer[53]==66)      //eb 
{ 

tmp[24]=235; 

} 
if(buffer[52]==69 && buffer[53]==67)      //ec 
{ 

tmp[24]=236; 

} 
if(buffer[52]==69 && buffer[53]==68)      //ed 
{ 

tmp[24]=237; 

} 
if(buffer[52]==69 && buffer[53]==69)      //ee  
{ 

tmp[24]=238; 

} 
if(buffer[52]==69 && buffer[53]==70)      //ef  
{ 

tmp[24]=239; 

} 
//------------ 

if(buffer[52]==70 && buffer[53]==48)      //f0       
{ 

tmp[24]=240; 

} 

if(buffer[52]==70 && buffer[53]==49)      //f1        
{ 

tmp[24]=241; 

} 
if(buffer[52]==70 && buffer[53]==50)      //f2        
{ 

tmp[24]=242; 

} 
if(buffer[52]==70 && buffer[53]==51)      //f3         
{ 

tmp[24]=243; 

} 
if(buffer[52]==70 && buffer[53]==52)      //f4        
{ 

tmp[24]=244; 

} 
if(buffer[52]==70 && buffer[53]==53)      //f5      
{ 

tmp[24]=245; 

} 
if(buffer[52]==70 && buffer[53]==54)      //f6       
{ 

tmp[24]=246; 

} 
if(buffer[52]==70 && buffer[53]==55)      //f7     
{ 

tmp[24]=247; 

} 
if(buffer[52]==70 && buffer[53]==56)      //f8     
{ 

tmp[24]=248; 

} 
if(buffer[52]==70 && buffer[53]==57)      //f9   
{ 

tmp[24]=249; 

} 

if(buffer[52]==70 && buffer[53]==65)      //fa 
{ 

tmp[24]=250; 

} 

if(buffer[52]==70 && buffer[53]==66)      //fb 
{ 

tmp[24]=251; 

} 
if(buffer[52]==70 && buffer[53]==67)      //fc 
{ 

tmp[24]=252; 

} 
if(buffer[52]==70 && buffer[53]==68)      //fd 
{ 
 
tmp[24]=253; 

} 
if(buffer[52]==70 && buffer[53]==69)      //fe  
{ 

tmp[24]=254; 

} 
if(buffer[52]==70 && buffer[53]==70)      //ff  
{ 

tmp[24]=255; 

} 

//----------------------- end of tmp[24]--------------------------- 

//----------------------- start of tmp[25]--------------------------- 


if(buffer[54]==48 && buffer[55]==48)      //00        
{ 

tmp[25]=0; 

} 

if(buffer[54]==48 && buffer[55]==49)      //01        
{ 

tmp[25]=1; 

} 
if(buffer[54]==48 && buffer[55]==50)      //02        
{ 

tmp[25]=2; 

} 
if(buffer[54]==48 && buffer[55]==51)      //03         
{ 

tmp[25]=3; 

} 
if(buffer[54]==48 && buffer[55]==52)      //04        
{ 

tmp[25]=4; 

} 
if(buffer[54]==48 && buffer[55]==53)      //05      
{ 

tmp[25]=5; 

} 


if(buffer[54]==48 && buffer[55]==54)      //06       
{ 

tmp[25]=6; 

} 
if(buffer[54]==48 && buffer[55]==55)      //07     
{ 

tmp[25]=7; 

} 
if(buffer[54]==48 && buffer[55]==56)      //08     
{ 

tmp[25]=8; 

} 
if(buffer[54]==48 && buffer[55]==57)      //09   
{ 

tmp[25]=9; 

} 

if(buffer[54]==48 && buffer[55]==65)      //0a 
{ 

tmp[25]=10; 

} 

if(buffer[54]==48 && buffer[55]==66)      //0b 
{ 

tmp[25]=11; 

} 
if(buffer[54]==48 && buffer[55]==67)      //0c 
{ 

tmp[25]=12; 

} 
if(buffer[54]==48 && buffer[55]==68)      //0d 
{ 

tmp[25]=13; 

} 
if(buffer[54]==48 && buffer[55]==69)      //0e  
{ 

tmp[25]=14; 

} 
if(buffer[54]==48 && buffer[55]==70)      //0f  
{ 

tmp[25]=15; 

} 

//----------- 

if(buffer[54]==49 && buffer[55]==48)      //        10 
{ 

tmp[25]=16; 

} 
if(buffer[54]==49 && buffer[55]==49)      //         11 
{ 

tmp[25]=17; 

} 
if(buffer[54]==49 && buffer[55]==50)      //         12 
{ 

tmp[25]=18; 

} 
if(buffer[54]==49 && buffer[55]==51)      //         13 
{ 

tmp[25]=19; 

} 
if(buffer[54]==49 && buffer[55]==52)      //         14 
{ 

tmp[25]=20; 

} 
if(buffer[54]==49 && buffer[55]==53)      //         15 
{ 

tmp[25]=21; 

} 
if(buffer[54]==49 && buffer[55]==54)      //         16 
{ 

tmp[25]=22; 

} 
if(buffer[54]==49 && buffer[55]==55)      //         17 
{ 

tmp[25]=23; 

} 
if(buffer[54]==49 && buffer[55]==56)      //         18 
{ 

tmp[25]=24; 

} 
if(buffer[54]==49 && buffer[55]==57)      //         19 
{ 

tmp[25]=25; 

} 

if(buffer[54]==49 && buffer[55]==65)      //         1a 
{ 

tmp[25]=26; 

} 
if(buffer[54]==49 && buffer[55]==66)      //         1b 
{ 

tmp[25]=27; 

} 
if(buffer[54]==49 && buffer[55]==67)      //         1c 
{ 

tmp[25]=28; 

} 
if(buffer[54]==49 && buffer[55]==68)      //         1d 
{ 

tmp[25]=29; 

} 
if(buffer[54]==49 && buffer[55]==69)      //         1e 
{ 

tmp[25]=30; 

} 
if(buffer[54]==49 && buffer[55]==70)      //         1f 
{ 

tmp[25]=31; 

} 


//--------------- 


if(buffer[54]==50 && buffer[55]==48)      //         20 
{ 

tmp[25]=32; 

} 

if(buffer[54]==50 && buffer[55]==49)      //         21 
{ 

tmp[25]=33; 

} 
if(buffer[54]==50 && buffer[55]==50)      //         22 
{ 

tmp[25]=34; 

} 
if(buffer[54]==50 && buffer[55]==51)      //         23 
{ 

tmp[25]=35; 

} 
if(buffer[54]==50 && buffer[55]==52)      //         24 
{ 

tmp[25]=36; 

} 
if(buffer[54]==50 && buffer[55]==53)      //         25 
{ 

tmp[25]=37; 

} 
if(buffer[54]==50 && buffer[55]==54)      //         26 
{ 

tmp[25]=38; 

} 
if(buffer[54]==50 && buffer[55]==55)      //         27 
{ 

tmp[25]=39; 

} 
if(buffer[54]==50 && buffer[55]==56)      //         28 
{ 

tmp[25]=40; 

} 
if(buffer[54]==50 && buffer[55]==57)      //         29 
{ 

tmp[25]=41; 

} 
if(buffer[54]==50 && buffer[55]==65)      //         2a 
{ 

tmp[25]=42; 

} 
if(buffer[54]==50 && buffer[55]==66)      //         2b 
{ 

tmp[25]=43; 

} 
if(buffer[54]==50 && buffer[55]==67)      //         2c 
{ 

tmp[25]=44; 

} 

if(buffer[54]==50 && buffer[55]==68)      //       2d  
{ 

tmp[25]=45; 
 
} 
if(buffer[54]==50 && buffer[55]==69)      //         2e 
{ 

tmp[25]=46; 

} 
if(buffer[54]==50 && buffer[55]==70)      //         2f 
{ 

tmp[25]=47; 

} 

//------------- 


if(buffer[54]==51 && buffer[55]==48)      // 30        
{ 

tmp[25]=48; 

} 

if(buffer[54]==51 && buffer[55]==49)      // 31        
{ 

tmp[25]=49; 

} 
if(buffer[54]==51 && buffer[55]==50)      // 32        
{ 

tmp[25]=50; 

} 
if(buffer[54]==51 && buffer[55]==51)      //33         
{ 

tmp[25]=51; 

} 
if(buffer[54]==51 && buffer[55]==52)      //34        
{ 

tmp[25]=52; 

} 
if(buffer[54]==51 && buffer[55]==53)      //35      
{ 

tmp[25]=53; 

} 
if(buffer[54]==51 && buffer[55]==54)      //36       
{ 

tmp[25]=54; 

} 
if(buffer[54]==51 && buffer[55]==55)      //37     
{ 

tmp[25]=55; 

} 
if(buffer[54]==51 && buffer[55]==56)      //38     
{ 

tmp[25]=56; 

} 
if(buffer[54]==51 && buffer[55]==57)      //39   
{ 

tmp[25]=57; 

} 

if(buffer[54]==51 && buffer[55]==65)      //3a 
{ 

tmp[25]=58; 

} 

if(buffer[54]==51 && buffer[55]==66)      //3b 
{ 

tmp[25]=59; 

} 
if(buffer[54]==51 && buffer[55]==67)      //3c 
{ 

tmp[25]=60; 

} 
if(buffer[54]==51 && buffer[55]==68)      //3d 
{ 

tmp[25]=61; 

} 
if(buffer[54]==51 && buffer[55]==69)      //3e  
{ 

tmp[25]=62; 

} 
if(buffer[54]==51 && buffer[55]==70)      //3f  
{ 

tmp[25]=63; 

} 

//------------ 


if(buffer[54]==52 && buffer[55]==48)      // 40       
{ 

tmp[25]=64; 

} 

if(buffer[54]==52 && buffer[55]==49)      // 41        
{ 

tmp[25]=65; 

} 
if(buffer[54]==52 && buffer[55]==50)      // 42        
{ 

tmp[25]=66; 

} 
if(buffer[54]==52 && buffer[55]==51)      //43         
{ 

tmp[25]=67; 

} 
if(buffer[54]==52 && buffer[55]==52)      //44        
{ 

tmp[25]=68; 

} 
if(buffer[54]==52 && buffer[55]==53)      //45      
{ 

tmp[25]=69; 
 
} 

if(buffer[54]==52 && buffer[55]==54)      //46       
{ 

tmp[25]=70; 

} 
if(buffer[54]==52 && buffer[55]==55)      //47     
{ 

tmp[25]=71; 

} 
if(buffer[54]==52 && buffer[55]==56)      //48     
{ 

tmp[25]=72; 

} 
if(buffer[54]==52 && buffer[55]==57)      //49   
{ 

tmp[25]=73; 

} 

if(buffer[54]==52 && buffer[55]==65)      //4a 
{ 

tmp[25]=74; 

} 

if(buffer[54]==52 && buffer[55]==66)      //4b 
{ 

tmp[25]=75; 

} 
if(buffer[54]==52 && buffer[55]==67)      //4c 
{ 

tmp[25]=76; 

} 
if(buffer[54]==52 && buffer[55]==68)      //4d 
{ 

tmp[25]=77; 

} 
if(buffer[54]==52 && buffer[55]==69)      //4e  
{ 

tmp[25]=78; 

} 
if(buffer[54]==52 && buffer[55]==70)      //4f  
{ 

tmp[25]=79; 

} 
//------------ 




if(buffer[54]==53 && buffer[55]==48)      //50       
{ 

tmp[25]=80; 

} 

if(buffer[54]==53 && buffer[55]==49)      //51        
{ 

tmp[25]=81; 

} 
if(buffer[54]==53 && buffer[55]==50)      //52        
{ 

tmp[25]=82; 

} 
if(buffer[54]==53 && buffer[55]==51)      //53         
{ 

tmp[25]=83; 

} 
if(buffer[54]==53 && buffer[55]==52)      //54        
{ 

tmp[25]=84; 

} 
if(buffer[54]==53 && buffer[55]==53)      //55      
{ 

tmp[25]=85; 

} 
if(buffer[54]==53 && buffer[55]==54)      //56       
{ 

tmp[25]=86; 

} 
if(buffer[54]==53 && buffer[55]==55)      //57     
{ 

tmp[25]=87; 

} 
if(buffer[54]==53 && buffer[55]==56)      //58     
{ 

tmp[25]=88; 

} 
if(buffer[54]==53 && buffer[55]==57)      //59   
{ 

tmp[25]=89; 

} 

if(buffer[54]==53 && buffer[55]==65)      //5a 
{ 

tmp[25]=90; 

} 

if(buffer[54]==53 && buffer[55]==66)      //5b 
{ 

tmp[25]=91; 

} 
if(buffer[54]==53 && buffer[55]==67)      //5c 
{ 

tmp[25]=92; 

} 
if(buffer[54]==53 && buffer[55]==68)      //5d 
{ 

tmp[25]=93; 

} 
if(buffer[54]==53 && buffer[55]==69)      //5e  
{ 

tmp[25]=94; 

} 
if(buffer[54]==53 && buffer[55]==70)      //5f  
{ 

tmp[25]=95; 

} 
//------------ 




if(buffer[54]==54 && buffer[55]==48)      //60       
{ 

tmp[25]=96; 

} 

if(buffer[54]==54 && buffer[55]==49)      //61        
{ 

tmp[25]=97; 

} 
if(buffer[54]==54 && buffer[55]==50)      //62        
{ 

tmp[25]=98; 

} 
if(buffer[54]==54 && buffer[55]==51)      //63         
{ 

tmp[25]=99; 

} 
if(buffer[54]==54 && buffer[55]==52)      //64        
{ 

tmp[25]=100; 

} 
if(buffer[54]==54 && buffer[55]==53)      //65      
{ 

tmp[25]=101; 

} 
if(buffer[54]==54 && buffer[55]==54)      //66       
{ 

tmp[25]=102; 

} 
if(buffer[54]==54 && buffer[55]==55)      //67     
{ 

tmp[25]=103; 

} 
if(buffer[54]==54 && buffer[55]==56)      //68     
{ 

tmp[25]=104; 

} 
if(buffer[54]==54 && buffer[55]==57)      //69   
{ 

tmp[25]=105; 

} 

if(buffer[54]==54 && buffer[55]==65)      //6a 
{ 

tmp[25]=106; 

} 

if(buffer[54]==54 && buffer[55]==66)      //6b 
{ 

tmp[25]=107; 

} 
if(buffer[54]==54 && buffer[55]==67)      //6c 
{ 

tmp[25]=108; 

} 
if(buffer[54]==54 && buffer[55]==68)      //6d 
{ 

tmp[25]=109; 

} 
if(buffer[54]==54 && buffer[55]==69)      //6e  
{ 

tmp[25]=110; 

} 
if(buffer[54]==54 && buffer[55]==70)      //6f  
{ 

tmp[25]=111; 

} 
//------------ 




if(buffer[54]==55 && buffer[55]==48)      //70       
{ 

tmp[25]=112; 

} 

if(buffer[54]==55 && buffer[55]==49)      //71        
{ 

tmp[25]=113; 

} 
if(buffer[54]==55 && buffer[55]==50)      //72        
{ 

tmp[25]=114; 

} 
if(buffer[54]==55 && buffer[55]==51)      //73         
{ 

tmp[25]=115; 

} 
if(buffer[54]==55 && buffer[55]==52)      //74        
{ 

tmp[25]=116; 

} 
if(buffer[54]==55 && buffer[55]==53)      //75      
{ 

tmp[25]=117; 

} 
if(buffer[54]==55 && buffer[55]==54)      //76       
{ 

tmp[25]=118; 

} 
if(buffer[54]==55 && buffer[55]==55)      //77     
{ 

tmp[25]=119; 

} 
if(buffer[54]==55 && buffer[55]==56)      //78     
{ 

tmp[25]=120; 

} 
if(buffer[54]==55 && buffer[55]==57)      //79   
{ 

tmp[25]=121; 

} 

if(buffer[54]==55 && buffer[55]==65)      //7a 
{ 

tmp[25]=122; 

} 

if(buffer[54]==55 && buffer[55]==66)      //7b 
{ 

tmp[25]=123; 

} 
if(buffer[54]==55 && buffer[55]==67)      //7c 
{ 

tmp[25]=124; 

} 
if(buffer[54]==55 && buffer[55]==68)      //7d 
{ 

tmp[25]=125; 

} 
if(buffer[54]==55 && buffer[55]==69)      //7e  
{ 

tmp[25]=126; 

} 
if(buffer[54]==55 && buffer[55]==70)      //7f  
{ 

tmp[25]=127; 

} 

//------------ 

if(buffer[54]==56 && buffer[55]==48)      //80       
{ 

tmp[25]=128; 

} 

if(buffer[54]==56 && buffer[55]==49)      //81        
{ 

tmp[25]=129; 

} 
if(buffer[54]==56 && buffer[55]==50)      //82        
{ 

tmp[25]=130; 

} 
if(buffer[54]==56 && buffer[55]==51)      //83         
{ 

tmp[25]=131; 

} 
if(buffer[54]==56 && buffer[55]==52)      //84        
{ 

tmp[25]=132; 

} 
if(buffer[54]==56 && buffer[55]==53)      //85      
{ 

tmp[25]=133; 

} 
if(buffer[54]==56 && buffer[55]==54)      //86       
{ 

tmp[25]=134; 

} 
if(buffer[54]==56 && buffer[55]==55)      //87     
{ 

tmp[25]=135; 

} 
if(buffer[54]==56 && buffer[55]==56)      //88     
{ 

tmp[25]=136; 

} 
if(buffer[54]==56 && buffer[55]==57)      //89   
{ 

tmp[25]=137; 

} 

if(buffer[54]==56 && buffer[55]==65)      //8a 
{ 

tmp[25]=138; 

} 

if(buffer[54]==56 && buffer[55]==66)      //8b 
{ 

tmp[25]=139; 

} 
if(buffer[54]==56 && buffer[55]==67)      //8c 
{ 

tmp[25]=140; 

} 
if(buffer[54]==56 && buffer[55]==68)      //8d 
{ 

tmp[25]=141; 

} 
if(buffer[54]==56 && buffer[55]==69)      //8e  
{ 

tmp[25]=142; 

} 
if(buffer[54]==56 && buffer[55]==70)      //8f  
{ 

tmp[25]=143; 

} 
//------------ 


if(buffer[54]==57 && buffer[55]==48)      //90       
{ 

tmp[25]=144; 

} 

if(buffer[54]==57 && buffer[55]==49)      //91        
{ 

tmp[25]=145; 

} 
if(buffer[54]==57 && buffer[55]==50)      //92        
{ 

tmp[25]=146; 

} 
if(buffer[54]==57 && buffer[55]==51)      //93         
{ 

tmp[25]=147; 

} 
if(buffer[54]==57 && buffer[55]==52)      //94        
{ 

tmp[25]=148; 

} 
if(buffer[54]==57 && buffer[55]==53)      //95      
{ 

tmp[25]=149; 

} 
if(buffer[54]==57 && buffer[55]==54)      //96       
{ 

tmp[25]=150; 

} 
if(buffer[54]==57 && buffer[55]==55)      //97     
{ 

tmp[25]=151; 

} 
if(buffer[54]==57 && buffer[55]==56)      //98     
{ 

tmp[25]=152; 

} 
if(buffer[54]==57 && buffer[55]==57)      //99   
{ 

tmp[25]=153; 

} 

if(buffer[54]==57 && buffer[55]==65)      //9a 
{ 

tmp[25]=154; 

} 

if(buffer[54]==57 && buffer[55]==66)      //9b 
{ 

tmp[25]=155; 

} 
if(buffer[54]==57 && buffer[55]==67)      //9c 
{ 

tmp[25]=156; 

} 
if(buffer[54]==57 && buffer[55]==68)      //9d 
{ 

tmp[25]=157; 

} 
if(buffer[54]==57 && buffer[55]==69)      //9e  
{ 

tmp[25]=158; 

} 
if(buffer[54]==57 && buffer[55]==70)      //9f  
{ 

tmp[25]=159; 

} 
//------------ 


if(buffer[54]==65 && buffer[55]==48)      //a0       
{ 

tmp[25]=160; 

} 

if(buffer[54]==65 && buffer[55]==49)      //a1        
{ 

tmp[25]=161; 

} 
if(buffer[54]==65 && buffer[55]==50)      //a2        
{ 

tmp[25]=162; 

} 
if(buffer[54]==65 && buffer[55]==51)      //a3         
{ 

tmp[25]=163; 

} 
if(buffer[54]==65 && buffer[55]==52)      //a4        
{ 

tmp[25]=164; 

} 
if(buffer[54]==65 && buffer[55]==53)      //a5      
{ 

tmp[25]=165; 

} 
if(buffer[54]==65 && buffer[55]==54)      //a6       
{ 

tmp[25]=166; 

} 
if(buffer[54]==65 && buffer[55]==55)      //a7     
{ 

tmp[25]=167; 

} 
if(buffer[54]==65 && buffer[55]==56)      //a8     
{ 

tmp[25]=168; 

} 
if(buffer[54]==65 && buffer[55]==57)      //a9   
{ 

tmp[25]=169; 

} 

if(buffer[54]==65 && buffer[55]==65)      //aa 
{ 

tmp[25]=170; 

} 

if(buffer[54]==65 && buffer[55]==66)      //ab 
{ 

tmp[25]=171; 

} 
if(buffer[54]==65 && buffer[55]==67)      //ac 
{ 

tmp[25]=172; 

} 
if(buffer[54]==65 && buffer[55]==68)      //ad 
{ 

tmp[25]=173; 

} 
if(buffer[54]==65 && buffer[55]==69)      //ae  
{ 

tmp[25]=174; 

} 
if(buffer[54]==65 && buffer[55]==70)      //af  
{ 

tmp[25]=175; 

} 
//------------ 


if(buffer[54]==66 && buffer[55]==48)      //b0       
{ 

tmp[25]=176; 

} 

if(buffer[54]==66 && buffer[55]==49)      //b1        
{ 

tmp[25]=177; 

} 
if(buffer[54]==66 && buffer[55]==50)      //b2        
{ 

tmp[25]=178; 

} 
if(buffer[54]==66 && buffer[55]==51)      //b3         
{ 

tmp[25]=179; 

} 
if(buffer[54]==66 && buffer[55]==52)      //b4        
{ 

tmp[25]=180; 

} 
if(buffer[54]==66 && buffer[55]==53)      //b5      
{ 

tmp[25]=181; 

} 
if(buffer[54]==66 && buffer[55]==54)      //b6       
{ 

tmp[25]=182; 

} 
if(buffer[54]==66 && buffer[55]==55)      //b7     
{ 

tmp[25]=183; 

} 
if(buffer[54]==66 && buffer[55]==56)      //b8     
{ 

tmp[25]=184; 

} 
if(buffer[54]==66 && buffer[55]==57)      //b9   
{ 

tmp[25]=185; 

} 

if(buffer[54]==66 && buffer[55]==65)      //ba 
{ 

tmp[25]=186; 

} 

if(buffer[54]==66 && buffer[55]==66)      //bb 
{ 

tmp[25]=187; 

} 
if(buffer[54]==66 && buffer[55]==67)      //bc 
{ 

tmp[25]=188; 

} 
if(buffer[54]==66 && buffer[55]==68)      //bd 
{ 

tmp[25]=189; 

} 
if(buffer[54]==66 && buffer[55]==69)      //be  
{ 

tmp[25]=190; 

} 
if(buffer[54]==66 && buffer[55]==70)      //bf  
{ 

tmp[25]=191; 

} 
//------------ 



if(buffer[54]==67 && buffer[55]==48)      //c0       
{ 

tmp[25]=192; 

} 

if(buffer[54]==67 && buffer[55]==49)      //c1        
{ 

tmp[25]=193; 

} 
if(buffer[54]==67 && buffer[55]==50)      //c2        
{ 

tmp[25]=194; 

} 
if(buffer[54]==67 && buffer[55]==51)      //c3         
{ 

tmp[25]=195; 

} 
if(buffer[54]==67 && buffer[55]==52)      //c4        
{ 

tmp[25]=196; 

} 
if(buffer[54]==67 && buffer[55]==53)      //c5      
{ 

tmp[25]=197; 

} 
if(buffer[54]==67 && buffer[55]==54)      //c6       
{ 

tmp[25]=198; 

} 
if(buffer[54]==67 && buffer[55]==55)      //c7     
{ 

tmp[25]=199; 

} 
if(buffer[54]==67 && buffer[55]==56)      //c8     
{ 

tmp[25]=200; 

} 
if(buffer[54]==67 && buffer[55]==57)      //c9   
{ 

tmp[25]=201; 

} 

if(buffer[54]==67 && buffer[55]==65)      //ca 
{ 

tmp[25]=202; 

} 

if(buffer[54]==67 && buffer[55]==66)      //cb 
{ 

tmp[25]=203; 

} 
if(buffer[54]==67 && buffer[55]==67)      //cc 
{ 

tmp[25]=204; 

} 
if(buffer[54]==67 && buffer[55]==68)      //cd 
{ 

tmp[25]=205; 

} 
if(buffer[54]==67 && buffer[55]==69)      //ce  
{ 

tmp[25]=206; 

} 
if(buffer[54]==67 && buffer[55]==70)      //cf  
{ 
 
tmp[25]=207; 

} 
//------------ 


if(buffer[54]==68 && buffer[55]==48)      //d0       
{ 

tmp[25]=208; 

} 

if(buffer[54]==68 && buffer[55]==49)      //d1        
{ 

tmp[25]=209; 

} 
if(buffer[54]==68 && buffer[55]==50)      //d2        
{ 

tmp[25]=210; 

} 
if(buffer[54]==68 && buffer[55]==51)      //d3         
{ 

tmp[25]=211; 

} 
if(buffer[54]==68 && buffer[55]==52)      //d4        
{ 

tmp[25]=212; 

} 
if(buffer[54]==68 && buffer[55]==53)      //d5      
{ 

tmp[25]=213; 

} 
if(buffer[54]==68 && buffer[55]==54)      //d6       
{ 

tmp[25]=214; 

} 
if(buffer[54]==68 && buffer[55]==55)      //d7     
{ 
 
tmp[25]=215; 

} 
if(buffer[54]==68 && buffer[55]==56)      //d8     
{ 

tmp[25]=216; 

} 
if(buffer[54]==68 && buffer[55]==57)      //d9   
{ 

tmp[25]=217; 

} 

if(buffer[54]==68 && buffer[55]==65)      //da 
{ 

tmp[25]=218; 

} 

if(buffer[54]==68 && buffer[55]==66)      //db 
{ 

tmp[25]=219; 

} 
if(buffer[54]==68 && buffer[55]==67)      //dc 
{ 

tmp[25]=220; 

} 
if(buffer[54]==68 && buffer[55]==68)      //dd 
{ 

tmp[25]=221; 

} 
if(buffer[54]==68 && buffer[55]==69)      //de  
{ 

tmp[25]=222; 

} 
if(buffer[54]==68 && buffer[55]==70)      //df  
{ 

tmp[25]=223; 
 
} 
//------------ 



if(buffer[54]==69 && buffer[55]==48)      //e0       
{ 

tmp[25]=224; 

} 

if(buffer[54]==69 && buffer[55]==49)      //e1        
{ 

tmp[25]=225; 

} 
if(buffer[54]==69 && buffer[55]==50)      //e2        
{ 

tmp[25]=226; 

} 
if(buffer[54]==69 && buffer[55]==51)      //e3         
{ 

tmp[25]=227; 

} 
if(buffer[54]==69 && buffer[55]==52)      //e4        
{ 

tmp[25]=228; 

} 
if(buffer[54]==69 && buffer[55]==53)      //e5      
{ 

tmp[25]=229; 

} 
if(buffer[54]==69 && buffer[55]==54)      //e6       
{ 

tmp[25]=230; 

} 
if(buffer[54]==69 && buffer[55]==55)      //e7     
{ 

tmp[25]=231; 

} 
if(buffer[54]==69 && buffer[55]==56)      //e8     
{ 

tmp[25]=232; 

} 
if(buffer[54]==69 && buffer[55]==57)      //e9   
{ 

tmp[25]=233; 

} 

if(buffer[54]==69 && buffer[55]==65)      //ea 
{ 

tmp[25]=234; 

} 

if(buffer[54]==69 && buffer[55]==66)      //eb 
{ 

tmp[25]=235; 

} 
if(buffer[54]==69 && buffer[55]==67)      //ec 
{ 

tmp[25]=236; 

} 
if(buffer[54]==69 && buffer[55]==68)      //ed 
{ 

tmp[25]=237; 

} 
if(buffer[54]==69 && buffer[55]==69)      //ee  
{ 

tmp[25]=238; 

} 
if(buffer[54]==69 && buffer[55]==70)      //ef  
{ 

tmp[25]=239; 

} 
//------------ 

if(buffer[54]==70 && buffer[55]==48)      //f0       
{ 

tmp[25]=240; 

} 

if(buffer[54]==70 && buffer[55]==49)      //f1        
{ 

tmp[25]=241; 

} 
if(buffer[54]==70 && buffer[55]==50)      //f2        
{ 

tmp[25]=242; 

} 
if(buffer[54]==70 && buffer[55]==51)      //f3         
{ 

tmp[25]=243; 

} 
if(buffer[54]==70 && buffer[55]==52)      //f4        
{ 

tmp[25]=244; 

} 
if(buffer[54]==70 && buffer[55]==53)      //f5      
{ 

tmp[25]=245; 

} 
if(buffer[54]==70 && buffer[55]==54)      //f6       
{ 

tmp[25]=246; 

} 
if(buffer[54]==70 && buffer[55]==55)      //f7     
{ 

tmp[25]=247; 

} 
if(buffer[54]==70 && buffer[55]==56)      //f8     
{ 

tmp[25]=248; 

} 
if(buffer[54]==70 && buffer[55]==57)      //f9   
{ 

tmp[25]=249; 

} 

if(buffer[54]==70 && buffer[55]==65)      //fa 
{ 

tmp[25]=250; 

} 

if(buffer[54]==70 && buffer[55]==66)      //fb 
{ 

tmp[25]=251; 

} 
if(buffer[54]==70 && buffer[55]==67)      //fc 
{ 

tmp[25]=252; 

} 
if(buffer[54]==70 && buffer[55]==68)      //fd 
{ 

tmp[25]=253; 

} 
if(buffer[54]==70 && buffer[55]==69)      //fe  
{ 

tmp[25]=254; 

} 
if(buffer[54]==70 && buffer[55]==70)      //ff  
{ 

tmp[25]=255; 

} 

//----------------------- end of tmp[25]--------------------------- 
 
//----------------------- start of tmp[26]--------------------------- 


if(buffer[56]==48 && buffer[57]==48)      //00        
{ 

tmp[26]=0; 

} 

if(buffer[56]==48 && buffer[57]==49)      //01        
{ 

tmp[26]=1; 

} 
if(buffer[56]==48 && buffer[57]==50)      //02        
{ 

tmp[26]=2; 

} 
if(buffer[56]==48 && buffer[57]==51)      //03         
{ 

tmp[26]=3; 

} 
if(buffer[56]==48 && buffer[57]==52)      //04        
{ 

tmp[26]=4; 

} 
if(buffer[56]==48 && buffer[57]==53)      //05      
{ 

tmp[26]=5; 

} 


if(buffer[56]==48 && buffer[57]==54)      //06       
{ 

tmp[26]=6; 

} 
if(buffer[56]==48 && buffer[57]==55)      //07     
{ 

tmp[26]=7; 

} 
if(buffer[56]==48 && buffer[57]==56)      //08     
{ 

tmp[26]=8; 

} 
if(buffer[56]==48 && buffer[57]==57)      //09   
{ 

tmp[26]=9; 

} 

if(buffer[56]==48 && buffer[57]==65)      //0a 
{ 

tmp[26]=10; 

} 

if(buffer[56]==48 && buffer[57]==66)      //0b 
{ 

tmp[26]=11; 

} 
if(buffer[56]==48 && buffer[57]==67)      //0c 
{ 

tmp[26]=12; 

} 
if(buffer[56]==48 && buffer[57]==68)      //0d 
{ 

tmp[26]=13; 

} 
if(buffer[56]==48 && buffer[57]==69)      //0e  
{ 

tmp[26]=14; 

} 
if(buffer[56]==48 && buffer[57]==70)      //0f  
{ 

tmp[26]=15; 

} 

//----------- 

if(buffer[56]==49 && buffer[57]==48)      //        10 
{ 

tmp[26]=16; 

} 
if(buffer[56]==49 && buffer[57]==49)      //         11 
{ 

tmp[26]=17; 

} 
if(buffer[56]==49 && buffer[57]==50)      //         12 
{ 

tmp[26]=18; 

} 
if(buffer[56]==49 && buffer[57]==51)      //         13 
{ 

tmp[26]=19; 

} 
if(buffer[56]==49 && buffer[57]==52)      //         14 
{ 

tmp[26]=20; 

} 
if(buffer[56]==49 && buffer[57]==53)      //         15 
{ 

tmp[26]=21; 

} 
if(buffer[56]==49 && buffer[57]==54)      //         16 
{ 

tmp[26]=22; 

} 
if(buffer[56]==49 && buffer[57]==55)      //         17 
{ 

tmp[26]=23; 

} 
if(buffer[56]==49 && buffer[57]==56)      //         18 
{ 

tmp[26]=24; 

} 
if(buffer[56]==49 && buffer[57]==57)      //         19 
{ 

tmp[26]=25; 

} 

if(buffer[56]==49 && buffer[57]==65)      //         1a 
{ 

tmp[26]=26; 

} 
if(buffer[56]==49 && buffer[57]==66)      //         1b 
{ 

tmp[26]=27; 

} 
if(buffer[56]==49 && buffer[57]==67)      //         1c 
{ 

tmp[26]=28; 

} 
if(buffer[56]==49 && buffer[57]==68)      //         1d 
{ 

tmp[26]=29; 

} 
if(buffer[56]==49 && buffer[57]==69)      //         1e 
{ 

tmp[26]=30; 

} 
if(buffer[56]==49 && buffer[57]==70)      //         1f 
{ 

tmp[26]=31; 

} 


//--------------- 
 

if(buffer[56]==50 && buffer[57]==48)      //         20 
{ 

tmp[26]=32; 

} 

if(buffer[56]==50 && buffer[57]==49)      //         21 
{ 

tmp[26]=33; 

} 
if(buffer[56]==50 && buffer[57]==50)      //         22 
{ 

tmp[26]=34; 

} 
if(buffer[56]==50 && buffer[57]==51)      //         23 
{ 

tmp[26]=35; 

} 
if(buffer[56]==50 && buffer[57]==52)      //         24 
{ 

tmp[26]=36; 

} 
if(buffer[56]==50 && buffer[57]==53)      //         25 
{ 

tmp[26]=37; 

} 
if(buffer[56]==50 && buffer[57]==54)      //         26 
{ 

tmp[26]=38; 

} 
if(buffer[56]==50 && buffer[57]==55)      //         27 
{ 

tmp[26]=39; 

} 
if(buffer[56]==50 && buffer[57]==56)      //         28 
{ 

tmp[26]=40; 

} 
if(buffer[56]==50 && buffer[57]==57)      //         29 
{ 

tmp[26]=41; 

} 
if(buffer[56]==50 && buffer[57]==65)      //         2a 
{ 

tmp[26]=42; 

} 
if(buffer[56]==50 && buffer[57]==66)      //         2b 
{ 

tmp[26]=43; 

} 
if(buffer[56]==50 && buffer[57]==67)      //         2c 
{ 

tmp[26]=44; 

} 

if(buffer[56]==50 && buffer[57]==68)      //       2d  
{ 

tmp[26]=45; 

} 
if(buffer[56]==50 && buffer[57]==69)      //         2e 
{ 

tmp[26]=46; 

} 
if(buffer[56]==50 && buffer[57]==70)      //         2f 
{ 

tmp[26]=47; 

} 

//------------- 


if(buffer[56]==51 && buffer[57]==48)      // 30        
{ 

tmp[26]=48; 

} 

if(buffer[56]==51 && buffer[57]==49)      // 31        
{ 

tmp[26]=49; 

} 
if(buffer[56]==51 && buffer[57]==50)      // 32        
{ 

tmp[26]=50; 

} 
if(buffer[56]==51 && buffer[57]==51)      //33         
{ 

tmp[26]=51; 

} 
if(buffer[56]==51 && buffer[57]==52)      //34        
{ 

tmp[26]=52; 

} 
if(buffer[56]==51 && buffer[57]==53)      //35      
{ 

tmp[26]=53; 

} 
if(buffer[56]==51 && buffer[57]==54)      //36       
{ 

tmp[26]=54; 

} 
if(buffer[56]==51 && buffer[57]==55)      //37     
{ 

tmp[26]=55; 

} 
if(buffer[56]==51 && buffer[57]==56)      //38     
{ 

tmp[26]=56; 

} 
if(buffer[56]==51 && buffer[57]==57)      //39   
{ 

tmp[26]=57; 

} 

if(buffer[56]==51 && buffer[57]==65)      //3a 
{ 

tmp[26]=58; 

} 

if(buffer[56]==51 && buffer[57]==66)      //3b 
{ 

tmp[26]=59; 

} 
if(buffer[56]==51 && buffer[57]==67)      //3c 
{ 

tmp[26]=60; 

} 
if(buffer[56]==51 && buffer[57]==68)      //3d 
{ 

tmp[26]=61; 

} 
if(buffer[56]==51 && buffer[57]==69)      //3e  
{ 

tmp[26]=62; 

} 
if(buffer[56]==51 && buffer[57]==70)      //3f  
{ 

tmp[26]=63; 

} 

//------------ 


if(buffer[56]==52 && buffer[57]==48)      // 40       
{ 

tmp[26]=64; 

} 

if(buffer[56]==52 && buffer[57]==49)      // 41        
{ 

tmp[26]=65; 

} 
if(buffer[56]==52 && buffer[57]==50)      // 42        
{ 

tmp[26]=66; 

} 
if(buffer[56]==52 && buffer[57]==51)      //43         
{ 

tmp[26]=67; 

} 
if(buffer[56]==52 && buffer[57]==52)      //44        
{ 

tmp[26]=68; 

} 
if(buffer[56]==52 && buffer[57]==53)      //45      
{ 

tmp[26]=69; 

} 

if(buffer[56]==52 && buffer[57]==54)      //46       
{ 

tmp[26]=70; 

} 
if(buffer[56]==52 && buffer[57]==55)      //47     
{ 

tmp[26]=71; 

} 
if(buffer[56]==52 && buffer[57]==56)      //48     
{ 

tmp[26]=72; 

} 
if(buffer[56]==52 && buffer[57]==57)      //49   
{ 

tmp[26]=73; 

} 

if(buffer[56]==52 && buffer[57]==65)      //4a 
{ 

tmp[26]=74; 

} 

if(buffer[56]==52 && buffer[57]==66)      //4b 
{ 

tmp[26]=75; 

} 
if(buffer[56]==52 && buffer[57]==67)      //4c 
{ 

tmp[26]=76; 

} 
if(buffer[56]==52 && buffer[57]==68)      //4d 
{ 

tmp[26]=77; 

} 
if(buffer[56]==52 && buffer[57]==69)      //4e  
{ 

tmp[26]=78; 

} 
if(buffer[56]==52 && buffer[57]==70)      //4f  
{ 

tmp[26]=79; 

} 
//------------ 




if(buffer[56]==53 && buffer[57]==48)      //50       
{ 

tmp[26]=80; 

} 

if(buffer[56]==53 && buffer[57]==49)      //51        
{ 

tmp[26]=81; 

} 
if(buffer[56]==53 && buffer[57]==50)      //52        
{ 

tmp[26]=82; 

} 
if(buffer[56]==53 && buffer[57]==51)      //53         
{ 

tmp[26]=83; 

} 
if(buffer[56]==53 && buffer[57]==52)      //54        
{ 

tmp[26]=84; 

} 
if(buffer[56]==53 && buffer[57]==53)      //55      
{ 

tmp[26]=85; 

} 
if(buffer[56]==53 && buffer[57]==54)      //56       
{ 

tmp[26]=86; 

} 
if(buffer[56]==53 && buffer[57]==55)      //57     
{ 

tmp[26]=87; 

} 
if(buffer[56]==53 && buffer[57]==56)      //58     
{ 

tmp[26]=88; 

} 
if(buffer[56]==53 && buffer[57]==57)      //59   
{ 

tmp[26]=89; 

} 

if(buffer[56]==53 && buffer[57]==65)      //5a 
{ 

tmp[26]=90; 

} 

if(buffer[56]==53 && buffer[57]==66)      //5b 
{ 

tmp[26]=91; 

} 
if(buffer[56]==53 && buffer[57]==67)      //5c 
{ 

tmp[26]=92; 

} 
if(buffer[56]==53 && buffer[57]==68)      //5d 
{ 

tmp[26]=93; 

} 
if(buffer[56]==53 && buffer[57]==69)      //5e  
{ 

tmp[26]=94; 

} 
if(buffer[56]==53 && buffer[57]==70)      //5f  
{ 

tmp[26]=95; 

} 
//------------ 




if(buffer[56]==54 && buffer[57]==48)      //60       
{ 

tmp[26]=96; 

} 

if(buffer[56]==54 && buffer[57]==49)      //61        
{ 

tmp[26]=97; 

} 
if(buffer[56]==54 && buffer[57]==50)      //62        
{ 

tmp[26]=98; 

} 
if(buffer[56]==54 && buffer[57]==51)      //63         
{ 

tmp[26]=99; 

} 
if(buffer[56]==54 && buffer[57]==52)      //64        
{ 

tmp[26]=100; 

} 
if(buffer[56]==54 && buffer[57]==53)      //65      
{ 

tmp[26]=101; 

} 
if(buffer[56]==54 && buffer[57]==54)      //66       
{ 

tmp[26]=102; 

} 
if(buffer[56]==54 && buffer[57]==55)      //67     
{ 

tmp[26]=103; 

} 
if(buffer[56]==54 && buffer[57]==56)      //68     
{ 

tmp[26]=104; 

} 
if(buffer[56]==54 && buffer[57]==57)      //69   
{ 

tmp[26]=105; 

} 

if(buffer[56]==54 && buffer[57]==65)      //6a 
{ 

tmp[26]=106; 

} 

if(buffer[56]==54 && buffer[57]==66)      //6b 
{ 

tmp[26]=107; 

} 
if(buffer[56]==54 && buffer[57]==67)      //6c 
{ 

tmp[26]=108; 

} 
if(buffer[56]==54 && buffer[57]==68)      //6d 
{ 

tmp[26]=109; 

} 
if(buffer[56]==54 && buffer[57]==69)      //6e  
{ 

tmp[26]=110; 

} 
if(buffer[56]==54 && buffer[57]==70)      //6f  
{ 

tmp[26]=111; 

} 
//------------ 




if(buffer[56]==55 && buffer[57]==48)      //70       
{ 

tmp[26]=112; 

} 

if(buffer[56]==55 && buffer[57]==49)      //71        
{ 

tmp[26]=113; 

} 
if(buffer[56]==55 && buffer[57]==50)      //72        
{ 

tmp[26]=114; 

} 
if(buffer[56]==55 && buffer[57]==51)      //73         
{ 

tmp[26]=115; 

} 
if(buffer[56]==55 && buffer[57]==52)      //74        
{ 

tmp[26]=116; 

} 
if(buffer[56]==55 && buffer[57]==53)      //75      
{ 

tmp[26]=117; 

} 
if(buffer[56]==55 && buffer[57]==54)      //76       
{ 

tmp[26]=118; 

} 
if(buffer[56]==55 && buffer[57]==55)      //77     
{ 

tmp[26]=119; 

} 
if(buffer[56]==55 && buffer[57]==56)      //78     
{ 

tmp[26]=120; 

} 
if(buffer[56]==55 && buffer[57]==57)      //79   
{ 

tmp[26]=121; 

} 

if(buffer[56]==55 && buffer[57]==65)      //7a 
{ 

tmp[26]=122; 

} 

if(buffer[56]==55 && buffer[57]==66)      //7b 
{ 

tmp[26]=123; 

} 
if(buffer[56]==55 && buffer[57]==67)      //7c 
{ 

tmp[26]=124; 

} 
if(buffer[56]==55 && buffer[57]==68)      //7d 
{ 

tmp[26]=125; 

} 
if(buffer[56]==55 && buffer[57]==69)      //7e  
{ 

tmp[26]=126; 

} 
if(buffer[56]==55 && buffer[57]==70)      //7f  
{ 

tmp[26]=127; 

} 

//------------ 

if(buffer[56]==56 && buffer[57]==48)      //80       
{ 
 
tmp[26]=128; 

} 

if(buffer[56]==56 && buffer[57]==49)      //81        
{ 

tmp[26]=129; 

} 
if(buffer[56]==56 && buffer[57]==50)      //82        
{ 

tmp[26]=130; 

} 
if(buffer[56]==56 && buffer[57]==51)      //83         
{ 

tmp[26]=131; 

} 
if(buffer[56]==56 && buffer[57]==52)      //84        
{ 

tmp[26]=132; 

} 
if(buffer[56]==56 && buffer[57]==53)      //85      
{ 

tmp[26]=133; 

} 
if(buffer[56]==56 && buffer[57]==54)      //86       
{ 

tmp[26]=134; 

} 
if(buffer[56]==56 && buffer[57]==55)      //87     
{ 

tmp[26]=135; 

} 
if(buffer[56]==56 && buffer[57]==56)      //88     
{ 

tmp[26]=136; 

} 
if(buffer[56]==56 && buffer[57]==57)      //89   
{ 

tmp[26]=137; 

} 

if(buffer[56]==56 && buffer[57]==65)      //8a 
{ 

tmp[26]=138; 

} 

if(buffer[56]==56 && buffer[57]==66)      //8b 
{ 

tmp[26]=139; 

} 
if(buffer[56]==56 && buffer[57]==67)      //8c 
{ 

tmp[26]=140; 

} 
if(buffer[56]==56 && buffer[57]==68)      //8d 
{ 

tmp[26]=141; 

} 
if(buffer[56]==56 && buffer[57]==69)      //8e  
{ 

tmp[26]=142; 

} 
if(buffer[56]==56 && buffer[57]==70)      //8f  
{ 

tmp[26]=143; 

} 
//------------ 


if(buffer[56]==57 && buffer[57]==48)      //90       
{ 

tmp[26]=144; 
 
} 

if(buffer[56]==57 && buffer[57]==49)      //91        
{ 

tmp[26]=145; 

} 
if(buffer[56]==57 && buffer[57]==50)      //92        
{ 

tmp[26]=146; 

} 
if(buffer[56]==57 && buffer[57]==51)      //93         
{ 

tmp[26]=147; 

} 
if(buffer[56]==57 && buffer[57]==52)      //94        
{ 

tmp[26]=148; 

} 
if(buffer[56]==57 && buffer[57]==53)      //95      
{ 

tmp[26]=149; 

} 
if(buffer[56]==57 && buffer[57]==54)      //96       
{ 

tmp[26]=150; 

} 
if(buffer[56]==57 && buffer[57]==55)      //97     
{ 

tmp[26]=151; 

} 
if(buffer[56]==57 && buffer[57]==56)      //98     
{ 

tmp[26]=152; 

} 
if(buffer[56]==57 && buffer[57]==57)      //99   
{ 

tmp[26]=153; 

} 

if(buffer[56]==57 && buffer[57]==65)      //9a 
{ 

tmp[26]=154; 

} 

if(buffer[56]==57 && buffer[57]==66)      //9b 
{ 

tmp[26]=155; 

} 
if(buffer[56]==57 && buffer[57]==67)      //9c 
{ 

tmp[26]=156; 

} 
if(buffer[56]==57 && buffer[57]==68)      //9d 
{ 

tmp[26]=157; 

} 
if(buffer[56]==57 && buffer[57]==69)      //9e  
{ 

tmp[26]=158; 

} 
if(buffer[56]==57 && buffer[57]==70)      //9f  
{ 

tmp[26]=159; 

} 
//------------ 


if(buffer[56]==65 && buffer[57]==48)      //a0       
{ 

tmp[26]=160; 

} 
 
if(buffer[56]==65 && buffer[57]==49)      //a1        
{ 

tmp[26]=161; 

} 
if(buffer[56]==65 && buffer[57]==50)      //a2        
{ 

tmp[26]=162; 

} 
if(buffer[56]==65 && buffer[57]==51)      //a3         
{ 

tmp[26]=163; 

} 
if(buffer[56]==65 && buffer[57]==52)      //a4        
{ 

tmp[26]=164; 

} 
if(buffer[56]==65 && buffer[57]==53)      //a5      
{ 

tmp[26]=165; 

} 
if(buffer[56]==65 && buffer[57]==54)      //a6       
{ 

tmp[26]=166; 

} 
if(buffer[56]==65 && buffer[57]==55)      //a7     
{ 

tmp[26]=167; 

} 
if(buffer[56]==65 && buffer[57]==56)      //a8     
{ 

tmp[26]=168; 

} 
if(buffer[56]==65 && buffer[57]==57)      //a9   
{ 

tmp[26]=169; 

} 

if(buffer[56]==65 && buffer[57]==65)      //aa 
{ 

tmp[26]=170; 

} 

if(buffer[56]==65 && buffer[57]==66)      //ab 
{ 

tmp[26]=171; 

} 
if(buffer[56]==65 && buffer[57]==67)      //ac 
{ 

tmp[26]=172; 

} 
if(buffer[56]==65 && buffer[57]==68)      //ad 
{ 

tmp[26]=173; 

} 
if(buffer[56]==65 && buffer[57]==69)      //ae  
{ 

tmp[26]=174; 

} 
if(buffer[56]==65 && buffer[57]==70)      //af  
{ 

tmp[26]=175; 

} 
//------------ 


if(buffer[56]==66 && buffer[57]==48)      //b0       
{ 

tmp[26]=176; 

} 

if(buffer[56]==66 && buffer[57]==49)      //b1        
{ 

tmp[26]=177; 

} 
if(buffer[56]==66 && buffer[57]==50)      //b2        
{ 

tmp[26]=178; 

} 
if(buffer[56]==66 && buffer[57]==51)      //b3         
{ 

tmp[26]=179; 

} 
if(buffer[56]==66 && buffer[57]==52)      //b4        
{ 

tmp[26]=180; 

} 
if(buffer[56]==66 && buffer[57]==53)      //b5      
{ 

tmp[26]=181; 

} 
if(buffer[56]==66 && buffer[57]==54)      //b6       
{ 

tmp[26]=182; 

} 
if(buffer[56]==66 && buffer[57]==55)      //b7     
{ 

tmp[26]=183; 

} 
if(buffer[56]==66 && buffer[57]==56)      //b8     
{ 

tmp[26]=184; 

} 
if(buffer[56]==66 && buffer[57]==57)      //b9   
{ 

tmp[26]=185; 

} 

if(buffer[56]==66 && buffer[57]==65)      //ba 
{ 

tmp[26]=186; 

} 

if(buffer[56]==66 && buffer[57]==66)      //bb 
{ 

tmp[26]=187; 

} 
if(buffer[56]==66 && buffer[57]==67)      //bc 
{ 

tmp[26]=188; 

} 
if(buffer[56]==66 && buffer[57]==68)      //bd 
{ 

tmp[26]=189; 

} 
if(buffer[56]==66 && buffer[57]==69)      //be  
{ 

tmp[26]=190; 

} 
if(buffer[56]==66 && buffer[57]==70)      //bf  
{ 

tmp[26]=191; 

} 
//------------ 



if(buffer[56]==67 && buffer[57]==48)      //c0       
{ 

tmp[26]=192; 

} 

if(buffer[56]==67 && buffer[57]==49)      //c1        
{ 
 
tmp[26]=193; 

} 
if(buffer[56]==67 && buffer[57]==50)      //c2        
{ 

tmp[26]=194; 

} 
if(buffer[56]==67 && buffer[57]==51)      //c3         
{ 

tmp[26]=195; 

} 
if(buffer[56]==67 && buffer[57]==52)      //c4        
{ 

tmp[26]=196; 

} 
if(buffer[56]==67 && buffer[57]==53)      //c5      
{ 

tmp[26]=197; 

} 
if(buffer[56]==67 && buffer[57]==54)      //c6       
{ 

tmp[26]=198; 

} 
if(buffer[56]==67 && buffer[57]==55)      //c7     
{ 

tmp[26]=199; 

} 
if(buffer[56]==67 && buffer[57]==56)      //c8     
{ 

tmp[26]=200; 

} 
if(buffer[56]==67 && buffer[57]==57)      //c9   
{ 

tmp[26]=201; 

} 
 
if(buffer[56]==67 && buffer[57]==65)      //ca 
{ 

tmp[26]=202; 

} 

if(buffer[56]==67 && buffer[57]==66)      //cb 
{ 

tmp[26]=203; 

} 
if(buffer[56]==67 && buffer[57]==67)      //cc 
{ 

tmp[26]=204; 

} 
if(buffer[56]==67 && buffer[57]==68)      //cd 
{ 

tmp[26]=205; 

} 
if(buffer[56]==67 && buffer[57]==69)      //ce  
{ 

tmp[26]=206; 

} 
if(buffer[56]==67 && buffer[57]==70)      //cf  
{ 

tmp[26]=207; 

} 
//------------ 


if(buffer[56]==68 && buffer[57]==48)      //d0       
{ 

tmp[26]=208; 

} 

if(buffer[56]==68 && buffer[57]==49)      //d1        
{ 

tmp[26]=209; 
 
} 
if(buffer[56]==68 && buffer[57]==50)      //d2        
{ 

tmp[26]=210; 

} 
if(buffer[56]==68 && buffer[57]==51)      //d3         
{ 

tmp[26]=211; 

} 
if(buffer[56]==68 && buffer[57]==52)      //d4        
{ 

tmp[26]=212; 

} 
if(buffer[56]==68 && buffer[57]==53)      //d5      
{ 

tmp[26]=213; 

} 
if(buffer[56]==68 && buffer[57]==54)      //d6       
{ 

tmp[26]=214; 

} 
if(buffer[56]==68 && buffer[57]==55)      //d7     
{ 

tmp[26]=215; 

} 
if(buffer[56]==68 && buffer[57]==56)      //d8     
{ 

tmp[26]=216; 

} 
if(buffer[56]==68 && buffer[57]==57)      //d9   
{ 

tmp[26]=217; 

} 

if(buffer[56]==68 && buffer[57]==65)      //da 
{ 

tmp[26]=218; 

} 

if(buffer[56]==68 && buffer[57]==66)      //db 
{ 

tmp[26]=219; 

} 
if(buffer[56]==68 && buffer[57]==67)      //dc 
{ 

tmp[26]=220; 

} 
if(buffer[56]==68 && buffer[57]==68)      //dd 
{ 

tmp[26]=221; 

} 
if(buffer[56]==68 && buffer[57]==69)      //de  
{ 

tmp[26]=222; 

} 
if(buffer[56]==68 && buffer[57]==70)      //df  
{ 

tmp[26]=223; 

} 
//------------ 



if(buffer[56]==69 && buffer[57]==48)      //e0       
{ 

tmp[26]=224; 

} 

if(buffer[56]==69 && buffer[57]==49)      //e1        
{ 

tmp[26]=225; 

} 
if(buffer[56]==69 && buffer[57]==50)      //e2        
{ 

tmp[26]=226; 

} 
if(buffer[56]==69 && buffer[57]==51)      //e3         
{ 

tmp[26]=227; 

} 
if(buffer[56]==69 && buffer[57]==52)      //e4        
{ 

tmp[26]=228; 

} 
if(buffer[56]==69 && buffer[57]==53)      //e5      
{ 

tmp[26]=229; 

} 
if(buffer[56]==69 && buffer[57]==54)      //e6       
{ 

tmp[26]=230; 

} 
if(buffer[56]==69 && buffer[57]==55)      //e7     
{ 

tmp[26]=231; 

} 
if(buffer[56]==69 && buffer[57]==56)      //e8     
{ 

tmp[26]=232; 

} 
if(buffer[56]==69 && buffer[57]==57)      //e9   
{ 

tmp[26]=233; 

} 

if(buffer[56]==69 && buffer[57]==65)      //ea 
{ 
 
tmp[26]=234; 

} 

if(buffer[56]==69 && buffer[57]==66)      //eb 
{ 

tmp[26]=235; 

} 
if(buffer[56]==69 && buffer[57]==67)      //ec 
{ 

tmp[26]=236; 

} 
if(buffer[56]==69 && buffer[57]==68)      //ed 
{ 

tmp[26]=237; 

} 
if(buffer[56]==69 && buffer[57]==69)      //ee  
{ 

tmp[26]=238; 

} 
if(buffer[56]==69 && buffer[57]==70)      //ef  
{ 

tmp[26]=239; 

} 
//------------ 

if(buffer[56]==70 && buffer[57]==48)      //f0       
{ 

tmp[26]=240; 

} 

if(buffer[56]==70 && buffer[57]==49)      //f1        
{ 

tmp[26]=241; 

} 
if(buffer[56]==70 && buffer[57]==50)      //f2        
{ 
 
tmp[26]=242; 

} 
if(buffer[56]==70 && buffer[57]==51)      //f3         
{ 

tmp[26]=243; 

} 
if(buffer[56]==70 && buffer[57]==52)      //f4        
{ 

tmp[26]=244; 

} 
if(buffer[56]==70 && buffer[57]==53)      //f5      
{ 

tmp[26]=245; 

} 
if(buffer[56]==70 && buffer[57]==54)      //f6       
{ 

tmp[26]=246; 

} 
if(buffer[56]==70 && buffer[57]==55)      //f7     
{ 

tmp[26]=247; 

} 
if(buffer[56]==70 && buffer[57]==56)      //f8     
{ 

tmp[26]=248; 

} 
if(buffer[56]==70 && buffer[57]==57)      //f9   
{ 

tmp[26]=249; 

} 

if(buffer[56]==70 && buffer[57]==65)      //fa 
{ 

tmp[26]=250; 

} 

if(buffer[56]==70 && buffer[57]==66)      //fb 
{ 

tmp[26]=251; 

} 
if(buffer[56]==70 && buffer[57]==67)      //fc 
{ 

tmp[26]=252; 

} 
if(buffer[56]==70 && buffer[57]==68)      //fd 
{ 

tmp[26]=253; 

} 
if(buffer[56]==70 && buffer[57]==69)      //fe  
{ 

tmp[26]=254; 

} 
if(buffer[56]==70 && buffer[57]==70)      //ff  
{ 

tmp[26]=255; 

} 

//----------------------- end of tmp[26]--------------------------- 

//----------------------- start of tmp[27]--------------------------- 


if(buffer[58]==48 && buffer[59]==48)      //00        
{ 

tmp[27]=0; 

} 

if(buffer[58]==48 && buffer[59]==49)      //01        
{ 

tmp[27]=1; 

} 
if(buffer[58]==48 && buffer[59]==50)      //02        
{ 

tmp[27]=2; 

} 
if(buffer[58]==48 && buffer[59]==51)      //03         
{ 

tmp[27]=3; 

} 
if(buffer[58]==48 && buffer[59]==52)      //04        
{ 

tmp[27]=4; 

} 
if(buffer[58]==48 && buffer[59]==53)      //05      
{ 

tmp[27]=5; 

} 


if(buffer[58]==48 && buffer[59]==54)      //06       
{ 

tmp[27]=6; 

} 
if(buffer[58]==48 && buffer[59]==55)      //07     
{ 

tmp[27]=7; 

} 
if(buffer[58]==48 && buffer[59]==56)      //08     
{ 

tmp[27]=8; 

} 
if(buffer[58]==48 && buffer[59]==57)      //09   
{ 

tmp[27]=9; 

} 

if(buffer[58]==48 && buffer[59]==65)      //0a 
{ 
 
tmp[27]=10; 

} 

if(buffer[58]==48 && buffer[59]==66)      //0b 
{ 

tmp[27]=11; 

} 
if(buffer[58]==48 && buffer[59]==67)      //0c 
{ 

tmp[27]=12; 

} 
if(buffer[58]==48 && buffer[59]==68)      //0d 
{ 

tmp[27]=13; 

} 
if(buffer[58]==48 && buffer[59]==69)      //0e  
{ 

tmp[27]=14; 

} 
if(buffer[58]==48 && buffer[59]==70)      //0f  
{ 

tmp[27]=15; 

} 

//----------- 

if(buffer[58]==49 && buffer[59]==48)      //        10 
{ 

tmp[27]=16; 

} 
if(buffer[58]==49 && buffer[59]==49)      //         11 
{ 

tmp[27]=17; 

} 
if(buffer[58]==49 && buffer[59]==50)      //         12 
{ 
 
tmp[27]=18; 

} 
if(buffer[58]==49 && buffer[59]==51)      //         13 
{ 

tmp[27]=19; 

} 
if(buffer[58]==49 && buffer[59]==52)      //         14 
{ 

tmp[27]=20; 

} 
if(buffer[58]==49 && buffer[59]==53)      //         15 
{ 

tmp[27]=21; 

} 
if(buffer[58]==49 && buffer[59]==54)      //         16 
{ 

tmp[27]=22; 

} 
if(buffer[58]==49 && buffer[59]==55)      //         17 
{ 

tmp[27]=23; 

} 
if(buffer[58]==49 && buffer[59]==56)      //         18 
{ 

tmp[27]=24; 

} 
if(buffer[58]==49 && buffer[59]==57)      //         19 
{ 

tmp[27]=25; 

} 

if(buffer[58]==49 && buffer[59]==65)      //         1a 
{ 

tmp[27]=26; 

} 
if(buffer[58]==49 && buffer[59]==66)      //         1b 
{ 

tmp[27]=27; 

} 
if(buffer[58]==49 && buffer[59]==67)      //         1c 
{ 

tmp[27]=28; 

} 
if(buffer[58]==49 && buffer[59]==68)      //         1d 
{ 

tmp[27]=29; 

} 
if(buffer[58]==49 && buffer[59]==69)      //         1e 
{ 

tmp[27]=30; 

} 
if(buffer[58]==49 && buffer[59]==70)      //         1f 
{ 

tmp[27]=31; 

} 


//--------------- 


if(buffer[58]==50 && buffer[59]==48)      //         20 
{ 

tmp[27]=32; 

} 

if(buffer[58]==50 && buffer[59]==49)      //         21 
{ 

tmp[27]=33; 

} 
if(buffer[58]==50 && buffer[59]==50)      //         22 
{ 

tmp[27]=34; 

} 
if(buffer[58]==50 && buffer[59]==51)      //         23 
{ 

tmp[27]=35; 

} 
if(buffer[58]==50 && buffer[59]==52)      //         24 
{ 

tmp[27]=36; 

} 
if(buffer[58]==50 && buffer[59]==53)      //         25 
{ 

tmp[27]=37; 

} 
if(buffer[58]==50 && buffer[59]==54)      //         26 
{ 

tmp[27]=38; 

} 
if(buffer[58]==50 && buffer[59]==55)      //         27 
{ 

tmp[27]=39; 

} 
if(buffer[58]==50 && buffer[59]==56)      //         28 
{ 

tmp[27]=40; 

} 
if(buffer[58]==50 && buffer[59]==57)      //         29 
{ 

tmp[27]=41; 

} 
if(buffer[58]==50 && buffer[59]==65)      //         2a 
{ 

tmp[27]=42; 

} 
if(buffer[58]==50 && buffer[59]==66)      //         2b 
{ 

tmp[27]=43; 

} 
if(buffer[58]==50 && buffer[59]==67)      //         2c 
{ 

tmp[27]=44; 

} 

if(buffer[58]==50 && buffer[59]==68)      //       2d  
{ 

tmp[27]=45; 

} 
if(buffer[58]==50 && buffer[59]==69)      //         2e 
{ 

tmp[27]=46; 

} 
if(buffer[58]==50 && buffer[59]==70)      //         2f 
{ 

tmp[27]=47; 

} 

//------------- 


if(buffer[58]==51 && buffer[59]==48)      // 30        
{ 

tmp[27]=48; 

} 

if(buffer[58]==51 && buffer[59]==49)      // 31        
{ 

tmp[27]=49; 

} 
if(buffer[58]==51 && buffer[59]==50)      // 32        
{ 

tmp[27]=50; 

} 
if(buffer[58]==51 && buffer[59]==51)      //33         
{ 

tmp[27]=51; 

} 
if(buffer[58]==51 && buffer[59]==52)      //34        
{ 

tmp[27]=52; 

} 
if(buffer[58]==51 && buffer[59]==53)      //35      
{ 

tmp[27]=53; 

} 
if(buffer[58]==51 && buffer[59]==54)      //36       
{ 

tmp[27]=54; 

} 
if(buffer[58]==51 && buffer[59]==55)      //37     
{ 

tmp[27]=55; 

} 
if(buffer[58]==51 && buffer[59]==56)      //38     
{ 

tmp[27]=56; 

} 
if(buffer[58]==51 && buffer[59]==57)      //39   
{ 

tmp[27]=57; 

} 

if(buffer[58]==51 && buffer[59]==65)      //3a 
{ 

tmp[27]=58; 

} 

if(buffer[58]==51 && buffer[59]==66)      //3b 
{ 

tmp[27]=59; 

} 
if(buffer[58]==51 && buffer[59]==67)      //3c 
{ 

tmp[27]=60; 

} 
if(buffer[58]==51 && buffer[59]==68)      //3d 
{ 

tmp[27]=61; 

} 
if(buffer[58]==51 && buffer[59]==69)      //3e  
{ 

tmp[27]=62; 

} 
if(buffer[58]==51 && buffer[59]==70)      //3f  
{ 

tmp[27]=63; 

} 

//------------ 


if(buffer[58]==52 && buffer[59]==48)      // 40       
{ 

tmp[27]=64; 

} 

if(buffer[58]==52 && buffer[59]==49)      // 41        
{ 

tmp[27]=65; 

} 
if(buffer[58]==52 && buffer[59]==50)      // 42        
{ 

tmp[27]=66; 

} 
if(buffer[58]==52 && buffer[59]==51)      //43         
{ 

tmp[27]=67; 

} 
if(buffer[58]==52 && buffer[59]==52)      //44        
{ 

tmp[27]=68; 

} 
if(buffer[58]==52 && buffer[59]==53)      //45      
{ 

tmp[27]=69; 

} 

if(buffer[58]==52 && buffer[59]==54)      //46       
{ 

tmp[27]=70; 

} 
if(buffer[58]==52 && buffer[59]==55)      //47     
{ 

tmp[27]=71; 

} 
if(buffer[58]==52 && buffer[59]==56)      //48     
{ 

tmp[27]=72; 

} 
if(buffer[58]==52 && buffer[59]==57)      //49   
{ 

tmp[27]=73; 

} 

if(buffer[58]==52 && buffer[59]==65)      //4a 
{ 

tmp[27]=74; 

} 

if(buffer[58]==52 && buffer[59]==66)      //4b 
{ 

tmp[27]=75; 

} 
if(buffer[58]==52 && buffer[59]==67)      //4c 
{ 

tmp[27]=76; 

} 
if(buffer[58]==52 && buffer[59]==68)      //4d 
{ 

tmp[27]=77; 

} 
if(buffer[58]==52 && buffer[59]==69)      //4e  
{ 

tmp[27]=78; 

} 
if(buffer[58]==52 && buffer[59]==70)      //4f  
{ 

tmp[27]=79; 

} 
//------------ 




if(buffer[58]==53 && buffer[59]==48)      //50       
{ 

tmp[27]=80; 

} 

if(buffer[58]==53 && buffer[59]==49)      //51        
{ 

tmp[27]=81; 

} 
if(buffer[58]==53 && buffer[59]==50)      //52        
{ 

tmp[27]=82; 

} 
if(buffer[58]==53 && buffer[59]==51)      //53         
{ 

tmp[27]=83; 

} 
if(buffer[58]==53 && buffer[59]==52)      //54        
{ 

tmp[27]=84; 

} 
if(buffer[58]==53 && buffer[59]==53)      //55      
{ 

tmp[27]=85; 

} 
if(buffer[58]==53 && buffer[59]==54)      //56       
{ 

tmp[27]=86; 

} 
if(buffer[58]==53 && buffer[59]==55)      //57     
{ 

tmp[27]=87; 

} 
if(buffer[58]==53 && buffer[59]==56)      //58     
{ 

tmp[27]=88; 

} 
if(buffer[58]==53 && buffer[59]==57)      //59   
{ 

tmp[27]=89; 

} 

if(buffer[58]==53 && buffer[59]==65)      //5a 
{ 

tmp[27]=90; 

} 

if(buffer[58]==53 && buffer[59]==66)      //5b 
{ 

tmp[27]=91; 

} 
if(buffer[58]==53 && buffer[59]==67)      //5c 
{ 

tmp[27]=92; 

} 
if(buffer[58]==53 && buffer[59]==68)      //5d 
{ 

tmp[27]=93; 

} 
if(buffer[58]==53 && buffer[59]==69)      //5e  
{ 

tmp[27]=94; 

} 
if(buffer[58]==53 && buffer[59]==70)      //5f  
{ 

tmp[27]=95; 

} 
//------------ 




if(buffer[58]==54 && buffer[59]==48)      //60       
{ 

tmp[27]=96; 

} 

if(buffer[58]==54 && buffer[59]==49)      //61        
{ 

tmp[27]=97; 

} 
if(buffer[58]==54 && buffer[59]==50)      //62        
{ 

tmp[27]=98; 

} 
if(buffer[58]==54 && buffer[59]==51)      //63         
{ 

tmp[27]=99; 

} 
if(buffer[58]==54 && buffer[59]==52)      //64        
{ 

tmp[27]=100; 

} 
if(buffer[58]==54 && buffer[59]==53)      //65      
{ 

tmp[27]=101; 

} 
if(buffer[58]==54 && buffer[59]==54)      //66       
{ 

tmp[27]=102; 

} 
if(buffer[58]==54 && buffer[59]==55)      //67     
{ 

tmp[27]=103; 

} 
if(buffer[58]==54 && buffer[59]==56)      //68     
{ 

tmp[27]=104; 

} 
if(buffer[58]==54 && buffer[59]==57)      //69   
{ 

tmp[27]=105; 

} 

if(buffer[58]==54 && buffer[59]==65)      //6a 
{ 

tmp[27]=106; 

} 

if(buffer[58]==54 && buffer[59]==66)      //6b 
{ 

tmp[27]=107; 

} 
if(buffer[58]==54 && buffer[59]==67)      //6c 
{ 

tmp[27]=108; 

} 
if(buffer[58]==54 && buffer[59]==68)      //6d 
{ 

tmp[27]=109; 

} 
if(buffer[58]==54 && buffer[59]==69)      //6e  
{ 

tmp[27]=110; 

} 
if(buffer[58]==54 && buffer[59]==70)      //6f  
{ 

tmp[27]=111; 

} 
//------------ 




if(buffer[58]==55 && buffer[59]==48)      //70       
{ 

tmp[27]=112; 

} 

if(buffer[58]==55 && buffer[59]==49)      //71        
{ 

tmp[27]=113; 

} 
if(buffer[58]==55 && buffer[59]==50)      //72        
{ 

tmp[27]=114; 

} 
if(buffer[58]==55 && buffer[59]==51)      //73         
{ 

tmp[27]=115; 

} 
if(buffer[58]==55 && buffer[59]==52)      //74        
{ 

tmp[27]=116; 

} 
if(buffer[58]==55 && buffer[59]==53)      //75      
{ 

tmp[27]=117; 

} 
if(buffer[58]==55 && buffer[59]==54)      //76       
{ 

tmp[27]=118; 

} 
if(buffer[58]==55 && buffer[59]==55)      //77     
{ 

tmp[27]=119; 

} 
if(buffer[58]==55 && buffer[59]==56)      //78     
{ 

tmp[27]=120; 

} 
if(buffer[58]==55 && buffer[59]==57)      //79   
{ 

tmp[27]=121; 

} 

if(buffer[58]==55 && buffer[59]==65)      //7a 
{ 

tmp[27]=122; 

} 

if(buffer[58]==55 && buffer[59]==66)      //7b 
{ 

tmp[27]=123; 

} 
if(buffer[58]==55 && buffer[59]==67)      //7c 
{ 

tmp[27]=124; 

} 
if(buffer[58]==55 && buffer[59]==68)      //7d 
{ 

tmp[27]=125; 

} 
if(buffer[58]==55 && buffer[59]==69)      //7e  
{ 

tmp[27]=126; 

} 
if(buffer[58]==55 && buffer[59]==70)      //7f  
{ 

tmp[27]=127; 

} 

//------------ 

if(buffer[58]==56 && buffer[59]==48)      //80       
{ 

tmp[27]=128; 

} 

if(buffer[58]==56 && buffer[59]==49)      //81        
{ 

tmp[27]=129; 

} 
if(buffer[58]==56 && buffer[59]==50)      //82        
{ 

tmp[27]=130; 

} 
if(buffer[58]==56 && buffer[59]==51)      //83         
{ 

tmp[27]=131; 

} 
if(buffer[58]==56 && buffer[59]==52)      //84        
{ 

tmp[27]=132; 

} 
if(buffer[58]==56 && buffer[59]==53)      //85      
{ 

tmp[27]=133; 

} 
if(buffer[58]==56 && buffer[59]==54)      //86       
{ 

tmp[27]=134; 

} 
if(buffer[58]==56 && buffer[59]==55)      //87     
{ 

tmp[27]=135; 

} 
if(buffer[58]==56 && buffer[59]==56)      //88     
{ 

tmp[27]=136; 

} 
if(buffer[58]==56 && buffer[59]==57)      //89   
{ 

tmp[27]=137; 

} 

if(buffer[58]==56 && buffer[59]==65)      //8a 
{ 

tmp[27]=138; 

} 

if(buffer[58]==56 && buffer[59]==66)      //8b 
{ 

tmp[27]=139; 

} 
if(buffer[58]==56 && buffer[59]==67)      //8c 
{ 

tmp[27]=140; 

} 
if(buffer[58]==56 && buffer[59]==68)      //8d 
{ 

tmp[27]=141; 

} 
if(buffer[58]==56 && buffer[59]==69)      //8e  
{ 

tmp[27]=142; 

} 
if(buffer[58]==56 && buffer[59]==70)      //8f  
{ 

tmp[27]=143; 

} 
//------------ 


if(buffer[58]==57 && buffer[59]==48)      //90       
{ 

tmp[27]=144; 

} 

if(buffer[58]==57 && buffer[59]==49)      //91        
{ 

tmp[27]=145; 

} 
if(buffer[58]==57 && buffer[59]==50)      //92        
{ 

tmp[27]=146; 

} 
if(buffer[58]==57 && buffer[59]==51)      //93         
{ 

tmp[27]=147; 

} 
if(buffer[58]==57 && buffer[59]==52)      //94        
{ 

tmp[27]=148; 

} 
if(buffer[58]==57 && buffer[59]==53)      //95      
{ 

tmp[27]=149; 

} 
if(buffer[58]==57 && buffer[59]==54)      //96       
{ 

tmp[27]=150; 

} 
if(buffer[58]==57 && buffer[59]==55)      //97     
{ 

tmp[27]=151; 

} 
if(buffer[58]==57 && buffer[59]==56)      //98     
{ 

tmp[27]=152; 

} 
if(buffer[58]==57 && buffer[59]==57)      //99   
{ 

tmp[27]=153; 

} 

if(buffer[58]==57 && buffer[59]==65)      //9a 
{ 

tmp[27]=154; 

} 

if(buffer[58]==57 && buffer[59]==66)      //9b 
{ 

tmp[27]=155; 

} 
if(buffer[58]==57 && buffer[59]==67)      //9c 
{ 

tmp[27]=156; 

} 
if(buffer[58]==57 && buffer[59]==68)      //9d 
{ 

tmp[27]=157; 

} 
if(buffer[58]==57 && buffer[59]==69)      //9e  
{ 

tmp[27]=158; 

} 
if(buffer[58]==57 && buffer[59]==70)      //9f  
{ 

tmp[27]=159; 

} 
//------------ 


if(buffer[58]==65 && buffer[59]==48)      //a0       
{ 

tmp[27]=160; 

} 

if(buffer[58]==65 && buffer[59]==49)      //a1        
{ 

tmp[27]=161; 

} 
if(buffer[58]==65 && buffer[59]==50)      //a2        
{ 

tmp[27]=162; 

} 
if(buffer[58]==65 && buffer[59]==51)      //a3         
{ 

tmp[27]=163; 

} 
if(buffer[58]==65 && buffer[59]==52)      //a4        
{ 

tmp[27]=164; 

} 
if(buffer[58]==65 && buffer[59]==53)      //a5      
{ 

tmp[27]=165; 

} 
if(buffer[58]==65 && buffer[59]==54)      //a6       
{ 

tmp[27]=166; 

} 
if(buffer[58]==65 && buffer[59]==55)      //a7     
{ 

tmp[27]=167; 

} 
if(buffer[58]==65 && buffer[59]==56)      //a8     
{ 

tmp[27]=168; 

} 
if(buffer[58]==65 && buffer[59]==57)      //a9   
{ 

tmp[27]=169; 

} 

if(buffer[58]==65 && buffer[59]==65)      //aa 
{ 

tmp[27]=170; 

} 

if(buffer[58]==65 && buffer[59]==66)      //ab 
{ 

tmp[27]=171; 

} 
if(buffer[58]==65 && buffer[59]==67)      //ac 
{ 

tmp[27]=172; 

} 
if(buffer[58]==65 && buffer[59]==68)      //ad 
{ 

tmp[27]=173; 

} 
if(buffer[58]==65 && buffer[59]==69)      //ae  
{ 

tmp[27]=174; 

} 
if(buffer[58]==65 && buffer[59]==70)      //af  
{ 

tmp[27]=175; 

} 
//------------ 


if(buffer[58]==66 && buffer[59]==48)      //b0       
{ 

tmp[27]=176; 

} 

if(buffer[58]==66 && buffer[59]==49)      //b1        
{ 

tmp[27]=177; 

} 
if(buffer[58]==66 && buffer[59]==50)      //b2        
{ 

tmp[27]=178; 

} 
if(buffer[58]==66 && buffer[59]==51)      //b3         
{ 

tmp[27]=179; 

} 
if(buffer[58]==66 && buffer[59]==52)      //b4        
{ 

tmp[27]=180; 

} 
if(buffer[58]==66 && buffer[59]==53)      //b5      
{ 

tmp[27]=181; 

} 
if(buffer[58]==66 && buffer[59]==54)      //b6       
{ 

tmp[27]=182; 

} 
if(buffer[58]==66 && buffer[59]==55)      //b7     
{ 

tmp[27]=183; 

} 
if(buffer[58]==66 && buffer[59]==56)      //b8     
{ 

tmp[27]=184; 

} 
if(buffer[58]==66 && buffer[59]==57)      //b9   
{ 

tmp[27]=185; 

} 

if(buffer[58]==66 && buffer[59]==65)      //ba 
{ 

tmp[27]=186; 

} 

if(buffer[58]==66 && buffer[59]==66)      //bb 
{ 

tmp[27]=187; 

} 
if(buffer[58]==66 && buffer[59]==67)      //bc 
{ 

tmp[27]=188; 

} 
if(buffer[58]==66 && buffer[59]==68)      //bd 
{ 

tmp[27]=189; 

} 
if(buffer[58]==66 && buffer[59]==69)      //be  
{ 

tmp[27]=190; 

} 
if(buffer[58]==66 && buffer[59]==70)      //bf  
{ 

tmp[27]=191; 

} 
//------------ 



if(buffer[58]==67 && buffer[59]==48)      //c0       
{ 

tmp[27]=192; 

} 

if(buffer[58]==67 && buffer[59]==49)      //c1        
{ 

tmp[27]=193; 

} 
if(buffer[58]==67 && buffer[59]==50)      //c2        
{ 

tmp[27]=194; 

} 
if(buffer[58]==67 && buffer[59]==51)      //c3         
{ 

tmp[27]=195; 

} 
if(buffer[58]==67 && buffer[59]==52)      //c4        
{ 
 
tmp[27]=196; 

} 
if(buffer[58]==67 && buffer[59]==53)      //c5      
{ 

tmp[27]=197; 

} 
if(buffer[58]==67 && buffer[59]==54)      //c6       
{ 

tmp[27]=198; 

} 
if(buffer[58]==67 && buffer[59]==55)      //c7     
{ 

tmp[27]=199; 

} 
if(buffer[58]==67 && buffer[59]==56)      //c8     
{ 

tmp[27]=200; 

} 
if(buffer[58]==67 && buffer[59]==57)      //c9   
{ 

tmp[27]=201; 

} 

if(buffer[58]==67 && buffer[59]==65)      //ca 
{ 

tmp[27]=202; 

} 

if(buffer[58]==67 && buffer[59]==66)      //cb 
{ 

tmp[27]=203; 

} 
if(buffer[58]==67 && buffer[59]==67)      //cc 
{ 

tmp[27]=204; 
 
} 
if(buffer[58]==67 && buffer[59]==68)      //cd 
{ 

tmp[27]=205; 

} 
if(buffer[58]==67 && buffer[59]==69)      //ce  
{ 

tmp[27]=206; 

} 
if(buffer[58]==67 && buffer[59]==70)      //cf  
{ 

tmp[27]=207; 

} 
//------------ 


if(buffer[58]==68 && buffer[59]==48)      //d0       
{ 

tmp[27]=208; 

} 

if(buffer[58]==68 && buffer[59]==49)      //d1        
{ 

tmp[27]=209; 

} 
if(buffer[58]==68 && buffer[59]==50)      //d2        
{ 

tmp[27]=210; 

} 
if(buffer[58]==68 && buffer[59]==51)      //d3         
{ 

tmp[27]=211; 

} 
if(buffer[58]==68 && buffer[59]==52)      //d4        
{ 

tmp[27]=212; 
 
} 
if(buffer[58]==68 && buffer[59]==53)      //d5      
{ 

tmp[27]=213; 

} 
if(buffer[58]==68 && buffer[59]==54)      //d6       
{ 

tmp[27]=214; 

} 
if(buffer[58]==68 && buffer[59]==55)      //d7     
{ 

tmp[27]=215; 

} 
if(buffer[58]==68 && buffer[59]==56)      //d8     
{ 

tmp[27]=216; 

} 
if(buffer[58]==68 && buffer[59]==57)      //d9   
{ 

tmp[27]=217; 

} 

if(buffer[58]==68 && buffer[59]==65)      //da 
{ 

tmp[27]=218; 

} 

if(buffer[58]==68 && buffer[59]==66)      //db 
{ 

tmp[27]=219; 

} 
if(buffer[58]==68 && buffer[59]==67)      //dc 
{ 

tmp[27]=220; 

} 
if(buffer[58]==68 && buffer[59]==68)      //dd 
{ 

tmp[27]=221; 

} 
if(buffer[58]==68 && buffer[59]==69)      //de  
{ 

tmp[27]=222; 

} 
if(buffer[58]==68 && buffer[59]==70)      //df  
{ 

tmp[27]=223; 

} 
//------------ 



if(buffer[58]==69 && buffer[59]==48)      //e0       
{ 

tmp[27]=224; 

} 

if(buffer[58]==69 && buffer[59]==49)      //e1        
{ 

tmp[27]=225; 

} 
if(buffer[58]==69 && buffer[59]==50)      //e2        
{ 

tmp[27]=226; 

} 
if(buffer[58]==69 && buffer[59]==51)      //e3         
{ 

tmp[27]=227; 

} 
if(buffer[58]==69 && buffer[59]==52)      //e4        
{ 

tmp[27]=228; 

} 
if(buffer[58]==69 && buffer[59]==53)      //e5      
{ 

tmp[27]=229; 

} 
if(buffer[58]==69 && buffer[59]==54)      //e6       
{ 

tmp[27]=230; 

} 
if(buffer[58]==69 && buffer[59]==55)      //e7     
{ 

tmp[27]=231; 

} 
if(buffer[58]==69 && buffer[59]==56)      //e8     
{ 

tmp[27]=232; 

} 
if(buffer[58]==69 && buffer[59]==57)      //e9   
{ 

tmp[27]=233; 

} 

if(buffer[58]==69 && buffer[59]==65)      //ea 
{ 

tmp[27]=234; 

} 

if(buffer[58]==69 && buffer[59]==66)      //eb 
{ 

tmp[27]=235; 

} 
if(buffer[58]==69 && buffer[59]==67)      //ec 
{ 

tmp[27]=236; 

} 
if(buffer[58]==69 && buffer[59]==68)      //ed 
{ 

tmp[27]=237; 

} 
if(buffer[58]==69 && buffer[59]==69)      //ee  
{ 

tmp[27]=238; 

} 
if(buffer[58]==69 && buffer[59]==70)      //ef  
{ 

tmp[27]=239; 

} 
//------------ 

if(buffer[58]==70 && buffer[59]==48)      //f0       
{ 

tmp[27]=240; 

} 

if(buffer[58]==70 && buffer[59]==49)      //f1        
{ 

tmp[27]=241; 

} 
if(buffer[58]==70 && buffer[59]==50)      //f2        
{ 

tmp[27]=242; 

} 
if(buffer[58]==70 && buffer[59]==51)      //f3         
{ 

tmp[27]=243; 

} 
if(buffer[58]==70 && buffer[59]==52)      //f4        
{ 

tmp[27]=244; 

} 
if(buffer[58]==70 && buffer[59]==53)      //f5      
{ 
 
tmp[27]=245; 

} 
if(buffer[58]==70 && buffer[59]==54)      //f6       
{ 

tmp[27]=246; 

} 
if(buffer[58]==70 && buffer[59]==55)      //f7     
{ 

tmp[27]=247; 

} 
if(buffer[58]==70 && buffer[59]==56)      //f8     
{ 

tmp[27]=248; 

} 
if(buffer[58]==70 && buffer[59]==57)      //f9   
{ 

tmp[27]=249; 

} 

if(buffer[58]==70 && buffer[59]==65)      //fa 
{ 

tmp[27]=250; 

} 

if(buffer[58]==70 && buffer[59]==66)      //fb 
{ 

tmp[27]=251; 

} 
if(buffer[58]==70 && buffer[59]==67)      //fc 
{ 

tmp[27]=252; 

} 
if(buffer[58]==70 && buffer[59]==68)      //fd 
{ 

tmp[27]=253; 
 
} 
if(buffer[58]==70 && buffer[59]==69)      //fe  
{ 

tmp[27]=254; 

} 
if(buffer[58]==70 && buffer[59]==70)      //ff  
{ 

tmp[27]=255; 

} 

//----------------------- end of tmp[27]--------------------------- 

//----------------------- start of tmp[28]--------------------------- 


if(buffer[60]==48 && buffer[61]==48)      //00        
{ 

tmp[28]=0; 

} 

if(buffer[60]==48 && buffer[61]==49)      //01        
{ 

tmp[28]=1; 

} 
if(buffer[60]==48 && buffer[61]==50)      //02        
{ 

tmp[28]=2; 

} 
if(buffer[60]==48 && buffer[61]==51)      //03         
{ 

tmp[28]=3; 

} 
if(buffer[60]==48 && buffer[61]==52)      //04        
{ 

tmp[28]=4; 

} 
if(buffer[60]==48 && buffer[61]==53)      //05      
{ 

tmp[28]=5; 

} 


if(buffer[60]==48 && buffer[61]==54)      //06       
{ 

tmp[28]=6; 

} 
if(buffer[60]==48 && buffer[61]==55)      //07     
{ 

tmp[28]=7; 

} 
if(buffer[60]==48 && buffer[61]==56)      //08     
{ 

tmp[28]=8; 

} 
if(buffer[60]==48 && buffer[61]==57)      //09   
{ 

tmp[28]=9; 

} 

if(buffer[60]==48 && buffer[61]==65)      //0a 
{ 

tmp[28]=10; 

} 

if(buffer[60]==48 && buffer[61]==66)      //0b 
{ 

tmp[28]=11; 

} 
if(buffer[60]==48 && buffer[61]==67)      //0c 
{ 

tmp[28]=12; 

} 
if(buffer[60]==48 && buffer[61]==68)      //0d 
{ 

tmp[28]=13; 

} 
if(buffer[60]==48 && buffer[61]==69)      //0e  
{ 

tmp[28]=14; 

} 
if(buffer[60]==48 && buffer[61]==70)      //0f  
{ 

tmp[28]=15; 

} 

//----------- 

if(buffer[60]==49 && buffer[61]==48)      //        10 
{ 

tmp[28]=16; 

} 
if(buffer[60]==49 && buffer[61]==49)      //         11 
{ 

tmp[28]=17; 

} 
if(buffer[60]==49 && buffer[61]==50)      //         12 
{ 

tmp[28]=18; 

} 
if(buffer[60]==49 && buffer[61]==51)      //         13 
{ 

tmp[28]=19; 

} 
if(buffer[60]==49 && buffer[61]==52)      //         14 
{ 

tmp[28]=20; 

} 
if(buffer[60]==49 && buffer[61]==53)      //         15 
{ 
 
tmp[28]=21; 

} 
if(buffer[60]==49 && buffer[61]==54)      //         16 
{ 

tmp[28]=22; 

} 
if(buffer[60]==49 && buffer[61]==55)      //         17 
{ 

tmp[28]=23; 

} 
if(buffer[60]==49 && buffer[61]==56)      //         18 
{ 

tmp[28]=24; 

} 
if(buffer[60]==49 && buffer[61]==57)      //         19 
{ 

tmp[28]=25; 

} 

if(buffer[60]==49 && buffer[61]==65)      //         1a 
{ 

tmp[28]=26; 

} 
if(buffer[60]==49 && buffer[61]==66)      //         1b 
{ 

tmp[28]=27; 

} 
if(buffer[60]==49 && buffer[61]==67)      //         1c 
{ 

tmp[28]=28; 

} 
if(buffer[60]==49 && buffer[61]==68)      //         1d 
{ 

tmp[28]=29; 

} 
if(buffer[60]==49 && buffer[61]==69)      //         1e 
{ 

tmp[28]=30; 

} 
if(buffer[60]==49 && buffer[61]==70)      //         1f 
{ 

tmp[28]=31; 

} 


//--------------- 


if(buffer[60]==50 && buffer[61]==48)      //         20 
{ 

tmp[28]=32; 

} 

if(buffer[60]==50 && buffer[61]==49)      //         21 
{ 

tmp[28]=33; 

} 
if(buffer[60]==50 && buffer[61]==50)      //         22 
{ 

tmp[28]=34; 

} 
if(buffer[60]==50 && buffer[61]==51)      //         23 
{ 

tmp[28]=35; 

} 
if(buffer[60]==50 && buffer[61]==52)      //         24 
{ 

tmp[28]=36; 

} 
if(buffer[60]==50 && buffer[61]==53)      //         25 
{ 

tmp[28]=37; 

} 
if(buffer[60]==50 && buffer[61]==54)      //         26 
{ 

tmp[28]=38; 

} 
if(buffer[60]==50 && buffer[61]==55)      //         27 
{ 

tmp[28]=39; 

} 
if(buffer[60]==50 && buffer[61]==56)      //         28 
{ 

tmp[28]=40; 

} 
if(buffer[60]==50 && buffer[61]==57)      //         29 
{ 

tmp[28]=41; 

} 
if(buffer[60]==50 && buffer[61]==65)      //         2a 
{ 

tmp[28]=42; 

} 
if(buffer[60]==50 && buffer[61]==66)      //         2b 
{ 

tmp[28]=43; 

} 
if(buffer[60]==50 && buffer[61]==67)      //         2c 
{ 

tmp[28]=44; 

} 

if(buffer[60]==50 && buffer[61]==68)      //       2d  
{ 

tmp[28]=45; 

} 
if(buffer[60]==50 && buffer[61]==69)      //         2e 
{ 

tmp[28]=46; 

} 
if(buffer[60]==50 && buffer[61]==70)      //         2f 
{ 

tmp[28]=47; 

} 

//------------- 


if(buffer[60]==51 && buffer[61]==48)      // 30        
{ 

tmp[28]=48; 

} 

if(buffer[60]==51 && buffer[61]==49)      // 31        
{ 

tmp[28]=49; 

} 
if(buffer[60]==51 && buffer[61]==50)      // 32        
{ 

tmp[28]=50; 

} 
if(buffer[60]==51 && buffer[61]==51)      //33         
{ 

tmp[28]=51; 

} 
if(buffer[60]==51 && buffer[61]==52)      //34        
{ 

tmp[28]=52; 

} 
if(buffer[60]==51 && buffer[61]==53)      //35      
{ 

tmp[28]=53; 

} 
if(buffer[60]==51 && buffer[61]==54)      //36       
{ 

tmp[28]=54; 

} 
if(buffer[60]==51 && buffer[61]==55)      //37     
{ 

tmp[28]=55; 

} 
if(buffer[60]==51 && buffer[61]==56)      //38     
{ 

tmp[28]=56; 

} 
if(buffer[60]==51 && buffer[61]==57)      //39   
{ 

tmp[28]=57; 

} 

if(buffer[60]==51 && buffer[61]==65)      //3a 
{ 

tmp[28]=58; 

} 

if(buffer[60]==51 && buffer[61]==66)      //3b 
{ 

tmp[28]=59; 

} 
if(buffer[60]==51 && buffer[61]==67)      //3c 
{ 

tmp[28]=60; 

} 
if(buffer[60]==51 && buffer[61]==68)      //3d 
{ 

tmp[28]=61; 

} 
if(buffer[60]==51 && buffer[61]==69)      //3e  
{ 

tmp[28]=62; 

} 
if(buffer[60]==51 && buffer[61]==70)      //3f  
{ 

tmp[28]=63; 

} 

//------------ 


if(buffer[60]==52 && buffer[61]==48)      // 40       
{ 

tmp[28]=64; 

} 

if(buffer[60]==52 && buffer[61]==49)      // 41        
{ 

tmp[28]=65; 

} 
if(buffer[60]==52 && buffer[61]==50)      // 42        
{ 

tmp[28]=66; 

} 
if(buffer[60]==52 && buffer[61]==51)      //43         
{ 

tmp[28]=67; 

} 
if(buffer[60]==52 && buffer[61]==52)      //44        
{ 

tmp[28]=68; 

} 
if(buffer[60]==52 && buffer[61]==53)      //45      
{ 

tmp[28]=69; 

} 
 
if(buffer[60]==52 && buffer[61]==54)      //46       
{ 

tmp[28]=70; 

} 
if(buffer[60]==52 && buffer[61]==55)      //47     
{ 

tmp[28]=71; 

} 
if(buffer[60]==52 && buffer[61]==56)      //48     
{ 

tmp[28]=72; 

} 
if(buffer[60]==52 && buffer[61]==57)      //49   
{ 

tmp[28]=73; 

} 

if(buffer[60]==52 && buffer[61]==65)      //4a 
{ 

tmp[28]=74; 

} 

if(buffer[60]==52 && buffer[61]==66)      //4b 
{ 

tmp[28]=75; 

} 
if(buffer[60]==52 && buffer[61]==67)      //4c 
{ 

tmp[28]=76; 

} 
if(buffer[60]==52 && buffer[61]==68)      //4d 
{ 

tmp[28]=77; 

} 
if(buffer[60]==52 && buffer[61]==69)      //4e  
{ 

tmp[28]=78; 

} 
if(buffer[60]==52 && buffer[61]==70)      //4f  
{ 

tmp[28]=79; 

} 
//------------ 




if(buffer[60]==53 && buffer[61]==48)      //50       
{ 

tmp[28]=80; 

} 

if(buffer[60]==53 && buffer[61]==49)      //51        
{ 

tmp[28]=81; 

} 
if(buffer[60]==53 && buffer[61]==50)      //52        
{ 

tmp[28]=82; 

} 
if(buffer[60]==53 && buffer[61]==51)      //53         
{ 

tmp[28]=83; 

} 
if(buffer[60]==53 && buffer[61]==52)      //54        
{ 

tmp[28]=84; 

} 
if(buffer[60]==53 && buffer[61]==53)      //55      
{ 

tmp[28]=85; 

} 
if(buffer[60]==53 && buffer[61]==54)      //56       
{ 

tmp[28]=86; 

} 
if(buffer[60]==53 && buffer[61]==55)      //57     
{ 

tmp[28]=87; 

} 
if(buffer[60]==53 && buffer[61]==56)      //58     
{ 

tmp[28]=88; 

} 
if(buffer[60]==53 && buffer[61]==57)      //59   
{ 

tmp[28]=89; 

} 

if(buffer[60]==53 && buffer[61]==65)      //5a 
{ 

tmp[28]=90; 

} 

if(buffer[60]==53 && buffer[61]==66)      //5b 
{ 

tmp[28]=91; 

} 
if(buffer[60]==53 && buffer[61]==67)      //5c 
{ 

tmp[28]=92; 

} 
if(buffer[60]==53 && buffer[61]==68)      //5d 
{ 

tmp[28]=93; 

} 
if(buffer[60]==53 && buffer[61]==69)      //5e  
{ 

tmp[28]=94; 

} 
if(buffer[60]==53 && buffer[61]==70)      //5f  
{ 

tmp[28]=95; 

} 
//------------ 




if(buffer[60]==54 && buffer[61]==48)      //60       
{ 

tmp[28]=96; 

} 

if(buffer[60]==54 && buffer[61]==49)      //61        
{ 

tmp[28]=97; 

} 
if(buffer[60]==54 && buffer[61]==50)      //62        
{ 

tmp[28]=98; 

} 
if(buffer[60]==54 && buffer[61]==51)      //63         
{ 

tmp[28]=99; 

} 
if(buffer[60]==54 && buffer[61]==52)      //64        
{ 

tmp[28]=100; 

} 
if(buffer[60]==54 && buffer[61]==53)      //65      
{ 

tmp[28]=101; 

} 
if(buffer[60]==54 && buffer[61]==54)      //66       
{ 

tmp[28]=102; 

} 
if(buffer[60]==54 && buffer[61]==55)      //67     
{ 

tmp[28]=103; 

} 
if(buffer[60]==54 && buffer[61]==56)      //68     
{ 

tmp[28]=104; 

} 
if(buffer[60]==54 && buffer[61]==57)      //69   
{ 

tmp[28]=105; 

} 

if(buffer[60]==54 && buffer[61]==65)      //6a 
{ 

tmp[28]=106; 

} 

if(buffer[60]==54 && buffer[61]==66)      //6b 
{ 

tmp[28]=107; 

} 
if(buffer[60]==54 && buffer[61]==67)      //6c 
{ 

tmp[28]=108; 

} 
if(buffer[60]==54 && buffer[61]==68)      //6d 
{ 

tmp[28]=109; 

} 
if(buffer[60]==54 && buffer[61]==69)      //6e  
{ 

tmp[28]=110; 

} 
if(buffer[60]==54 && buffer[61]==70)      //6f  
{ 

tmp[28]=111; 

} 
//------------ 




if(buffer[60]==55 && buffer[61]==48)      //70       
{ 

tmp[28]=112; 

} 

if(buffer[60]==55 && buffer[61]==49)      //71        
{ 

tmp[28]=113; 

} 
if(buffer[60]==55 && buffer[61]==50)      //72        
{ 

tmp[28]=114; 

} 
if(buffer[60]==55 && buffer[61]==51)      //73         
{ 

tmp[28]=115; 

} 
if(buffer[60]==55 && buffer[61]==52)      //74        
{ 

tmp[28]=116; 

} 
if(buffer[60]==55 && buffer[61]==53)      //75      
{ 

tmp[28]=117; 

} 
if(buffer[60]==55 && buffer[61]==54)      //76       
{ 

tmp[28]=118; 

} 
if(buffer[60]==55 && buffer[61]==55)      //77     
{ 

tmp[28]=119; 

} 
if(buffer[60]==55 && buffer[61]==56)      //78     
{ 

tmp[28]=120; 

} 
if(buffer[60]==55 && buffer[61]==57)      //79   
{ 

tmp[28]=121; 

} 

if(buffer[60]==55 && buffer[61]==65)      //7a 
{ 

tmp[28]=122; 

} 

if(buffer[60]==55 && buffer[61]==66)      //7b 
{ 

tmp[28]=123; 

} 
if(buffer[60]==55 && buffer[61]==67)      //7c 
{ 

tmp[28]=124; 

} 
if(buffer[60]==55 && buffer[61]==68)      //7d 
{ 

tmp[28]=125; 

} 
if(buffer[60]==55 && buffer[61]==69)      //7e  
{ 

tmp[28]=126; 

} 
if(buffer[60]==55 && buffer[61]==70)      //7f  
{ 

tmp[28]=127; 

} 

//------------ 

if(buffer[60]==56 && buffer[61]==48)      //80       
{ 

tmp[28]=128; 

} 

if(buffer[60]==56 && buffer[61]==49)      //81        
{ 

tmp[28]=129; 

} 
if(buffer[60]==56 && buffer[61]==50)      //82        
{ 

tmp[28]=130; 

} 
if(buffer[60]==56 && buffer[61]==51)      //83         
{ 

tmp[28]=131; 

} 
if(buffer[60]==56 && buffer[61]==52)      //84        
{ 

tmp[28]=132; 

} 
if(buffer[60]==56 && buffer[61]==53)      //85      
{ 

tmp[28]=133; 

} 
if(buffer[60]==56 && buffer[61]==54)      //86       
{ 

tmp[28]=134; 

} 
if(buffer[60]==56 && buffer[61]==55)      //87     
{ 

tmp[28]=135; 

} 
if(buffer[60]==56 && buffer[61]==56)      //88     
{ 

tmp[28]=136; 

} 
if(buffer[60]==56 && buffer[61]==57)      //89   
{ 

tmp[28]=137; 

} 

if(buffer[60]==56 && buffer[61]==65)      //8a 
{ 

tmp[28]=138; 

} 

if(buffer[60]==56 && buffer[61]==66)      //8b 
{ 

tmp[28]=139; 

} 
if(buffer[60]==56 && buffer[61]==67)      //8c 
{ 

tmp[28]=140; 

} 
if(buffer[60]==56 && buffer[61]==68)      //8d 
{ 

tmp[28]=141; 

} 
if(buffer[60]==56 && buffer[61]==69)      //8e  
{ 

tmp[28]=142; 

} 
if(buffer[60]==56 && buffer[61]==70)      //8f  
{ 

tmp[28]=143; 

} 
//------------ 


if(buffer[60]==57 && buffer[61]==48)      //90       
{ 

tmp[28]=144; 

} 

if(buffer[60]==57 && buffer[61]==49)      //91        
{ 

tmp[28]=145; 

} 
if(buffer[60]==57 && buffer[61]==50)      //92        
{ 

tmp[28]=146; 

} 
if(buffer[60]==57 && buffer[61]==51)      //93         
{ 

tmp[28]=147; 

} 
if(buffer[60]==57 && buffer[61]==52)      //94        
{ 

tmp[28]=148; 

} 
if(buffer[60]==57 && buffer[61]==53)      //95      
{ 

tmp[28]=149; 

} 
if(buffer[60]==57 && buffer[61]==54)      //96       
{ 

tmp[28]=150; 

} 
if(buffer[60]==57 && buffer[61]==55)      //97     
{ 

tmp[28]=151; 

} 
if(buffer[60]==57 && buffer[61]==56)      //98     
{ 

tmp[28]=152; 

} 
if(buffer[60]==57 && buffer[61]==57)      //99   
{ 

tmp[28]=153; 

} 

if(buffer[60]==57 && buffer[61]==65)      //9a 
{ 

tmp[28]=154; 

} 

if(buffer[60]==57 && buffer[61]==66)      //9b 
{ 

tmp[28]=155; 

} 
if(buffer[60]==57 && buffer[61]==67)      //9c 
{ 

tmp[28]=156; 

} 
if(buffer[60]==57 && buffer[61]==68)      //9d 
{ 

tmp[28]=157; 

} 
if(buffer[60]==57 && buffer[61]==69)      //9e  
{ 

tmp[28]=158; 

} 
if(buffer[60]==57 && buffer[61]==70)      //9f  
{ 

tmp[28]=159; 

} 
//------------ 


if(buffer[60]==65 && buffer[61]==48)      //a0       
{ 

tmp[28]=160; 

} 

if(buffer[60]==65 && buffer[61]==49)      //a1        
{ 

tmp[28]=161; 

} 
if(buffer[60]==65 && buffer[61]==50)      //a2        
{ 

tmp[28]=162; 

} 
if(buffer[60]==65 && buffer[61]==51)      //a3         
{ 

tmp[28]=163; 

} 
if(buffer[60]==65 && buffer[61]==52)      //a4        
{ 

tmp[28]=164; 

} 
if(buffer[60]==65 && buffer[61]==53)      //a5      
{ 

tmp[28]=165; 

} 
if(buffer[60]==65 && buffer[61]==54)      //a6       
{ 

tmp[28]=166; 

} 
if(buffer[60]==65 && buffer[61]==55)      //a7     
{ 

tmp[28]=167; 

} 
if(buffer[60]==65 && buffer[61]==56)      //a8     
{ 

tmp[28]=168; 

} 
if(buffer[60]==65 && buffer[61]==57)      //a9   
{ 

tmp[28]=169; 

} 

if(buffer[60]==65 && buffer[61]==65)      //aa 
{ 

tmp[28]=170; 

} 

if(buffer[60]==65 && buffer[61]==66)      //ab 
{ 

tmp[28]=171; 

} 
if(buffer[60]==65 && buffer[61]==67)      //ac 
{ 

tmp[28]=172; 

} 
if(buffer[60]==65 && buffer[61]==68)      //ad 
{ 

tmp[28]=173; 

} 
if(buffer[60]==65 && buffer[61]==69)      //ae  
{ 

tmp[28]=174; 

} 
if(buffer[60]==65 && buffer[61]==70)      //af  
{ 

tmp[28]=175; 

} 
//------------ 


if(buffer[60]==66 && buffer[61]==48)      //b0       
{ 

tmp[28]=176; 

} 

if(buffer[60]==66 && buffer[61]==49)      //b1        
{ 

tmp[28]=177; 

} 
if(buffer[60]==66 && buffer[61]==50)      //b2        
{ 

tmp[28]=178; 

} 
if(buffer[60]==66 && buffer[61]==51)      //b3         
{ 

tmp[28]=179; 

} 
if(buffer[60]==66 && buffer[61]==52)      //b4        
{ 

tmp[28]=180; 

} 
if(buffer[60]==66 && buffer[61]==53)      //b5      
{ 

tmp[28]=181; 

} 
if(buffer[60]==66 && buffer[61]==54)      //b6       
{ 

tmp[28]=182; 

} 
if(buffer[60]==66 && buffer[61]==55)      //b7     
{ 

tmp[28]=183; 

} 
if(buffer[60]==66 && buffer[61]==56)      //b8     
{ 

tmp[28]=184; 

} 
if(buffer[60]==66 && buffer[61]==57)      //b9   
{ 

tmp[28]=185; 

} 

if(buffer[60]==66 && buffer[61]==65)      //ba 
{ 

tmp[28]=186; 

} 

if(buffer[60]==66 && buffer[61]==66)      //bb 
{ 

tmp[28]=187; 

} 
if(buffer[60]==66 && buffer[61]==67)      //bc 
{ 

tmp[28]=188; 

} 
if(buffer[60]==66 && buffer[61]==68)      //bd 
{ 

tmp[28]=189; 

} 
if(buffer[60]==66 && buffer[61]==69)      //be  
{ 

tmp[28]=190; 

} 
if(buffer[60]==66 && buffer[61]==70)      //bf  
{ 

tmp[28]=191; 

} 
//------------ 



if(buffer[60]==67 && buffer[61]==48)      //c0       
{ 

tmp[28]=192; 

} 

if(buffer[60]==67 && buffer[61]==49)      //c1        
{ 

tmp[28]=193; 

} 
if(buffer[60]==67 && buffer[61]==50)      //c2        
{ 

tmp[28]=194; 

} 
if(buffer[60]==67 && buffer[61]==51)      //c3         
{ 

tmp[28]=195; 

} 
if(buffer[60]==67 && buffer[61]==52)      //c4        
{ 

tmp[28]=196; 

} 
if(buffer[60]==67 && buffer[61]==53)      //c5      
{ 

tmp[28]=197; 

} 
if(buffer[60]==67 && buffer[61]==54)      //c6       
{ 

tmp[28]=198; 

} 
if(buffer[60]==67 && buffer[61]==55)      //c7     
{ 
 
tmp[28]=199; 

} 
if(buffer[60]==67 && buffer[61]==56)      //c8     
{ 

tmp[28]=200; 

} 
if(buffer[60]==67 && buffer[61]==57)      //c9   
{ 

tmp[28]=201; 

} 

if(buffer[60]==67 && buffer[61]==65)      //ca 
{ 

tmp[28]=202; 

} 

if(buffer[60]==67 && buffer[61]==66)      //cb 
{ 

tmp[28]=203; 

} 
if(buffer[60]==67 && buffer[61]==67)      //cc 
{ 

tmp[28]=204; 

} 
if(buffer[60]==67 && buffer[61]==68)      //cd 
{ 

tmp[28]=205; 

} 
if(buffer[60]==67 && buffer[61]==69)      //ce  
{ 

tmp[28]=206; 

} 
if(buffer[60]==67 && buffer[61]==70)      //cf  
{ 

tmp[28]=207; 
 
} 
//------------ 


if(buffer[60]==68 && buffer[61]==48)      //d0       
{ 

tmp[28]=208; 

} 

if(buffer[60]==68 && buffer[61]==49)      //d1        
{ 

tmp[28]=209; 

} 
if(buffer[60]==68 && buffer[61]==50)      //d2        
{ 

tmp[28]=210; 

} 
if(buffer[60]==68 && buffer[61]==51)      //d3         
{ 

tmp[28]=211; 

} 
if(buffer[60]==68 && buffer[61]==52)      //d4        
{ 

tmp[28]=212; 

} 
if(buffer[60]==68 && buffer[61]==53)      //d5      
{ 

tmp[28]=213; 

} 
if(buffer[60]==68 && buffer[61]==54)      //d6       
{ 

tmp[28]=214; 

} 
if(buffer[60]==68 && buffer[61]==55)      //d7     
{ 

tmp[28]=215; 
 
} 
if(buffer[60]==68 && buffer[61]==56)      //d8     
{ 

tmp[28]=216; 

} 
if(buffer[60]==68 && buffer[61]==57)      //d9   
{ 

tmp[28]=217; 

} 

if(buffer[60]==68 && buffer[61]==65)      //da 
{ 

tmp[28]=218; 

} 

if(buffer[60]==68 && buffer[61]==66)      //db 
{ 

tmp[28]=219; 

} 
if(buffer[60]==68 && buffer[61]==67)      //dc 
{ 

tmp[28]=220; 

} 
if(buffer[60]==68 && buffer[61]==68)      //dd 
{ 

tmp[28]=221; 

} 
if(buffer[60]==68 && buffer[61]==69)      //de  
{ 

tmp[28]=222; 

} 
if(buffer[60]==68 && buffer[61]==70)      //df  
{ 

tmp[28]=223; 

} 
//------------ 



if(buffer[60]==69 && buffer[61]==48)      //e0       
{ 

tmp[28]=224; 

} 

if(buffer[60]==69 && buffer[61]==49)      //e1        
{ 

tmp[28]=225; 

} 
if(buffer[60]==69 && buffer[61]==50)      //e2        
{ 

tmp[28]=226; 

} 
if(buffer[60]==69 && buffer[61]==51)      //e3         
{ 

tmp[28]=227; 

} 
if(buffer[60]==69 && buffer[61]==52)      //e4        
{ 

tmp[28]=228; 

} 
if(buffer[60]==69 && buffer[61]==53)      //e5      
{ 

tmp[28]=229; 

} 
if(buffer[60]==69 && buffer[61]==54)      //e6       
{ 

tmp[28]=230; 

} 
if(buffer[60]==69 && buffer[61]==55)      //e7     
{ 

tmp[28]=231; 

} 
if(buffer[60]==69 && buffer[61]==56)      //e8     
{ 

tmp[28]=232; 

} 
if(buffer[60]==69 && buffer[61]==57)      //e9   
{ 

tmp[28]=233; 

} 

if(buffer[60]==69 && buffer[61]==65)      //ea 
{ 

tmp[28]=234; 

} 

if(buffer[60]==69 && buffer[61]==66)      //eb 
{ 

tmp[28]=235; 

} 
if(buffer[60]==69 && buffer[61]==67)      //ec 
{ 

tmp[28]=236; 

} 
if(buffer[60]==69 && buffer[61]==68)      //ed 
{ 

tmp[28]=237; 

} 
if(buffer[60]==69 && buffer[61]==69)      //ee  
{ 

tmp[28]=238; 

} 
if(buffer[60]==69 && buffer[61]==70)      //ef  
{ 

tmp[28]=239; 

} 
//------------ 
 
if(buffer[60]==70 && buffer[61]==48)      //f0       
{ 

tmp[28]=240; 

} 

if(buffer[60]==70 && buffer[61]==49)      //f1        
{ 

tmp[28]=241; 

} 
if(buffer[60]==70 && buffer[61]==50)      //f2        
{ 

tmp[28]=242; 

} 
if(buffer[60]==70 && buffer[61]==51)      //f3         
{ 

tmp[28]=243; 

} 
if(buffer[60]==70 && buffer[61]==52)      //f4        
{ 

tmp[28]=244; 

} 
if(buffer[60]==70 && buffer[61]==53)      //f5      
{ 

tmp[28]=245; 

} 
if(buffer[60]==70 && buffer[61]==54)      //f6       
{ 

tmp[28]=246; 

} 
if(buffer[60]==70 && buffer[61]==55)      //f7     
{ 

tmp[28]=247; 

} 
if(buffer[60]==70 && buffer[61]==56)      //f8     
{ 
 
tmp[28]=248; 

} 
if(buffer[60]==70 && buffer[61]==57)      //f9   
{ 

tmp[28]=249; 

} 

if(buffer[60]==70 && buffer[61]==65)      //fa 
{ 

tmp[28]=250; 

} 

if(buffer[60]==70 && buffer[61]==66)      //fb 
{ 

tmp[28]=251; 

} 
if(buffer[60]==70 && buffer[61]==67)      //fc 
{ 

tmp[28]=252; 

} 
if(buffer[60]==70 && buffer[61]==68)      //fd 
{ 

tmp[28]=253; 

} 
if(buffer[60]==70 && buffer[61]==69)      //fe  
{ 

tmp[28]=254; 

} 
if(buffer[60]==70 && buffer[61]==70)      //ff  
{ 

tmp[28]=255; 

} 

//----------------------- end of tmp[28]--------------------------- 

//----------------------- start of tmp[29]--------------------------- 
 

if(buffer[62]==48 && buffer[63]==48)      //00        
{ 

tmp[29]=0; 

} 

if(buffer[62]==48 && buffer[63]==49)      //01        
{ 

tmp[29]=1; 

} 
if(buffer[62]==48 && buffer[63]==50)      //02        
{ 

tmp[29]=2; 

} 
if(buffer[62]==48 && buffer[63]==51)      //03         
{ 

tmp[29]=3; 

} 
if(buffer[62]==48 && buffer[63]==52)      //04        
{ 

tmp[29]=4; 

} 
if(buffer[62]==48 && buffer[63]==53)      //05      
{ 

tmp[29]=5; 

} 


if(buffer[62]==48 && buffer[63]==54)      //06       
{ 

tmp[29]=6; 

} 
if(buffer[62]==48 && buffer[63]==55)      //07     
{ 

tmp[29]=7; 

} 
if(buffer[62]==48 && buffer[63]==56)      //08     
{ 

tmp[29]=8; 

} 
if(buffer[62]==48 && buffer[63]==57)      //09   
{ 

tmp[29]=9; 

} 

if(buffer[62]==48 && buffer[63]==65)      //0a 
{ 

tmp[29]=10; 

} 

if(buffer[62]==48 && buffer[63]==66)      //0b 
{ 

tmp[29]=11; 

} 
if(buffer[62]==48 && buffer[63]==67)      //0c 
{ 

tmp[29]=12; 

} 
if(buffer[62]==48 && buffer[63]==68)      //0d 
{ 

tmp[29]=13; 

} 
if(buffer[62]==48 && buffer[63]==69)      //0e  
{ 

tmp[29]=14; 

} 
if(buffer[62]==48 && buffer[63]==70)      //0f  
{ 

tmp[29]=15; 

} 

//----------- 

if(buffer[62]==49 && buffer[63]==48)      //        10 
{ 

tmp[29]=16; 

} 
if(buffer[62]==49 && buffer[63]==49)      //         11 
{ 

tmp[29]=17; 

} 
if(buffer[62]==49 && buffer[63]==50)      //         12 
{ 

tmp[29]=18; 

} 
if(buffer[62]==49 && buffer[63]==51)      //         13 
{ 

tmp[29]=19; 

} 
if(buffer[62]==49 && buffer[63]==52)      //         14 
{ 

tmp[29]=20; 

} 
if(buffer[62]==49 && buffer[63]==53)      //         15 
{ 

tmp[29]=21; 

} 
if(buffer[62]==49 && buffer[63]==54)      //         16 
{ 

tmp[29]=22; 

} 
if(buffer[62]==49 && buffer[63]==55)      //         17 
{ 

tmp[29]=23; 

} 
if(buffer[62]==49 && buffer[63]==56)      //         18 
{ 
 
tmp[29]=24; 

} 
if(buffer[62]==49 && buffer[63]==57)      //         19 
{ 

tmp[29]=25; 

} 

if(buffer[62]==49 && buffer[63]==65)      //         1a 
{ 

tmp[29]=26; 

} 
if(buffer[62]==49 && buffer[63]==66)      //         1b 
{ 

tmp[29]=27; 

} 
if(buffer[62]==49 && buffer[63]==67)      //         1c 
{ 

tmp[29]=28; 

} 
if(buffer[62]==49 && buffer[63]==68)      //         1d 
{ 

tmp[29]=29; 

} 
if(buffer[62]==49 && buffer[63]==69)      //         1e 
{ 

tmp[29]=30; 

} 
if(buffer[62]==49 && buffer[63]==70)      //         1f 
{ 

tmp[29]=31; 

} 


//--------------- 


if(buffer[62]==50 && buffer[63]==48)      //         20 
{ 

tmp[29]=32; 

} 

if(buffer[62]==50 && buffer[63]==49)      //         21 
{ 

tmp[29]=33; 

} 
if(buffer[62]==50 && buffer[63]==50)      //         22 
{ 

tmp[29]=34; 

} 
if(buffer[62]==50 && buffer[63]==51)      //         23 
{ 

tmp[29]=35; 

} 
if(buffer[62]==50 && buffer[63]==52)      //         24 
{ 

tmp[29]=36; 

} 
if(buffer[62]==50 && buffer[63]==53)      //         25 
{ 

tmp[29]=37; 

} 
if(buffer[62]==50 && buffer[63]==54)      //         26 
{ 

tmp[29]=38; 

} 
if(buffer[62]==50 && buffer[63]==55)      //         27 
{ 

tmp[29]=39; 

} 
if(buffer[62]==50 && buffer[63]==56)      //         28 
{ 

tmp[29]=40; 

} 
if(buffer[62]==50 && buffer[63]==57)      //         29 
{ 

tmp[29]=41; 

} 
if(buffer[62]==50 && buffer[63]==65)      //         2a 
{ 

tmp[29]=42; 

} 
if(buffer[62]==50 && buffer[63]==66)      //         2b 
{ 

tmp[29]=43; 

} 
if(buffer[62]==50 && buffer[63]==67)      //         2c 
{ 

tmp[29]=44; 

} 

if(buffer[62]==50 && buffer[63]==68)      //       2d  
{ 

tmp[29]=45; 

} 
if(buffer[62]==50 && buffer[63]==69)      //         2e 
{ 

tmp[29]=46; 

} 
if(buffer[62]==50 && buffer[63]==70)      //         2f 
{ 

tmp[29]=47; 

} 

//------------- 


if(buffer[62]==51 && buffer[63]==48)      // 30        
{ 
 
tmp[29]=48; 

} 

if(buffer[62]==51 && buffer[63]==49)      // 31        
{ 

tmp[29]=49; 

} 
if(buffer[62]==51 && buffer[63]==50)      // 32        
{ 

tmp[29]=50; 

} 
if(buffer[62]==51 && buffer[63]==51)      //33         
{ 

tmp[29]=51; 

} 
if(buffer[62]==51 && buffer[63]==52)      //34        
{ 

tmp[29]=52; 

} 
if(buffer[62]==51 && buffer[63]==53)      //35      
{ 

tmp[29]=53; 

} 
if(buffer[62]==51 && buffer[63]==54)      //36       
{ 

tmp[29]=54; 

} 
if(buffer[62]==51 && buffer[63]==55)      //37     
{ 

tmp[29]=55; 

} 
if(buffer[62]==51 && buffer[63]==56)      //38     
{ 

tmp[29]=56; 

} 
if(buffer[62]==51 && buffer[63]==57)      //39   
{ 

tmp[29]=57; 

} 

if(buffer[62]==51 && buffer[63]==65)      //3a 
{ 

tmp[29]=58; 

} 

if(buffer[62]==51 && buffer[63]==66)      //3b 
{ 

tmp[29]=59; 

} 
if(buffer[62]==51 && buffer[63]==67)      //3c 
{ 

tmp[29]=60; 

} 
if(buffer[62]==51 && buffer[63]==68)      //3d 
{ 

tmp[29]=61; 

} 
if(buffer[62]==51 && buffer[63]==69)      //3e  
{ 

tmp[29]=62; 

} 
if(buffer[62]==51 && buffer[63]==70)      //3f  
{ 

tmp[29]=63; 

} 

//------------ 


if(buffer[62]==52 && buffer[63]==48)      // 40       
{ 

tmp[29]=64; 

} 

if(buffer[62]==52 && buffer[63]==49)      // 41        
{ 

tmp[29]=65; 

} 
if(buffer[62]==52 && buffer[63]==50)      // 42        
{ 

tmp[29]=66; 

} 
if(buffer[62]==52 && buffer[63]==51)      //43         
{ 

tmp[29]=67; 

} 
if(buffer[62]==52 && buffer[63]==52)      //44        
{ 

tmp[29]=68; 

} 
if(buffer[62]==52 && buffer[63]==53)      //45      
{ 

tmp[29]=69; 

} 

if(buffer[62]==52 && buffer[63]==54)      //46       
{ 

tmp[29]=70; 

} 
if(buffer[62]==52 && buffer[63]==55)      //47     
{ 

tmp[29]=71; 

} 
if(buffer[62]==52 && buffer[63]==56)      //48     
{ 

tmp[29]=72; 

} 
if(buffer[62]==52 && buffer[63]==57)      //49   
{ 

tmp[29]=73; 

} 

if(buffer[62]==52 && buffer[63]==65)      //4a 
{ 

tmp[29]=74; 

} 

if(buffer[62]==52 && buffer[63]==66)      //4b 
{ 

tmp[29]=75; 

} 
if(buffer[62]==52 && buffer[63]==67)      //4c 
{ 

tmp[29]=76; 

} 
if(buffer[62]==52 && buffer[63]==68)      //4d 
{ 

tmp[29]=77; 

} 
if(buffer[62]==52 && buffer[63]==69)      //4e  
{ 

tmp[29]=78; 

} 
if(buffer[62]==52 && buffer[63]==70)      //4f  
{ 

tmp[29]=79; 

} 
//------------ 




if(buffer[62]==53 && buffer[63]==48)      //50       
{ 
 
tmp[29]=80; 

} 

if(buffer[62]==53 && buffer[63]==49)      //51        
{ 

tmp[29]=81; 

} 
if(buffer[62]==53 && buffer[63]==50)      //52        
{ 

tmp[29]=82; 

} 
if(buffer[62]==53 && buffer[63]==51)      //53         
{ 

tmp[29]=83; 

} 
if(buffer[62]==53 && buffer[63]==52)      //54        
{ 

tmp[29]=84; 

} 
if(buffer[62]==53 && buffer[63]==53)      //55      
{ 

tmp[29]=85; 

} 
if(buffer[62]==53 && buffer[63]==54)      //56       
{ 

tmp[29]=86; 

} 
if(buffer[62]==53 && buffer[63]==55)      //57     
{ 

tmp[29]=87; 

} 
if(buffer[62]==53 && buffer[63]==56)      //58     
{ 

tmp[29]=88; 

} 
if(buffer[62]==53 && buffer[63]==57)      //59   
{ 

tmp[29]=89; 

} 

if(buffer[62]==53 && buffer[63]==65)      //5a 
{ 

tmp[29]=90; 

} 

if(buffer[62]==53 && buffer[63]==66)      //5b 
{ 

tmp[29]=91; 

} 
if(buffer[62]==53 && buffer[63]==67)      //5c 
{ 

tmp[29]=92; 

} 
if(buffer[62]==53 && buffer[63]==68)      //5d 
{ 

tmp[29]=93; 

} 
if(buffer[62]==53 && buffer[63]==69)      //5e  
{ 

tmp[29]=94; 

} 
if(buffer[62]==53 && buffer[63]==70)      //5f  
{ 

tmp[29]=95; 

} 
//------------ 




if(buffer[62]==54 && buffer[63]==48)      //60       
{ 
 
tmp[29]=96; 

} 

if(buffer[62]==54 && buffer[63]==49)      //61        
{ 

tmp[29]=97; 

} 
if(buffer[62]==54 && buffer[63]==50)      //62        
{ 

tmp[29]=98; 

} 
if(buffer[62]==54 && buffer[63]==51)      //63         
{ 

tmp[29]=99; 

} 
if(buffer[62]==54 && buffer[63]==52)      //64        
{ 

tmp[29]=100; 

} 
if(buffer[62]==54 && buffer[63]==53)      //65      
{ 

tmp[29]=101; 

} 
if(buffer[62]==54 && buffer[63]==54)      //66       
{ 

tmp[29]=102; 

} 
if(buffer[62]==54 && buffer[63]==55)      //67     
{ 

tmp[29]=103; 

} 
if(buffer[62]==54 && buffer[63]==56)      //68     
{ 

tmp[29]=104; 

} 
if(buffer[62]==54 && buffer[63]==57)      //69   
{ 

tmp[29]=105; 

} 

if(buffer[62]==54 && buffer[63]==65)      //6a 
{ 

tmp[29]=106; 

} 

if(buffer[62]==54 && buffer[63]==66)      //6b 
{ 

tmp[29]=107; 

} 
if(buffer[62]==54 && buffer[63]==67)      //6c 
{ 

tmp[29]=108; 

} 
if(buffer[62]==54 && buffer[63]==68)      //6d 
{ 

tmp[29]=109; 

} 
if(buffer[62]==54 && buffer[63]==69)      //6e  
{ 

tmp[29]=110; 

} 
if(buffer[62]==54 && buffer[63]==70)      //6f  
{ 

tmp[29]=111; 

} 
//------------ 




if(buffer[62]==55 && buffer[63]==48)      //70       
{ 
 
tmp[29]=112; 

} 

if(buffer[62]==55 && buffer[63]==49)      //71        
{ 

tmp[29]=113; 

} 
if(buffer[62]==55 && buffer[63]==50)      //72        
{ 

tmp[29]=114; 

} 
if(buffer[62]==55 && buffer[63]==51)      //73         
{ 

tmp[29]=115; 

} 
if(buffer[62]==55 && buffer[63]==52)      //74        
{ 

tmp[29]=116; 

} 
if(buffer[62]==55 && buffer[63]==53)      //75      
{ 

tmp[29]=117; 

} 
if(buffer[62]==55 && buffer[63]==54)      //76       
{ 

tmp[29]=118; 

} 
if(buffer[62]==55 && buffer[63]==55)      //77     
{ 

tmp[29]=119; 

} 
if(buffer[62]==55 && buffer[63]==56)      //78     
{ 

tmp[29]=120; 

} 
if(buffer[62]==55 && buffer[63]==57)      //79   
{ 

tmp[29]=121; 

} 

if(buffer[62]==55 && buffer[63]==65)      //7a 
{ 

tmp[29]=122; 

} 

if(buffer[62]==55 && buffer[63]==66)      //7b 
{ 

tmp[29]=123; 

} 
if(buffer[62]==55 && buffer[63]==67)      //7c 
{ 

tmp[29]=124; 

} 
if(buffer[62]==55 && buffer[63]==68)      //7d 
{ 

tmp[29]=125; 

} 
if(buffer[62]==55 && buffer[63]==69)      //7e  
{ 

tmp[29]=126; 

} 
if(buffer[62]==55 && buffer[63]==70)      //7f  
{ 

tmp[29]=127; 

} 

//------------ 

if(buffer[62]==56 && buffer[63]==48)      //80       
{ 

tmp[29]=128; 
 
} 

if(buffer[62]==56 && buffer[63]==49)      //81        
{ 

tmp[29]=129; 

} 
if(buffer[62]==56 && buffer[63]==50)      //82        
{ 

tmp[29]=130; 

} 
if(buffer[62]==56 && buffer[63]==51)      //83         
{ 

tmp[29]=131; 

} 
if(buffer[62]==56 && buffer[63]==52)      //84        
{ 

tmp[29]=132; 

} 
if(buffer[62]==56 && buffer[63]==53)      //85      
{ 

tmp[29]=133; 

} 
if(buffer[62]==56 && buffer[63]==54)      //86       
{ 

tmp[29]=134; 

} 
if(buffer[62]==56 && buffer[63]==55)      //87     
{ 

tmp[29]=135; 

} 
if(buffer[62]==56 && buffer[63]==56)      //88     
{ 

tmp[29]=136; 

} 
if(buffer[62]==56 && buffer[63]==57)      //89   
{ 

tmp[29]=137; 

} 

if(buffer[62]==56 && buffer[63]==65)      //8a 
{ 

tmp[29]=138; 

} 

if(buffer[62]==56 && buffer[63]==66)      //8b 
{ 

tmp[29]=139; 

} 
if(buffer[62]==56 && buffer[63]==67)      //8c 
{ 

tmp[29]=140; 

} 
if(buffer[62]==56 && buffer[63]==68)      //8d 
{ 

tmp[29]=141; 

} 
if(buffer[62]==56 && buffer[63]==69)      //8e  
{ 

tmp[29]=142; 

} 
if(buffer[62]==56 && buffer[63]==70)      //8f  
{ 

tmp[29]=143; 

} 
//------------ 


if(buffer[62]==57 && buffer[63]==48)      //90       
{ 

tmp[29]=144; 

} 
 
if(buffer[62]==57 && buffer[63]==49)      //91        
{ 

tmp[29]=145; 

} 
if(buffer[62]==57 && buffer[63]==50)      //92        
{ 

tmp[29]=146; 

} 
if(buffer[62]==57 && buffer[63]==51)      //93         
{ 

tmp[29]=147; 

} 
if(buffer[62]==57 && buffer[63]==52)      //94        
{ 

tmp[29]=148; 

} 
if(buffer[62]==57 && buffer[63]==53)      //95      
{ 

tmp[29]=149; 

} 
if(buffer[62]==57 && buffer[63]==54)      //96       
{ 

tmp[29]=150; 

} 
if(buffer[62]==57 && buffer[63]==55)      //97     
{ 

tmp[29]=151; 

} 
if(buffer[62]==57 && buffer[63]==56)      //98     
{ 

tmp[29]=152; 

} 
if(buffer[62]==57 && buffer[63]==57)      //99   
{ 

tmp[29]=153; 

} 

if(buffer[62]==57 && buffer[63]==65)      //9a 
{ 

tmp[29]=154; 

} 

if(buffer[62]==57 && buffer[63]==66)      //9b 
{ 

tmp[29]=155; 

} 
if(buffer[62]==57 && buffer[63]==67)      //9c 
{ 

tmp[29]=156; 

} 
if(buffer[62]==57 && buffer[63]==68)      //9d 
{ 

tmp[29]=157; 

} 
if(buffer[62]==57 && buffer[63]==69)      //9e  
{ 

tmp[29]=158; 

} 
if(buffer[62]==57 && buffer[63]==70)      //9f  
{ 

tmp[29]=159; 

} 
//------------ 


if(buffer[62]==65 && buffer[63]==48)      //a0       
{ 

tmp[29]=160; 

} 

if(buffer[62]==65 && buffer[63]==49)      //a1        
{ 

tmp[29]=161; 

} 
if(buffer[62]==65 && buffer[63]==50)      //a2        
{ 

tmp[29]=162; 

} 
if(buffer[62]==65 && buffer[63]==51)      //a3         
{ 

tmp[29]=163; 

} 
if(buffer[62]==65 && buffer[63]==52)      //a4        
{ 

tmp[29]=164; 

} 
if(buffer[62]==65 && buffer[63]==53)      //a5      
{ 

tmp[29]=165; 

} 
if(buffer[62]==65 && buffer[63]==54)      //a6       
{ 

tmp[29]=166; 

} 
if(buffer[62]==65 && buffer[63]==55)      //a7     
{ 

tmp[29]=167; 

} 
if(buffer[62]==65 && buffer[63]==56)      //a8     
{ 

tmp[29]=168; 

} 
if(buffer[62]==65 && buffer[63]==57)      //a9   
{ 

tmp[29]=169; 

} 

if(buffer[62]==65 && buffer[63]==65)      //aa 
{ 

tmp[29]=170; 

} 

if(buffer[62]==65 && buffer[63]==66)      //ab 
{ 

tmp[29]=171; 

} 
if(buffer[62]==65 && buffer[63]==67)      //ac 
{ 

tmp[29]=172; 

} 
if(buffer[62]==65 && buffer[63]==68)      //ad 
{ 

tmp[29]=173; 

} 
if(buffer[62]==65 && buffer[63]==69)      //ae  
{ 

tmp[29]=174; 

} 
if(buffer[62]==65 && buffer[63]==70)      //af  
{ 

tmp[29]=175; 

} 
//------------ 


if(buffer[62]==66 && buffer[63]==48)      //b0       
{ 

tmp[29]=176; 

} 

if(buffer[62]==66 && buffer[63]==49)      //b1        
{ 

tmp[29]=177; 

} 
if(buffer[62]==66 && buffer[63]==50)      //b2        
{ 

tmp[29]=178; 

} 
if(buffer[62]==66 && buffer[63]==51)      //b3         
{ 

tmp[29]=179; 

} 
if(buffer[62]==66 && buffer[63]==52)      //b4        
{ 

tmp[29]=180; 

} 
if(buffer[62]==66 && buffer[63]==53)      //b5      
{ 

tmp[29]=181; 

} 
if(buffer[62]==66 && buffer[63]==54)      //b6       
{ 

tmp[29]=182; 

} 
if(buffer[62]==66 && buffer[63]==55)      //b7     
{ 

tmp[29]=183; 

} 
if(buffer[62]==66 && buffer[63]==56)      //b8     
{ 

tmp[29]=184; 

} 
if(buffer[62]==66 && buffer[63]==57)      //b9   
{ 

tmp[29]=185; 

} 

if(buffer[62]==66 && buffer[63]==65)      //ba 
{ 

tmp[29]=186; 

} 

if(buffer[62]==66 && buffer[63]==66)      //bb 
{ 

tmp[29]=187; 

} 
if(buffer[62]==66 && buffer[63]==67)      //bc 
{ 

tmp[29]=188; 

} 
if(buffer[62]==66 && buffer[63]==68)      //bd 
{ 

tmp[29]=189; 

} 
if(buffer[62]==66 && buffer[63]==69)      //be  
{ 

tmp[29]=190; 

} 
if(buffer[62]==66 && buffer[63]==70)      //bf  
{ 

tmp[29]=191; 

} 
//------------ 



if(buffer[62]==67 && buffer[63]==48)      //c0       
{ 

tmp[29]=192; 

} 

if(buffer[62]==67 && buffer[63]==49)      //c1        
{ 

tmp[29]=193; 
 
} 
if(buffer[62]==67 && buffer[63]==50)      //c2        
{ 

tmp[29]=194; 

} 
if(buffer[62]==67 && buffer[63]==51)      //c3         
{ 

tmp[29]=195; 

} 
if(buffer[62]==67 && buffer[63]==52)      //c4        
{ 

tmp[29]=196; 

} 
if(buffer[62]==67 && buffer[63]==53)      //c5      
{ 

tmp[29]=197; 

} 
if(buffer[62]==67 && buffer[63]==54)      //c6       
{ 

tmp[29]=198; 

} 
if(buffer[62]==67 && buffer[63]==55)      //c7     
{ 

tmp[29]=199; 

} 
if(buffer[62]==67 && buffer[63]==56)      //c8     
{ 

tmp[29]=200; 

} 
if(buffer[62]==67 && buffer[63]==57)      //c9   
{ 

tmp[29]=201; 

} 

if(buffer[62]==67 && buffer[63]==65)      //ca 
{ 

tmp[29]=202; 

} 

if(buffer[62]==67 && buffer[63]==66)      //cb 
{ 

tmp[29]=203; 

} 
if(buffer[62]==67 && buffer[63]==67)      //cc 
{ 

tmp[29]=204; 

} 
if(buffer[62]==67 && buffer[63]==68)      //cd 
{ 

tmp[29]=205; 

} 
if(buffer[62]==67 && buffer[63]==69)      //ce  
{ 

tmp[29]=206; 

} 
if(buffer[62]==67 && buffer[63]==70)      //cf  
{ 

tmp[29]=207; 

} 
//------------ 


if(buffer[62]==68 && buffer[63]==48)      //d0       
{ 

tmp[29]=208; 

} 

if(buffer[62]==68 && buffer[63]==49)      //d1        
{ 

tmp[29]=209; 

} 
if(buffer[62]==68 && buffer[63]==50)      //d2        
{ 

tmp[29]=210; 

} 
if(buffer[62]==68 && buffer[63]==51)      //d3         
{ 

tmp[29]=211; 

} 
if(buffer[62]==68 && buffer[63]==52)      //d4        
{ 

tmp[29]=212; 

} 
if(buffer[62]==68 && buffer[63]==53)      //d5      
{ 

tmp[29]=213; 

} 
if(buffer[62]==68 && buffer[63]==54)      //d6       
{ 

tmp[29]=214; 

} 
if(buffer[62]==68 && buffer[63]==55)      //d7     
{ 

tmp[29]=215; 

} 
if(buffer[62]==68 && buffer[63]==56)      //d8     
{ 

tmp[29]=216; 

} 
if(buffer[62]==68 && buffer[63]==57)      //d9   
{ 

tmp[29]=217; 

} 

if(buffer[62]==68 && buffer[63]==65)      //da 
{ 

tmp[29]=218; 

} 

if(buffer[62]==68 && buffer[63]==66)      //db 
{ 

tmp[29]=219; 

} 
if(buffer[62]==68 && buffer[63]==67)      //dc 
{ 

tmp[29]=220; 

} 
if(buffer[62]==68 && buffer[63]==68)      //dd 
{ 

tmp[29]=221; 

} 
if(buffer[62]==68 && buffer[63]==69)      //de  
{ 

tmp[29]=222; 

} 
if(buffer[62]==68 && buffer[63]==70)      //df  
{ 

tmp[29]=223; 

} 
//------------ 



if(buffer[62]==69 && buffer[63]==48)      //e0       
{ 

tmp[29]=224; 

} 

if(buffer[62]==69 && buffer[63]==49)      //e1        
{ 

tmp[29]=225; 

} 
if(buffer[62]==69 && buffer[63]==50)      //e2        
{ 

tmp[29]=226; 

} 
if(buffer[62]==69 && buffer[63]==51)      //e3         
{ 

tmp[29]=227; 

} 
if(buffer[62]==69 && buffer[63]==52)      //e4        
{ 

tmp[29]=228; 

} 
if(buffer[62]==69 && buffer[63]==53)      //e5      
{ 

tmp[29]=229; 

} 
if(buffer[62]==69 && buffer[63]==54)      //e6       
{ 

tmp[29]=230; 

} 
if(buffer[62]==69 && buffer[63]==55)      //e7     
{ 

tmp[29]=231; 

} 
if(buffer[62]==69 && buffer[63]==56)      //e8     
{ 

tmp[29]=232; 

} 
if(buffer[62]==69 && buffer[63]==57)      //e9   
{ 

tmp[29]=233; 

} 

if(buffer[62]==69 && buffer[63]==65)      //ea 
{ 

tmp[29]=234; 
 
} 

if(buffer[62]==69 && buffer[63]==66)      //eb 
{ 

tmp[29]=235; 

} 
if(buffer[62]==69 && buffer[63]==67)      //ec 
{ 

tmp[29]=236; 

} 
if(buffer[62]==69 && buffer[63]==68)      //ed 
{ 

tmp[29]=237; 

} 
if(buffer[62]==69 && buffer[63]==69)      //ee  
{ 

tmp[29]=238; 

} 
if(buffer[62]==69 && buffer[63]==70)      //ef  
{ 

tmp[29]=239; 

} 
//------------ 

if(buffer[62]==70 && buffer[63]==48)      //f0       
{ 

tmp[29]=240; 

} 

if(buffer[62]==70 && buffer[63]==49)      //f1        
{ 

tmp[29]=241; 

} 
if(buffer[62]==70 && buffer[63]==50)      //f2        
{ 

tmp[29]=242; 
 
} 
if(buffer[62]==70 && buffer[63]==51)      //f3         
{ 

tmp[29]=243; 

} 
if(buffer[62]==70 && buffer[63]==52)      //f4        
{ 

tmp[29]=244; 

} 
if(buffer[62]==70 && buffer[63]==53)      //f5      
{ 

tmp[29]=245; 

} 
if(buffer[62]==70 && buffer[63]==54)      //f6       
{ 

tmp[29]=246; 

} 
if(buffer[62]==70 && buffer[63]==55)      //f7     
{ 

tmp[29]=247; 

} 
if(buffer[62]==70 && buffer[63]==56)      //f8     
{ 

tmp[29]=248; 

} 
if(buffer[62]==70 && buffer[63]==57)      //f9   
{ 

tmp[29]=249; 

} 

if(buffer[62]==70 && buffer[63]==65)      //fa 
{ 

tmp[29]=250; 

} 

if(buffer[62]==70 && buffer[63]==66)      //fb 
{ 

tmp[29]=251; 

} 
if(buffer[62]==70 && buffer[63]==67)      //fc 
{ 

tmp[29]=252; 

} 
if(buffer[62]==70 && buffer[63]==68)      //fd 
{ 

tmp[29]=253; 

} 
if(buffer[62]==70 && buffer[63]==69)      //fe  
{ 

tmp[29]=254; 

} 
if(buffer[62]==70 && buffer[63]==70)      //ff  
{ 

tmp[29]=255; 

} 

//----------------------- end of tmp[29]--------------------------- 



{ 

tmp[30]=0; 

} 

{ 


} 
{ 