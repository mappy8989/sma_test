// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SIGNATURELINE_H
#define ASPOSE_CELLS_DRAWING_SIGNATURELINE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/UUID.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/SignatureType.h"

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class SignatureLine_Impl;

/// <summary>
/// Represent the signature line.
/// </summary>
class SignatureLine {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SignatureLine_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API SignatureLine();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SignatureLine(SignatureLine_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SignatureLine(const SignatureLine& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SignatureLine();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SignatureLine& operator=(const SignatureLine& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// Gets or sets identifier for this signature line.
    /// </summary>
    ASPOSE_CELLS_API void GetId(UUID& uuid);
    /// <summary>
    /// Gets or sets identifier for this signature line.
    /// </summary>
    ASPOSE_CELLS_API void SetId(const UUID& value);
    /// <summary>
    /// Gets or sets the id of signature provider.
    /// </summary>
    /// <remarks>
    /// It's typically the CLSID of the provider com add-in.
    /// </remarks>
    ASPOSE_CELLS_API void GetProviderId(UUID& uuid);
    /// <summary>
    /// Gets or sets the id of signature provider.
    /// </summary>
    /// <remarks>
    /// It's typically the CLSID of the provider com add-in.
    /// </remarks>
    ASPOSE_CELLS_API void SetProviderId(const UUID& value);
    /// <summary>
    /// Gets or sets the signer.
    /// </summary>
    ASPOSE_CELLS_API U16String GetSigner();
    /// <summary>
    /// Gets or sets the signer.
    /// </summary>
    ASPOSE_CELLS_API void SetSigner(const U16String& value);
    /// <summary>
    /// Gets or sets the signer.
    /// </summary>
    ASPOSE_CELLS_API void SetSigner(const char16_t* value);
    /// <summary>
    /// Gets or sets the title of singer.
    /// </summary>
    ASPOSE_CELLS_API U16String GetTitle();
    /// <summary>
    /// Gets or sets the title of singer.
    /// </summary>
    ASPOSE_CELLS_API void SetTitle(const U16String& value);
    /// <summary>
    /// Gets or sets the title of singer.
    /// </summary>
    ASPOSE_CELLS_API void SetTitle(const char16_t* value);
    /// <summary>
    /// Gets or sets the email of singer.
    /// </summary>
    ASPOSE_CELLS_API U16String GetEmail();
    /// <summary>
    /// Gets or sets the email of singer.
    /// </summary>
    ASPOSE_CELLS_API void SetEmail(const U16String& value);
    /// <summary>
    /// Gets or sets the email of singer.
    /// </summary>
    ASPOSE_CELLS_API void SetEmail(const char16_t* value);
    /// <summary>
    /// Indicates whether it is a signature line.
    /// </summary>
    ASPOSE_CELLS_API bool IsLine();
    /// <summary>
    /// Indicates whether it is a signature line.
    /// </summary>
    ASPOSE_CELLS_API void SetIsLine(bool value);
    /// <summary>
    /// Indicates whether comments could be attached.
    /// </summary>
    ASPOSE_CELLS_API bool GetAllowComments();
    /// <summary>
    /// Indicates whether comments could be attached.
    /// </summary>
    ASPOSE_CELLS_API void SetAllowComments(bool value);
    /// <summary>
    /// Indicates whether show signed date.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowSignedDate();
    /// <summary>
    /// Indicates whether show signed date.
    /// </summary>
    ASPOSE_CELLS_API void SetShowSignedDate(bool value);
    /// <summary>
    /// Gets or sets the text shown to user at signing time.
    /// </summary>
    ASPOSE_CELLS_API U16String GetInstructions();
    /// <summary>
    /// Gets or sets the text shown to user at signing time.
    /// </summary>
    ASPOSE_CELLS_API void SetInstructions(const U16String& value);
    /// <summary>
    /// Gets or sets the text shown to user at signing time.
    /// </summary>
    ASPOSE_CELLS_API void SetInstructions(const char16_t* value);
    /// <summary>
    /// Gets or sets the signature type.
    /// Default - When the default value is set, the corresponding ProviderId value is fixed to {0000000000-0000-0000-0000-0000000000}.
    /// Stamp - When the value is Stamp, the corresponding ProviderId value is usually {000CD6A4-0000-0000-C000-000000000046}.
    /// Custom - When the value is Custom, the corresponding ProviderId value usually needs to be set by the user. it should be obtained from the documentation shipped with the provider.
    /// </summary>
    ASPOSE_CELLS_API SignatureType GetSignatureLineType();
    /// <summary>
    /// Gets or sets the signature type.
    /// Default - When the default value is set, the corresponding ProviderId value is fixed to {0000000000-0000-0000-0000-0000000000}.
    /// Stamp - When the value is Stamp, the corresponding ProviderId value is usually {000CD6A4-0000-0000-C000-000000000046}.
    /// Custom - When the value is Custom, the corresponding ProviderId value usually needs to be set by the user. it should be obtained from the documentation shipped with the provider.
    /// </summary>
    ASPOSE_CELLS_API void SetSignatureLineType(SignatureType value);
    
};

} } }

#endif
