#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include "MDLHEADERSECTION.h"
#include "MDLMODELSECTION.h"
#include "MDLSEQUENCESSECTION.h"
#include "MDLGLOBALSEQSECTION.h"
#include "MDLMATERIALSECTION.h"
#include "MDLTEXTURESECTION.h"
#include "MDLTEXANIMSECTION.h"
#include "MDLGEOSETSECTION.h"
#include "MDLGEOSETANIMSECTION.h"
#include "MDLBONESECTION.h"

bool loadmdx(const std::string& fileName)
{
    std::ifstream ifs(fileName.c_str(), std::ifstream::in | std::ifstream::binary);
    if(!ifs.good())
    {
	    return false;
    }
    ifs.seekg(0,ifs.end);
    int length = ifs.tellg();
    if(length<10)
    {
	    ifs.close();
	    return false;
    }
    ifs.seekg(0,ifs.beg);
    char* buffer =new char[length];
    memset(buffer,0,length);
    ifs.read(buffer,length);
	if (ifs)
      std::cout << "all characters read successfully."<<std::endl;
    else
      std::cout << "error: only " << ifs.gcount() << " could be read"<<std::endl;  
	ifs.close();

    MDLHEADERSECTION head;
    MDLMODELSECTION model;
    MDLSEQUENCESSECTION seqs;
    MDLGLOBALSEQSECTION glob;
    MDLMATERIALSECTION mats;
    MDLTEXTURESECTION texs;
    MDLTEXANIMSECTION texa;
    MDLGEOSETSECTION geos;
    MDLGEOSETANIMSECTION geoa;
    MDLBONESECTION bone;
    
    
    char* src=buffer;
    int rest = length;
    
    head.parse(src,rest);
    std::cout << head << std::endl;
    model.parse(src,rest);
    std::cout << model << std::endl;
    seqs.parse(src,rest);
    std::cout << seqs << std::endl;
    glob.parse(src,rest);
    std::cout << glob << std::endl;
    mats.parse(src,rest);
    std::cout << mats << std::endl;
    texs.parse(src,rest);
    std::cout << texs << std::endl;
    texa.parse(src,rest);
    std::cout << texa << std::endl;
    geos.parse(src,rest);
    std::cout << geos << std::endl; 
    geoa.parse(src,rest);
    std::cout << geoa << std::endl; 
    bone.parse(src,rest);
    std::cout << bone << std::endl; 
	   
    delete[] buffer;
    buffer = NULL;
	return true;
}

bool loadmdl(const std::string& file)
{

	return true;
}

int main(int argc,char** argv)
{
    loadmdx("HeroBladeMaster.mdx.txt");
    loadmdl("HeroBladeMaster.mdl.txt");
    getchar();
	return 0;
}
