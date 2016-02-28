//
// Created by mariocaster on 2/28/16.
//

#include "Image.h"

Image::Image() {
    if (!Image::s_next) {
        s_next = 1;
    }
    m_id = s_next++;
    m_the_real_thing = 0;
}

Image::~Image() {
    delete m_the_real_thing;
}

void Image::draw() {
    if (!m_the_real_thing) {
        m_the_real_thing = new RealImage(m_id);
        m_the_real_thing->draw();
    }
}

int Image::s_next = 1;

