> HOW TO USE PRECOMPILED HEADERS 
- Create 2 files: stdafx.h, stdafx.cpp  (source code descripe above)
 
> SET-UP IN MICROSOFT VISUAL STUDIO 

Project / properties / C/C++ / Precompiled Headers 
- Precompiled Header:                 Use (/Yu)
- Precompiled Header File:            stdafx.h
- Precompiled Header Output File:     $(IntDir)$(TargetName).pch
- Configuration:                      All Configurations
  
stdafx.cpp / properties / C/C++ / Precompiled Headers 
- Precompiled Header:                 Create (/Yc)
- Precompiled Header File:            stdafx.h
- Precompiled Header Output File:     $(IntDir)$(TargetName).pch
- Configuration:                      All Configurations
  
> IN THE REST *.C/CPP 
- #include "stdafx.h" in the top of file
