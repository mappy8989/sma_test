﻿// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SAVING_EBOOKSAVEOPTIONS_H
#define ASPOSE_CELLS_SAVING_EBOOKSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/HtmlSaveOptions.h"

#include "Aspose.Cells/SaveFormat.h"

namespace Aspose { namespace Cells { namespace Saving {

using namespace Aspose::Cells;

class EbookSaveOptions_Impl;

/// <summary>
/// Represents the options for saving ebook file.
/// </summary>
class EbookSaveOptions : public HtmlSaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    EbookSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates options for saving ebook file.
    /// </summary>
    ASPOSE_CELLS_API EbookSaveOptions();
    /// <summary>
    /// Creates options for saving ebook file.
    /// </summary>
    /// <param name="saveFormat">The file format.
    /// It should be <see cref="SaveFormat.Epub"/> or <see cref="SaveFormat.Azw3"/>.
    /// </param>
    ASPOSE_CELLS_API explicit EbookSaveOptions(SaveFormat saveFormat);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API EbookSaveOptions(EbookSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API EbookSaveOptions(const EbookSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API EbookSaveOptions(const HtmlSaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~EbookSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API EbookSaveOptions& operator=(const EbookSaveOptions& src);
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
    
};

} } }

#endif
