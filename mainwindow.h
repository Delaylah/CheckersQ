#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

#include "ui_mainwindow.h"
#include "settingsdialog.h"
#include "checkersgame.h"
#include "checkersstate.h"

class MainWindow;

class MainWindow : public QMainWindow, public Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
	void startNewGame();
	void endGame();
	void settings();
	void gameEnded(uint8 status);

private:
	CheckersGame * game;
	SettingsDialog * dialog;
};

#endif // MAINWINDOW_H
