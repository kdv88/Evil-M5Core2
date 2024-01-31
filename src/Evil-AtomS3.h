#include <WiFi.h>
#include <WebServer.h>
#include <DNSServer.h>
#include <SD.h>
#include <M5Unified.h>
#include <vector>
#include <string>
#include <set>
#include <TinyGPSPlus.h>
#include <Adafruit_NeoPixel.h> //led

void setColorRange(int startPixel, int endPixel, uint32_t color);
void setup();
void drawImage(const char *filepath);
void firstScanWifiNetworks();
void loop();
void handleMenuInput();
void drawMenu();
void handleDnsRequestSerial();
void listProbesSerial();
void checkSerialCommands();
String getMonitoringStatus();
void checkCredentialsSerial();
void changePortal(int index);
void selectNetwork(int index);
void scanWifiNetworks();
void showWifiList();
void showWifiDetails(int networkIndex);

String getWifiSecurity(int networkIndex);
String bssidToString(uint8_t* bssid);

void cloneSSIDForCaptivePortal(String ssid);
void createCaptivePortal();
void handleSdCardBrowse();
void handleFileDownload();
void handleFileUpload();
void handleListDirectories();
void listDirectories(File dir, String path, String &output);
void handleFileDelete();
void servePortalFile(const String& filename);
void saveCredentials(const String& email, const String& password);
void stopCaptivePortal();
void listPortalFiles();
void serveChangePasswordPage();
void handleChangePassword();
void changePortal();
void readCredentialsFromFile();
void checkCredentials();
void deleteCredentials();
int countPasswordsInFile();
void displayMonitorPage1();
void updateConnectedMACs();
void displayMonitorPage2();
String getBatteryLevel();
String getTemperature();
String getStack();
String getRamUsage();
void displayMonitorPage3();
void probeSniffing();
void karmaAttack();
void waitAndReturnToMenu(String message);
void brightness();
void saveConfigParameter(String key, int value);
void restoreConfigParameter(String key);
void packetSnifferKarma(void* buf, wifi_promiscuous_pkt_type_t type);
void saveSSIDToFile(const char* ssid);
void updateDisplayWithSSIDKarma(const char* ssidKarma, int count);
void drawStartButtonKarma();
void drawStopButtonKarma();
void startScanKarma();
void stopScanKarma();
void handleMenuInputKarma();
void drawMenuKarma();
void executeMenuItemKarma(int indexKarma);
void startAPWithSSIDKarma(const char* ssid);
void listProbes();
void deleteProbe();

int showProbesAndSelect(String probes[], int numProbes);
bool removeProbeFromFile(const char* filepath, const String& probeToRemove) ;

void deleteAllProbes();
void saveOriginalMAC();
void restoreOriginalMAC();
String generateRandomMAC();
void setRandomMAC_STA();
void probeAttack();
void setNextWiFiChannel();
void restoreOriginalWiFiSettings();
void startAutoKarma();
void autoKarmaPacketSniffer(void* buf, wifi_promiscuous_pkt_type_t type);
bool readConfigFile(const char* filename);
bool isSSIDWhitelisted(const char* ssid);
void saveOriginalMACKarma();
void restoreOriginalMACKarma();
String generateRandomMACKarma();
void setRandomMAC_APKarma();
String getMACAddress();
void loopAutoKarma();
void activateAPForAutoKarma(const char* ssid);
void displayWaitingForProbe();
void displayAPStatus(const char* ssid, unsigned long startTime, int autoKarmaAPDuration);
String createPreHeader();
String createHeader();
void wardrivingMode();
String getCapabilities(wifi_auth_mode_t encryptionType);
String formatTimeFromGPS();
