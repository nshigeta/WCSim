
void Eventdisplay()
{
  
  char* wcsimdirenv;
  wcsimdirenv = getenv ("WCSIMDIR");

  if(wcsimdirenv !=  NULL){
    gSystem->Load("${WCSIMDIR}/libWCSimRoot.so");
  }else{
    gSystem->Load("../libWCSimRoot.so");
  }
     
  gROOT->ProcessLine(".x run_Eventdisplay.C");
  
}
