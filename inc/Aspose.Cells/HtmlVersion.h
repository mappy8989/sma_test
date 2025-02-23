// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_HTMLVERSION_H
#define ASPOSE_CELLS_HTMLVERSION_H

namespace Aspose { namespace Cells {

/// <summary>
/// Indicates the version of HTML is used when saving to Html formats.
/// </summary>
enum class HtmlVersion {
    /// <summary>
    /// Save the document in compliance with the MS Excel exporting HTML.
    /// </summary>
    Default = 0,
    /// <summary>
    /// Saves the document in compliance with the XHTML 1.0 Transitional standard.
    /// </summary>
    XHtml = 1,
    /// <summary>
    /// Saves the document in compliance with the HTML 5 standard.
    /// </summary>
    Html5 = 2,
};

} }

#endif
