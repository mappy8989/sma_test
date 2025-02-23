// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SAVING_DBFSAVEOPTIONS_H
#define ASPOSE_CELLS_SAVING_DBFSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"

namespace Aspose { namespace Cells { namespace Saving {

using namespace Aspose::Cells;

class DbfSaveOptions_Impl;

/// <summary>
/// Represents the options of saving dbf file
/// </summary>
class DbfSaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DbfSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// The options of saving .dbf file.
    /// </summary>
    ASPOSE_CELLS_API DbfSaveOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DbfSaveOptions(DbfSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DbfSaveOptions(const DbfSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API DbfSaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DbfSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DbfSaveOptions& operator=(const DbfSaveOptions& src);
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
    /// Indicates whether exporting as string value
    /// </summary>
    ASPOSE_CELLS_API bool GetExportAsString();
    /// <summary>
    /// Indicates whether exporting as string value
    /// </summary>
    ASPOSE_CELLS_API void SetExportAsString(bool value);
    
};

} } }

#endif
