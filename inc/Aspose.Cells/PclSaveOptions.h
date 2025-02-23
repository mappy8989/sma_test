// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PCLSAVEOPTIONS_H
#define ASPOSE_CELLS_PCLSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/PaginatedSaveOptions.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {

class PclSaveOptions_Impl;

/// <summary>
/// Represents the options for saving Pcl file.
/// </summary>
class PclSaveOptions : public PaginatedSaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PclSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates the options for saving pdf file.
    /// </summary>
    ASPOSE_CELLS_API PclSaveOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PclSaveOptions(PclSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PclSaveOptions(const PclSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API PclSaveOptions(const PaginatedSaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PclSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PclSaveOptions& operator=(const PclSaveOptions& src);
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
    /// Adds information about font that is already added to the printer by manufacturer.
    /// </summary>
    /// <param name="fontFullName">Full name of the font (e.g. "Times New Roman Bold Italic") used in the source file.</param>
    /// <param name="fontPclName">Name of the font that will be used in the output Pcl document.</param>
    /// <remarks>
    /// There are 52 fonts that are to be built in any printer according to Pcl specification.
    /// However manufactures can add some other fonts to their devices.
    /// </remarks>
    ASPOSE_CELLS_API void AddPrinterFont(const U16String& fontFullName, const U16String& fontPclName);
    /// <summary>
    /// Adds information about font that is already added to the printer by manufacturer.
    /// </summary>
    /// <param name="fontFullName">Full name of the font (e.g. "Times New Roman Bold Italic") used in the source file.</param>
    /// <param name="fontPclName">Name of the font that will be used in the output Pcl document.</param>
    /// <remarks>
    /// There are 52 fonts that are to be built in any printer according to Pcl specification.
    /// However manufactures can add some other fonts to their devices.
    /// </remarks>
    ASPOSE_CELLS_API void AddPrinterFont(const char16_t* fontFullName, const char16_t* fontPclName);
    
};

} }

#endif
