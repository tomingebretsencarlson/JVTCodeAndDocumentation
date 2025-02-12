{
//=========Macro generated from canvas: c1/Histogram Drawing Options
//=========  (Sun May 11 00:59:17 2014) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "Histogram Drawing Options",243,43,600,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.18);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.07);
   c1->SetBottomMargin(0.17);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0,0.25,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.5162162,0.8815789,1.240541,7.460526);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(1);
   pad1->SetLogy();
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.18);
   pad1->SetRightMargin(0.08);
   pad1->SetTopMargin(0.07);
   pad1->SetBottomMargin(0.17);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderSize(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderSize(0);
   
   TH1D *MCsum = new TH1D("MCsum","",35,-0.2,1.1);
   MCsum->SetBinContent(3,755.718);
   MCsum->SetBinContent(6,48849.6);
   MCsum->SetBinContent(7,6471.737);
   MCsum->SetBinContent(8,2577.676);
   MCsum->SetBinContent(9,2546.89);
   MCsum->SetBinContent(10,2986.558);
   MCsum->SetBinContent(11,1537.49);
   MCsum->SetBinContent(12,2391.161);
   MCsum->SetBinContent(13,1884.039);
   MCsum->SetBinContent(14,1590.406);
   MCsum->SetBinContent(15,993.6017);
   MCsum->SetBinContent(16,2135.221);
   MCsum->SetBinContent(17,2693.37);
   MCsum->SetBinContent(18,1642.316);
   MCsum->SetBinContent(19,1430.516);
   MCsum->SetBinContent(20,2012.912);
   MCsum->SetBinContent(21,1619.921);
   MCsum->SetBinContent(22,1478.65);
   MCsum->SetBinContent(23,2078.273);
   MCsum->SetBinContent(24,2713.12);
   MCsum->SetBinContent(25,2036.898);
   MCsum->SetBinContent(26,4395.039);
   MCsum->SetBinContent(27,2336.762);
   MCsum->SetBinContent(28,6032.117);
   MCsum->SetBinContent(29,3906.041);
   MCsum->SetBinContent(30,11169.92);
   MCsum->SetBinContent(31,23414.97);
   MCsum->SetBinContent(32,92636.02);
   MCsum->SetBinContent(33,231087.6);
   MCsum->SetBinError(3,55.63284);
   MCsum->SetBinError(6,416.8037);
   MCsum->SetBinError(7,150.2281);
   MCsum->SetBinError(8,95.07575);
   MCsum->SetBinError(9,93.5737);
   MCsum->SetBinError(10,104.0624);
   MCsum->SetBinError(11,72.42072);
   MCsum->SetBinError(12,93.27781);
   MCsum->SetBinError(13,81.6714);
   MCsum->SetBinError(14,73.99398);
   MCsum->SetBinError(15,58.75372);
   MCsum->SetBinError(16,90.04426);
   MCsum->SetBinError(17,99.17824);
   MCsum->SetBinError(18,76.68531);
   MCsum->SetBinError(19,69.07455);
   MCsum->SetBinError(20,86.46891);
   MCsum->SetBinError(21,75.72234);
   MCsum->SetBinError(22,71.24316);
   MCsum->SetBinError(23,86.4057);
   MCsum->SetBinError(24,98.31709);
   MCsum->SetBinError(25,84.65673);
   MCsum->SetBinError(26,127.1106);
   MCsum->SetBinError(27,89.65675);
   MCsum->SetBinError(28,147.759);
   MCsum->SetBinError(29,116.0331);
   MCsum->SetBinError(30,201.7535);
   MCsum->SetBinError(31,286.3052);
   MCsum->SetBinError(32,573.3701);
   MCsum->SetBinError(33,905.8152);
   MCsum->SetMinimum(100);
   MCsum->SetMaximum(1e+07);
   MCsum->SetEntries(222593);
   MCsum->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#3300cc");
   MCsum->SetFillColor(ci);
   MCsum->SetFillStyle(3004);

   ci = TColor::GetColor("#3300cc");
   MCsum->SetLineColor(ci);
   MCsum->GetXaxis()->SetTitle("JVT");
   MCsum->GetXaxis()->SetNdivisions(505);
   MCsum->GetXaxis()->SetLabelFont(42);
   MCsum->GetXaxis()->SetLabelSize(0.05);
   MCsum->GetXaxis()->SetTitleSize(0.05);
   MCsum->GetXaxis()->SetTitleOffset(1.1);
   MCsum->GetXaxis()->SetTitleFont(42);
   MCsum->GetYaxis()->SetTitle("Events");
   MCsum->GetYaxis()->SetNdivisions(505);
   MCsum->GetYaxis()->SetLabelFont(42);
   MCsum->GetYaxis()->SetLabelSize(0.05);
   MCsum->GetYaxis()->SetTitleSize(0.05);
   MCsum->GetYaxis()->SetTitleOffset(1.5);
   MCsum->GetYaxis()->SetTitleFont(42);
   MCsum->GetZaxis()->SetNdivisions(707);
   MCsum->GetZaxis()->SetLabelFont(42);
   MCsum->GetZaxis()->SetLabelOffset(0.015);
   MCsum->GetZaxis()->SetLabelSize(0.05);
   MCsum->GetZaxis()->SetTitleSize(0.05);
   MCsum->GetZaxis()->SetTitleOffset(1.1);
   MCsum->GetZaxis()->SetTitleFont(42);
   MCsum->Draw("hist");
   
   TH1D *h_JetTree0_kNN100trim_pt20to50_Likelihood = new TH1D("h_JetTree0_kNN100trim_pt20to50_Likelihood","",35,-0.2,1.1);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(3,583.1083);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(6,7010.871);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(7,2724.984);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(8,1541.514);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(9,1722.165);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(10,2237.315);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(11,1171.304);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(12,1905.846);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(13,1542.68);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(14,1226.085);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(15,821.6657);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(16,1809.939);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(17,2319.837);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(18,1425.521);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(19,1250.119);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(20,1733.771);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(21,1413.561);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(22,1287.239);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(23,1889.214);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(24,2495.382);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(25,1792.34);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(26,4074.693);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(27,2162.532);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(28,5674.704);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(29,3668.178);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(30,10724.07);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(31,22705.34);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(32,91694.76);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(33,230207.9);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(3,49.04698);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(6,161.5207);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(7,98.36601);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(8,75.9518);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(9,78.16741);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(10,90.52865);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(11,63.21288);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(12,83.13593);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(13,74.10061);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(14,64.82237);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(15,53.00114);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(16,83.78392);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(17,92.86959);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(18,72.11179);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(19,64.69208);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(20,80.27422);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(21,70.89414);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(22,66.03004);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(23,82.73288);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(24,95.13668);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(25,79.27765);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(26,123.0796);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(27,86.60931);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(28,144.2233);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(29,112.5493);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(30,198.1007);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(31,282.0309);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(32,570.5185);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(33,903.9616);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetEntries(193554);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetLineColor(ci);

   ci = TColor::GetColor("#3300cc");
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetMarkerColor(ci);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetMarkerStyle(20);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetNdivisions(505);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetLabelFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetLabelSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetTitleSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetTitleOffset(1.1);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetTitleFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetNdivisions(505);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetLabelFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetLabelSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetTitleSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetTitleOffset(1.5);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetTitleFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetNdivisions(707);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetLabelFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetLabelOffset(0.015);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetLabelSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetTitleSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetTitleOffset(1.1);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetTitleFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->Draw("EXsame");
   
   TH1D *h_JetTree0_kNN100trim_pt20to50_Likelihood = new TH1D("h_JetTree0_kNN100trim_pt20to50_Likelihood","",35,-0.2,1.1);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(3,140.7628);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(6,35149.53);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(7,1931.528);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(8,395.1907);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(9,253.7932);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(10,267.9375);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(11,140.3286);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(12,109.5512);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(13,89.18008);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(14,70.5416);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(15,26.34696);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(16,67.38919);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(17,96.12416);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(18,45.47424);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(19,27.21602);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(20,44.30499);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(21,21.91728);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(22,29.65191);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(23,27.07123);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(24,8.346608);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(25,6.019585);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(26,46.92606);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(27,9.951093);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(28,44.67618);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(29,17.70368);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(30,51.12289);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(31,64.66018);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(32,68.63985);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(33,132.8523);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(3,24.10565);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(6,352.6729);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(7,81.45319);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(8,33.89453);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(9,27.8383);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(10,32.34024);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(11,22.30264);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(12,18.57218);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(13,18.68706);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(14,17.37748);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(15,9.519074);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(16,14.4084);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(17,18.15988);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(18,11.88719);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(19,10.98838);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(20,13.38504);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(21,10.84603);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(22,9.983165);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(23,9.421831);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(24,4.351229);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(25,4.232379);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(26,11.38322);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(27,3.844215);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(28,12.56285);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(29,7.580618);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(30,14.77304);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(31,15.40009);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(32,13.29605);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(33,20.67267);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetEntries(20105);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetStats(0);

   ci = TColor::GetColor("#660066");
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetLineColor(ci);

   ci = TColor::GetColor("#660066");
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetMarkerColor(ci);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetMarkerStyle(21);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetNdivisions(505);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetLabelFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetLabelSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetTitleSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetTitleOffset(1.1);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetTitleFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetNdivisions(505);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetLabelFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetLabelSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetTitleSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetTitleOffset(1.5);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetTitleFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetNdivisions(707);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetLabelFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetLabelOffset(0.015);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetLabelSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetTitleSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetTitleOffset(1.1);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetTitleFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->Draw("EXsame");
   
   TH1D *h_JetTree0_kNN100trim_pt20to50_Likelihood = new TH1D("h_JetTree0_kNN100trim_pt20to50_Likelihood","",35,-0.2,1.1);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(3,1091);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(6,34850);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(7,5842);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(8,2407);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(9,2666);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(10,2943);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(11,1685);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(12,2311);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(13,1935);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(14,1783);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(15,1042);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(16,2080);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(17,2824);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(18,1733);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(19,1461);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(20,1979);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(21,1580);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(22,1502);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(23,2369);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(24,2762);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(25,2148);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(26,4475);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(27,2341);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(28,6104);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(29,4156);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(30,11458);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(31,24217);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(32,93051);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinContent(33,235835);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(3,33.03029);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(6,186.6815);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(7,76.43298);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(8,49.06119);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(9,51.63332);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(10,54.24942);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(11,41.04875);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(12,48.07286);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(13,43.98863);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(14,42.22558);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(15,32.28002);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(16,45.60702);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(17,53.14132);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(18,41.62932);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(19,38.22303);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(20,44.48595);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(21,39.74921);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(22,38.75564);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(23,48.67237);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(24,52.55473);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(25,46.34652);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(26,66.89544);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(27,48.38388);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(28,78.1281);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(29,64.46705);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(30,107.042);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(31,155.6181);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(32,305.0426);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetBinError(33,485.6285);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetEntries(460630);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetStats(0);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->SetMarkerStyle(20);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetNdivisions(505);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetLabelFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetLabelSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetTitleSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetTitleOffset(1.1);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetXaxis()->SetTitleFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetNdivisions(505);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetLabelFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetLabelSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetTitleSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetTitleOffset(1.5);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetYaxis()->SetTitleFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetNdivisions(707);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetLabelFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetLabelOffset(0.015);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetLabelSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetTitleSize(0.05);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetTitleOffset(1.1);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->GetZaxis()->SetTitleFont(42);
   h_JetTree0_kNN100trim_pt20to50_Likelihood->Draw("EXsame");
   
   TLegend *leg = new TLegend(0.55,0.69,0.8,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("MCsum","MC incl.","f");

   ci = TColor::GetColor("#3300cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#3300cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h_JetTree0_kNN100trim_pt20to50_Likelihood","HS","lp");

   ci = TColor::GetColor("#3300cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#3300cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h_JetTree0_kNN100trim_pt20to50_Likelihood","PU","lp");

   ci = TColor::GetColor("#660066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#660066");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h_JetTree0_kNN100trim_pt20to50_Likelihood","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.2,0.87,"ATLAS");
tex->SetNDC();
   tex->SetTextFont(72);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.33,0.87,"Preliminary");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.82,"#sqrt{s} = 8 TeV, L = 20.3 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.78,"Sherpa Z#rightarrow#mu#mu");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.74,"Anti-k_{t} LCW+JES R=0.4");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.7,"20<p_{T}<50 GeV, |#eta|<2.4");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.66,"Z p_{T}>30 GeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.62,"inclusive");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad2
   pad2 = new TPad("pad2", "",0,0,1,0.25);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.5162162,-1.509434,1.240541,2.264151);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.18);
   pad2->SetRightMargin(0.08);
   pad2->SetTopMargin(0.07);
   pad2->SetBottomMargin(0.4);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderSize(0);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderSize(0);
   
   TH1D *MCsumuncert = new TH1D("MCsumuncert","",35,-0.2,1.1);
   MCsumuncert->SetBinContent(3,1);
   MCsumuncert->SetBinContent(6,1);
   MCsumuncert->SetBinContent(7,1);
   MCsumuncert->SetBinContent(8,1);
   MCsumuncert->SetBinContent(9,1);
   MCsumuncert->SetBinContent(10,1);
   MCsumuncert->SetBinContent(11,1);
   MCsumuncert->SetBinContent(12,1);
   MCsumuncert->SetBinContent(13,1);
   MCsumuncert->SetBinContent(14,1);
   MCsumuncert->SetBinContent(15,1);
   MCsumuncert->SetBinContent(16,1);
   MCsumuncert->SetBinContent(17,1);
   MCsumuncert->SetBinContent(18,1);
   MCsumuncert->SetBinContent(19,1);
   MCsumuncert->SetBinContent(20,1);
   MCsumuncert->SetBinContent(21,1);
   MCsumuncert->SetBinContent(22,1);
   MCsumuncert->SetBinContent(23,1);
   MCsumuncert->SetBinContent(24,1);
   MCsumuncert->SetBinContent(25,1);
   MCsumuncert->SetBinContent(26,1);
   MCsumuncert->SetBinContent(27,1);
   MCsumuncert->SetBinContent(28,1);
   MCsumuncert->SetBinContent(29,1);
   MCsumuncert->SetBinContent(30,1);
   MCsumuncert->SetBinContent(31,1);
   MCsumuncert->SetBinContent(32,1);
   MCsumuncert->SetBinContent(33,1);
   MCsumuncert->SetBinError(3,0.1041086);
   MCsumuncert->SetBinError(6,0.01206662);
   MCsumuncert->SetBinError(7,0.03282806);
   MCsumuncert->SetBinError(8,0.05216226);
   MCsumuncert->SetBinError(9,0.05195874);
   MCsumuncert->SetBinError(10,0.04927629);
   MCsumuncert->SetBinError(11,0.06661399);
   MCsumuncert->SetBinError(12,0.05516765);
   MCsumuncert->SetBinError(13,0.06130488);
   MCsumuncert->SetBinError(14,0.0657966);
   MCsumuncert->SetBinError(15,0.08362537);
   MCsumuncert->SetBinError(16,0.05963871);
   MCsumuncert->SetBinError(17,0.05207574);
   MCsumuncert->SetBinError(18,0.06603445);
   MCsumuncert->SetBinError(19,0.06828735);
   MCsumuncert->SetBinError(20,0.06075054);
   MCsumuncert->SetBinError(21,0.06610665);
   MCsumuncert->SetBinError(22,0.06813856);
   MCsumuncert->SetBinError(23,0.05879696);
   MCsumuncert->SetBinError(24,0.05124777);
   MCsumuncert->SetBinError(25,0.05877698);
   MCsumuncert->SetBinError(26,0.040901);
   MCsumuncert->SetBinError(27,0.05426047);
   MCsumuncert->SetBinError(28,0.0346417);
   MCsumuncert->SetBinError(29,0.04201072);
   MCsumuncert->SetBinError(30,0.02554382);
   MCsumuncert->SetBinError(31,0.01729221);
   MCsumuncert->SetBinError(32,0.008753267);
   MCsumuncert->SetBinError(33,0.005543424);
   MCsumuncert->SetMinimum(0);
   MCsumuncert->SetMaximum(2);
   MCsumuncert->SetEntries(9487.044);
   MCsumuncert->SetStats(0);

   ci = TColor::GetColor("#999999");
   MCsumuncert->SetFillColor(ci);
   MCsumuncert->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   MCsumuncert->SetLineColor(ci);

   ci = TColor::GetColor("#999999");
   MCsumuncert->SetMarkerColor(ci);
   MCsumuncert->GetXaxis()->SetNdivisions(505);
   MCsumuncert->GetXaxis()->SetLabelFont(42);
   MCsumuncert->GetXaxis()->SetLabelSize(0.15);
   MCsumuncert->GetXaxis()->SetTitleSize(0.15);
   MCsumuncert->GetXaxis()->SetTickLength(0.09);
   MCsumuncert->GetXaxis()->SetTitleOffset(1.1);
   MCsumuncert->GetXaxis()->SetTitleFont(42);
   MCsumuncert->GetYaxis()->SetTitle("Data / MC");
   MCsumuncert->GetYaxis()->SetNdivisions(505);
   MCsumuncert->GetYaxis()->SetLabelFont(42);
   MCsumuncert->GetYaxis()->SetLabelSize(0.15);
   MCsumuncert->GetYaxis()->SetTitleSize(0.15);
   MCsumuncert->GetYaxis()->SetTickLength(0.04);
   MCsumuncert->GetYaxis()->SetTitleOffset(0.51);
   MCsumuncert->GetYaxis()->SetTitleFont(42);
   MCsumuncert->GetZaxis()->SetNdivisions(707);
   MCsumuncert->GetZaxis()->SetLabelFont(42);
   MCsumuncert->GetZaxis()->SetLabelOffset(0.015);
   MCsumuncert->GetZaxis()->SetLabelSize(0.15);
   MCsumuncert->GetZaxis()->SetTitleSize(0.15);
   MCsumuncert->GetZaxis()->SetTitleOffset(1.1);
   MCsumuncert->GetZaxis()->SetTitleFont(42);
   MCsumuncert->Draw("E2");
   TLine *line = new TLine(-0.2,1,1.1,1);
   line->SetLineStyle(7);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1D *MCsumuncert = new TH1D("MCsumuncert","",35,-0.2,1.1);
   MCsumuncert->SetBinContent(3,1);
   MCsumuncert->SetBinContent(6,1);
   MCsumuncert->SetBinContent(7,1);
   MCsumuncert->SetBinContent(8,1);
   MCsumuncert->SetBinContent(9,1);
   MCsumuncert->SetBinContent(10,1);
   MCsumuncert->SetBinContent(11,1);
   MCsumuncert->SetBinContent(12,1);
   MCsumuncert->SetBinContent(13,1);
   MCsumuncert->SetBinContent(14,1);
   MCsumuncert->SetBinContent(15,1);
   MCsumuncert->SetBinContent(16,1);
   MCsumuncert->SetBinContent(17,1);
   MCsumuncert->SetBinContent(18,1);
   MCsumuncert->SetBinContent(19,1);
   MCsumuncert->SetBinContent(20,1);
   MCsumuncert->SetBinContent(21,1);
   MCsumuncert->SetBinContent(22,1);
   MCsumuncert->SetBinContent(23,1);
   MCsumuncert->SetBinContent(24,1);
   MCsumuncert->SetBinContent(25,1);
   MCsumuncert->SetBinContent(26,1);
   MCsumuncert->SetBinContent(27,1);
   MCsumuncert->SetBinContent(28,1);
   MCsumuncert->SetBinContent(29,1);
   MCsumuncert->SetBinContent(30,1);
   MCsumuncert->SetBinContent(31,1);
   MCsumuncert->SetBinContent(32,1);
   MCsumuncert->SetBinContent(33,1);
   MCsumuncert->SetBinError(3,0.1041086);
   MCsumuncert->SetBinError(6,0.01206662);
   MCsumuncert->SetBinError(7,0.03282806);
   MCsumuncert->SetBinError(8,0.05216226);
   MCsumuncert->SetBinError(9,0.05195874);
   MCsumuncert->SetBinError(10,0.04927629);
   MCsumuncert->SetBinError(11,0.06661399);
   MCsumuncert->SetBinError(12,0.05516765);
   MCsumuncert->SetBinError(13,0.06130488);
   MCsumuncert->SetBinError(14,0.0657966);
   MCsumuncert->SetBinError(15,0.08362537);
   MCsumuncert->SetBinError(16,0.05963871);
   MCsumuncert->SetBinError(17,0.05207574);
   MCsumuncert->SetBinError(18,0.06603445);
   MCsumuncert->SetBinError(19,0.06828735);
   MCsumuncert->SetBinError(20,0.06075054);
   MCsumuncert->SetBinError(21,0.06610665);
   MCsumuncert->SetBinError(22,0.06813856);
   MCsumuncert->SetBinError(23,0.05879696);
   MCsumuncert->SetBinError(24,0.05124777);
   MCsumuncert->SetBinError(25,0.05877698);
   MCsumuncert->SetBinError(26,0.040901);
   MCsumuncert->SetBinError(27,0.05426047);
   MCsumuncert->SetBinError(28,0.0346417);
   MCsumuncert->SetBinError(29,0.04201072);
   MCsumuncert->SetBinError(30,0.02554382);
   MCsumuncert->SetBinError(31,0.01729221);
   MCsumuncert->SetBinError(32,0.008753267);
   MCsumuncert->SetBinError(33,0.005543424);
   MCsumuncert->SetMinimum(0);
   MCsumuncert->SetMaximum(2);
   MCsumuncert->SetEntries(9487.044);
   MCsumuncert->SetStats(0);

   ci = TColor::GetColor("#999999");
   MCsumuncert->SetFillColor(ci);
   MCsumuncert->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   MCsumuncert->SetLineColor(ci);

   ci = TColor::GetColor("#999999");
   MCsumuncert->SetMarkerColor(ci);
   MCsumuncert->GetXaxis()->SetNdivisions(505);
   MCsumuncert->GetXaxis()->SetLabelFont(42);
   MCsumuncert->GetXaxis()->SetLabelSize(0.15);
   MCsumuncert->GetXaxis()->SetTitleSize(0.15);
   MCsumuncert->GetXaxis()->SetTickLength(0.09);
   MCsumuncert->GetXaxis()->SetTitleOffset(1.1);
   MCsumuncert->GetXaxis()->SetTitleFont(42);
   MCsumuncert->GetYaxis()->SetTitle("Data / MC");
   MCsumuncert->GetYaxis()->SetNdivisions(505);
   MCsumuncert->GetYaxis()->SetLabelFont(42);
   MCsumuncert->GetYaxis()->SetLabelSize(0.15);
   MCsumuncert->GetYaxis()->SetTitleSize(0.15);
   MCsumuncert->GetYaxis()->SetTickLength(0.04);
   MCsumuncert->GetYaxis()->SetTitleOffset(0.51);
   MCsumuncert->GetYaxis()->SetTitleFont(42);
   MCsumuncert->GetZaxis()->SetNdivisions(707);
   MCsumuncert->GetZaxis()->SetLabelFont(42);
   MCsumuncert->GetZaxis()->SetLabelOffset(0.015);
   MCsumuncert->GetZaxis()->SetLabelSize(0.15);
   MCsumuncert->GetZaxis()->SetTitleSize(0.15);
   MCsumuncert->GetZaxis()->SetTitleOffset(1.1);
   MCsumuncert->GetZaxis()->SetTitleFont(42);
   MCsumuncert->Draw("E2same");
   
   TH1D *MCsumRatio = new TH1D("MCsumRatio","",35,-0.2,1.1);
   MCsumRatio->SetBinContent(3,1.44366);
   MCsumRatio->SetBinContent(6,0.7134142);
   MCsumRatio->SetBinContent(7,0.9026943);
   MCsumRatio->SetBinContent(8,0.9337868);
   MCsumRatio->SetBinContent(9,1.046767);
   MCsumRatio->SetBinContent(10,0.9854153);
   MCsumRatio->SetBinContent(11,1.095942);
   MCsumRatio->SetBinContent(12,0.9664761);
   MCsumRatio->SetBinContent(13,1.027049);
   MCsumRatio->SetBinContent(14,1.121098);
   MCsumRatio->SetBinContent(15,1.04871);
   MCsumRatio->SetBinContent(16,0.9741381);
   MCsumRatio->SetBinContent(17,1.048501);
   MCsumRatio->SetBinContent(18,1.055217);
   MCsumRatio->SetBinContent(19,1.02131);
   MCsumRatio->SetBinContent(20,0.9831526);
   MCsumRatio->SetBinContent(21,0.9753561);
   MCsumRatio->SetBinContent(22,1.015792);
   MCsumRatio->SetBinContent(23,1.139889);
   MCsumRatio->SetBinContent(24,1.018016);
   MCsumRatio->SetBinContent(25,1.054545);
   MCsumRatio->SetBinContent(26,1.018193);
   MCsumRatio->SetBinContent(27,1.001814);
   MCsumRatio->SetBinContent(28,1.011917);
   MCsumRatio->SetBinContent(29,1.063993);
   MCsumRatio->SetBinContent(30,1.02579);
   MCsumRatio->SetBinContent(31,1.034253);
   MCsumRatio->SetBinContent(32,1.00448);
   MCsumRatio->SetBinContent(33,1.020544);
   MCsumRatio->SetBinError(3,0.1149129);
   MCsumRatio->SetBinError(6,0.007187309);
   MCsumRatio->SetBinError(7,0.02405329);
   MCsumRatio->SetBinError(8,0.03935117);
   MCsumRatio->SetBinError(9,0.04347485);
   MCsumRatio->SetBinError(10,0.03884419);
   MCsumRatio->SetBinError(11,0.05811783);
   MCsumRatio->SetBinError(12,0.04272708);
   MCsumRatio->SetBinError(13,0.05027232);
   MCsumRatio->SetBinError(14,0.05852784);
   MCsumRatio->SetBinError(15,0.07000714);
   MCsumRatio->SetBinError(16,0.04630136);
   MCsumRatio->SetBinError(17,0.04335838);
   MCsumRatio->SetBinError(18,0.05540955);
   MCsumRatio->SetBinError(19,0.05608881);
   MCsumRatio->SetBinError(20,0.04766638);
   MCsumRatio->SetBinError(21,0.05177621);
   MCsumRatio->SetBinError(22,0.05551848);
   MCsumRatio->SetBinError(23,0.05286258);
   MCsumRatio->SetBinError(24,0.04166689);
   MCsumRatio->SetBinError(25,0.04938283);
   MCsumRatio->SetBinError(26,0.03314856);
   MCsumRatio->SetBinError(27,0.04365963);
   MCsumRatio->SetBinError(28,0.0279672);
   MCsumRatio->SetBinError(29,0.03565673);
   MCsumRatio->SetBinError(30,0.02085961);
   MCsumRatio->SetBinError(31,0.01428631);
   MCsumRatio->SetBinError(32,0.00703542);
   MCsumRatio->SetBinError(33,0.00451872);
   MCsumRatio->SetEntries(13441.95);
   MCsumRatio->SetStats(0);
   MCsumRatio->SetFillColor(1);
   MCsumRatio->SetFillStyle(0);
   MCsumRatio->SetMarkerStyle(20);
   MCsumRatio->GetXaxis()->SetNdivisions(505);
   MCsumRatio->GetXaxis()->SetLabelFont(42);
   MCsumRatio->GetXaxis()->SetLabelSize(0.15);
   MCsumRatio->GetXaxis()->SetTitleSize(0.15);
   MCsumRatio->GetXaxis()->SetTickLength(0.09);
   MCsumRatio->GetXaxis()->SetTitleOffset(1.1);
   MCsumRatio->GetXaxis()->SetTitleFont(42);
   MCsumRatio->GetYaxis()->SetTitle("Data / MC");
   MCsumRatio->GetYaxis()->SetNdivisions(505);
   MCsumRatio->GetYaxis()->SetLabelFont(42);
   MCsumRatio->GetYaxis()->SetLabelSize(0.15);
   MCsumRatio->GetYaxis()->SetTitleSize(0.15);
   MCsumRatio->GetYaxis()->SetTickLength(0.04);
   MCsumRatio->GetYaxis()->SetTitleOffset(0.51);
   MCsumRatio->GetYaxis()->SetTitleFont(42);
   MCsumRatio->GetZaxis()->SetNdivisions(707);
   MCsumRatio->GetZaxis()->SetLabelFont(42);
   MCsumRatio->GetZaxis()->SetLabelOffset(0.015);
   MCsumRatio->GetZaxis()->SetLabelSize(0.15);
   MCsumRatio->GetZaxis()->SetTitleSize(0.15);
   MCsumRatio->GetZaxis()->SetTitleOffset(1.1);
   MCsumRatio->GetZaxis()->SetTitleFont(42);
   MCsumRatio->Draw("EXsame");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
