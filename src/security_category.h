/**
 * @File     security_category.h
 * @brief    
 * @DateTime 2018/8/10 15:20:59
 * @Author   Anyz
 */
#ifndef __SECURITY_CATEGORY_H_
#define __SECURITY_CATEGORY_H_

// type
enum class SecurityCaptureDirection {
    Front = 0,
    Tail  = 1
};

enum class SecurityTollgateStatus {
    Working = 1,
    Stop    = 2,
    Other   = 9
};

enum class SecurityTollgatePurpose {
    Security = 80,
    Traffic  = 81,
    Other    = 82
};

enum class SecurityLaneCityPass {
    Enter = 1,
    Away  = 2,
    None  = 3,
    Mix   = 4
};

enum class SecurityVideoSliceAudioFlag {
    WithoutAudio = 0,
    WithAudio    = 1
};

enum class SecurityVideoSliceProcFlag {
    NoProcess = 0,
    Processed = 1
};

enum class SecurityImageProcFlag {
    NoProcess = 0,
    Processed = 1
};

enum class SecurityCommonStatus {
    No     = 0,
    Yes    = 1,
    Unknow = 2
};

enum class SecurityFaceAttitude {
    Normal          = 1,
    LittleUp        = 2,
    LittelDown      = 3,
    LeftLittleSide  = 4,
    LeftSide        = 5,
    LeftFull        = 6,
    RightLittleSide = 7,
    RightSide       = 8,
    RightFull       = 9
};

enum class SecurityFaceEyebrowStyle {
    Style1 = 1,
    Style2 = 2,
    Style3 = 3,
    Style4 = 4,
    Style5 = 5,
    Style6 = 6,
    Style7 = 7,
    Style8 = 8,
    Style9 = 9
};

enum class SecurityFaceNoseStyle {
    Style1 = 1,
    Style2 = 2,
    Style3 = 3,
    Style4 = 4,
    Style5 = 5,
    Style6 = 6,
    Style7 = 7,
    Style8 = 8,
    Style9 = 9,
    Style10 = 10
};

enum class SecurityFaceMustacheStyle {
    Style1 = 1,
    Style2 = 2,
    Style3 = 3,
    Style4 = 4,
    Style5 = 5,
    Style6 = 6,
    Style7 = 7
};

enum class SecurityLipStyle {
    Style1 = 1,
    Style2 = 2,
    Style3 = 3,
    Style4 = 4,
    Style5 = 5,
    Style6 = 6,
    Style7 = 7,
    Style8 = 8,
    Style9 = 9,
    Style10 = 10
};

enum class SecurityFaceWrinklePouch {
    Style1 = 1,
    Style2 = 2,
    Style3 = 3,
    Style4 = 4,
    Style5 = 5,
    Style6 = 6,
    Style7 = 7,
    Style8 = 8,
    Style9 = 9,
    Style10 = 10,
    Style11 = 11,
    Style12 = 12
};

enum class SecurityFaceAcneStain {
    Style1 = 1,
    Style2 = 2,
    Style3 = 3,
    Style4 = 4,
    Style5 = 5,
    Style6 = 6,
    Style7 = 7
};

enum class SecurityFaceFreckleBirthmark {
    Style1 = 1,
    Style2 = 2,
    Style3 = 3,
    Style4 = 4,
    Style5 = 5,
    Style6 = 6,
    Style7 = 7
};

enum class SecurityFaceScarDimple {
    Style1 = 1,
    Style2 = 2,
    Style3 = 3
};

enum class SecurityFaceOtherFeature {
    Style1 = 1,
    Style2 = 2,
    Style3 = 3,
    Style4 = 4,
    Style5 = 5,
    Style6 = 6,
    Style7 = 7,
    Style8 = 8,
    Style9 = 9,
    Style10 = 10,
    Style11 = 11
};

enum class SecurityVehiclePlateColor {
    Black  = 0,
    White  = 1,
    Yellow = 2,
    Blue   = 3,
    Green  = 4
};

enum class SecurityVehicleSunvisor {
    No = 0,
    Yes = 1
};

enum class SecurityVehicleSafetyBelt {
    No = 0,
    Yes = 1
};

typedef SecurityCommonStatus SecurityVehicleModified;

enum class SecurityVehicleFilmColor {
    dark  = 0,
    light = 1,
    none  = 2
};

enum class SecurityCaseStatus {
    NewCase                 = 0,
    Checkin                 = 1,
    Resolved                = 2,
    ResolvedForCheck        = 3,
    FullResolved            = 4,
    FullResolvedForCheck    = 5,
    ComposedForCheck        = 6,
    CanceledForCheck        = 7,
    FullResolvedAndArchived = 8,
    ComposedAndArchived     = 9,
    CanceledAndArchived     = 10
};

enum class SecurityVideoSliceTargetStatus {
    First = 0,
    Always = 1,
    Disappear = 2
};

enum class SecurityEventLevel {
    Notice    = 0,
    Warn      = 1,
    FatalWarn = 2,
    Other
};

enum class SecurityTargetDensity {
    VerySparse = 0,
    Sparse     = 1,
    Dense      = 2,
    VeryDense  = 3
};

enum class SecurityTriggerDirection {
    LeftToRight = 0,
    RightToLeft = 1,
    UpToDown    = 2,
    DownToUp    = 3,
    Any         = 4,
    NoOrder
};

enum class SecurityActionType {
    EnterArea       = 0,
    LeaveArea       = 1,
    AppearInArea    = 2,
    DisappearInArea = 3,
    InArea          = 4,
    Other
};

enum class SecurityTargetType {
    Person          = 1,
    Face            = 2,
    MotorVehicle    = 3,
    NonMotorVehicle = 4,
    Thing           = 5,
    Scene           = 6
};

enum class SecurityDensityUnit {
    Rank = 0,
    Percent = 1,
    Count = 2,
    Other
};

enum class SecurityTargetFeature {
    KeyValuePair        = 1,
    KeyFromPropertyType = 2,
    Fuzzy               = 3,
    Expression          = 4
};

enum class SecurityDispositionPriorityLevel {
    Level1 = 1,
    Level2 = 2,
    Level3 = 3
};

enum class SecurityDispositionOperateType {
    Disposition   = 0,
    UnDisposition = 1
};

enum class SecurityDispositionStatus {
    Doing   = 0,
    Cancel  = 1,
    Expired = 2,
    None    = 9
};

enum class SecurityDispositionRange {
    Tollgate = 1,
    Area     = 2
};

enum class SecuritySubscribeOperateType {
    Subscribe = 0,
    Cancel = 1
};

enum class SecuritySubscribeStatus {
    Doing = 0,
    Canceled = 1,
    Expired = 2,
    None = 9
};

enum class SecurityResponseStatus {
    Success = 0,
    OtherError = 1,
    DeviceBusy = 2,
    DeviceError = 3,
    InvalidOperation = 4,
    InvalidXmlFormat = 5,
    InvalidXmlContent = 6,
    InvalidJsonFormat = 7,
    InvalidJsonContent = 8,
    Reboot = 9
};



//=========================================================================================================================//

//=========================================================================================================================//






#endif
