RESISTOR::RESISTOR(double x):resistor(x){
    cout<<"创建电阻("<<x<<"欧)\n";
}
RESISTOR::~RESISTOR(){
    cout<<"销毁电阻("<<resistor<<"欧)\n";
}
void RESISTOR::Show() const{
    cout<<"电阻: "<<resistor<<"欧\n";
}
INDUCTOR::INDUCTOR(double x):inductor(x){
    cout<<"创建电感("<<x<<"亨)\n";
}
INDUCTOR::~INDUCTOR(){
    cout<<"销毁电感("<<inductor<<"亨)\n";
}
void INDUCTOR::Show() const{
    cout<<"电感: "<<inductor<<"亨\n";
}
CAPACITOR::CAPACITOR(double x):capacitor(x){
    cout<<"创建电容("<<x<<"法)\n";
}
CAPACITOR::~CAPACITOR(){
    cout<<"销毁电容("<<capacitor<<"法)\n";
}
void CAPACITOR::Show() const{
    cout<<"电容: "<<capacitor<<"法\n";
}
CIRCUIT::CIRCUIT(double x, double y, double z):resistor(x),inductor(y),capacitor(z){
    cout<<"创建电路\n";
}
CIRCUIT::~CIRCUIT(){
    cout<<"销毁电路\n";
}
void CIRCUIT::Show() const{
    resistor.Show();
    inductor.Show();
    capacitor.Show();
}