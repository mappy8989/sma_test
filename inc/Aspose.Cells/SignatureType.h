// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SIGNATURETYPE_H
#define ASPOSE_CELLS_DRAWING_SIGNATURETYPE_H

namespace Aspose { namespace Cells { namespace Drawing {

/// <summary>
/// Specifies the signature type.
/// </summary>
enum class SignatureType {
    /// <summary>
    /// The default value , the corresponding ProviderId value is fixed to {0000000000-0000-0000-0000-0000000000}.
    /// </summary>
    Default = 0,
    /// <summary>
    /// The corresponding ProviderId value is usually {000CD6A4-0000-0000-C000-000000000046}.
    /// </summary>
    Stamp = 1,
    /// <summary>
    /// The corresponding ProviderId value usually needs to be set by the user. it should be obtained from the documentation shipped with the provider.
    /// </summary>
    Custom = 3,
};

} } }

#endif
