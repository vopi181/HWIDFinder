#include <windows.h>
#include <string>



namespace HWID {
  std::string findHWID() {
    HW_PROFILE_INFO hwProfileInfo;
    if (GetCurrentHwProfile(&hwProfileInfo))
      return hwProfileInfo.szHwProfileGuid;
  }


}
