/*!
 * Canvas class implementation.
 * @file canvas.cpp
 */

#include "canvas.h"

namespace life {

  // TODO: Adicione o resto da implementação dos métodos aqui.

  Canvas::Canvas(size_t w, size_t h, short bs){ 
    m_block_size = bs;
    m_width = w * bs;
    m_height = h * bs;
    m_pixels[h * w * 4];
  }
    /// Destructor.
  Canvas::~Canvas(void){}
    /// Copy constructor.
  Canvas::Canvas(const Canvas&){}
  /// Assignment operator.
  Canvas& Canvas::operator=(const Canvas&) = default;

  //=== Members
  /// Clear the canvas with black color.
  void Canvas::clear(const Color& color){
    for (int i = 0; i < m_pixels.size(); i+=4){
      m_pixels[i] = color.channels[Color::R];
      m_pixels[i + 1] = color.channels[Color::G];
      m_pixels[i + 2] = color.channels[Color::B];
      m_pixels[i + 3] = 255;
    }
  }
  /// Set the color of a pixel on the canvas.
  void Canvas::pixel(coord_t height, coord_t width, const Color& color){
    m_pixels[(width * m_width) + (height * 4)] = color.channels[Color::R];
    m_pixels[(width * m_width) + (height * 4) + 1] = color.channels[Color::G];
    m_pixels[(width * m_width) + (height * 4) + 2] = color.channels[Color::B];
    m_pixels[(width * m_width) + (height * 4) + 3] = 255;
  }
  /// Get the pixel color from the canvas.
  Color Canvas::pixel(coord_t, coord_t) const{return BLACK;}

}  // namespace life

//================================[ canvas.cpp ]================================//
