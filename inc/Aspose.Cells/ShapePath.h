// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SHAPEPATH_H
#define ASPOSE_CELLS_DRAWING_SHAPEPATH_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class ShapeSegmentPathCollection;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

class ShapePath_Impl;

/// <summary>
/// Represents a creation path consisting of a series of moves, lines and curves that when combined will form a geometric shape.
/// </summary>
class ASPOSE_CELLS_API2 ShapePath {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ShapePath_Impl* _impl;
    
public:
    /// <summary>
    /// Initializes a new instance of the <see cref="ShapePath"/> class.
    /// </summary>
    ASPOSE_CELLS_API ShapePath();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ShapePath(ShapePath_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapePath(const ShapePath& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ShapePath();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ShapePath& operator=(const ShapePath& src);
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
    /// Gets <see cref="ShapeSegmentPathCollection"/> list
    /// </summary>
    ASPOSE_CELLS_API ShapeSegmentPathCollection GetPathSegementList();
    /// <summary>
    /// Starts a new figure from the specified point without closing the current figure. All subsequent points added to the path are added to this new figure.
    /// </summary>
    /// <param name="x">The x-coordinate of the starting point of the figure.</param>
    /// <param name="y">The y-coordinate of the starting point of the figure.</param>
    ASPOSE_CELLS_API void MoveTo(float x, float y);
    /// <summary>
    /// Appends a line segment to the current figure. The starting point is the end point of the current figure.
    /// </summary>
    /// <param name="x">The x-coordinate of the endpoint of the line segment.</param>
    /// <param name="y">The y-coordinate of the endpoint of the line segment.</param>
    ASPOSE_CELLS_API void LineTo(float x, float y);
    /// <summary>
    /// Appends a cubic Bézier curve to the current figure. The starting point is the end point of the current figure.
    /// </summary>
    /// <param name="ctrX1">The x-coordinate of the first control point for the curve.</param>
    /// <param name="ctrY1">The y-coordinate of the first control point for the curve.</param>
    /// <param name="ctrX2">The x-coordinate of the second control point for the curve.</param>
    /// <param name="ctrY2">The y-coordinate of the second control point for the curve.</param>
    /// <param name="endX">The x-coordinate of the endpoint of the curve.</param>
    /// <param name="endY">The y-coordinate of the endpoint of the curve.</param>
    ASPOSE_CELLS_API void CubicBezierTo(float ctrX1, float ctrY1, float ctrX2, float ctrY2, float endX, float endY);
    /// <summary>
    /// Appends an elliptical arc to the current figure. The starting point is the end point of the current figure.
    /// </summary>
    /// <param name="wR">The half-width of the rectangular area of ​​the ellipse that draws the arc.</param>
    /// <param name="hR">The half-height of the rectangular area of ​​the ellipse that draws the arc.</param>
    /// <param name="stAng">The starting angle of the arc, measured in degrees clockwise from the x-axis.</param>
    /// <param name="swAng">The angle between startAngle and the end of the arc.</param>
    ASPOSE_CELLS_API void ArcTo(float wR, float hR, float stAng, float swAng);
    /// <summary>
    /// Closes the current figure and starts a new figure. If the current figure contains a sequence of connected lines and curves, the method closes the loop by connecting a line from the endpoint to the starting point.
    /// </summary>
    ASPOSE_CELLS_API void Close();
    
};

} } }

#endif
