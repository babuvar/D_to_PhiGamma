void corr_2()
{

TCanvas *c1 = new TCanvas("c","2-D Optimization",0,0,700,600);
TGraph2D *dt = new TGraph2D();
	dt->SetTitle("2-D Optimization");

  TChain* chain=new TChain("h1");

//  chain->Add("DtoPhiGamma_500Kx2.root");
  chain->Add("DtoPhiGamma_80760x2.root");

TH2D* th= new  TH2D("Stats","#Delta M - M_{D} correlation", 50, 1.65, 2.0, 50, 0.14, 0.155);

  Int_t nevt=(int)chain->GetEntries();
  cout<<"nevt\t"<<nevt <<endl;
  Float_t f_delm, f_kid, f_pi0mom, f_pi0mass, f_phimass, f_d0mass, f_dstps, f_dr, f_dz, f_phihel, f_dstcts, f_dstcharge, f_mygenflag, NS[500][50]={0}, NB[500][50]={0} ,sig[500][50],i,j,bestsig=1000000,besti=3,bestj=20, f_Kppid,f_Kmpid,f_Pispid,f_Kpdr,f_Kmdr,f_Pisdr,f_Kpdz,f_Kmdz,f_Pisdz,f_Phot1the,f_Phot2the,f_Photon1e,f_Photon2e, Gamener, f_dstps;


  chain->SetBranchAddress("Mygenfla",&f_mygenflag);
  h1->SetBranchAddress("Gamenerg",&Gamener);
  h1->SetBranchAddress("Dstps",& f_dstps);
  h1->SetBranchAddress("Deltam",&f_delm);
  h1->SetBranchAddress("Dzeromas",&f_d0mass);


  Int_t flag;
  Int_t nevt_ac_p(0);
  Int_t nevt_ac_n(0);

int photon1cutflag=0, photon2cutflag=0;

  for(int ii=0;ii<nevt;ii++) 
    {
      flag=0;
      chain->GetEntry(ii);
if(f_mygenflag == 1){
th->Fill(f_d0mass,f_delm);

}

}

th->Draw("colz0");








}


