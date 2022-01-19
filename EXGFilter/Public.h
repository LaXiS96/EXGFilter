/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_EXGFilter,
    0xbf32f78e,0x31ea,0x4815,0xbb,0x8c,0x0b,0x3c,0x22,0x8a,0x81,0x93);
// {bf32f78e-31ea-4815-bb8c-0b3c228a8193}
