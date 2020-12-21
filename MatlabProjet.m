%Connection PC Cible
%Déclaration des variables
Te=0.001
%Génération du SBPA
PHorloge=20*Te;
setxpcenv('CCompiler','VisualC','CompilerPath',...
    'C:\Program Files (x86)\Microsoft Visual Studio 10.0',...
    'HostTargetComm','TcpIp','TcpIpTargetAddress','10.1.5.251'...
    ,'TcpIpTargetPort','22222'...
    ,'TcpIpSubNetMask','255.255.255.0'...
   ,'TcpIpGateway', '10.1.0.254'...
    ,'TcpIpTargetDriver',...
    'Auto','TcpIpTargetBusType','PCI');

ObjetXPC=xpc
getxpcenv
%% Rebuild simulink model
rtwbuild('SimulinkProjet')

%% Run
+tg
%% Stop and plot 
-tg
y=tg.OutputLog;
t=tg.TimeLog;
figure
plot(t,y(:,1),'-x')%Angle
hold on
plot(t,y(:,2),'r')%Position
%hold on 
%plot(t,y(:,3),'g')

%% Teta et X
K=1.3716;
H=tf(K,[1,0,0])
figure
step(H)
figure
step(feedback(H,1))
sisotool(H)

%% Retour d'état
Hss=ss(H)

