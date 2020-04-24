#include <iostream>
#include <QtCore/QJsonObject>
#include <QDebug>
#include "mnist/mnist_reader.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    auto dataset = mnist::read_dataset<std::vector, std::vector, uint8_t, uint8_t>("/home/caio/SNN-Data-Converter/data/mnist");
    qDebug() << dataset.training_images[0];
    return 0;
}

void HelpMessage()
{
    std::cout << "Usage: snn-data-converter [options]"
              << "-h or --help ";
}

