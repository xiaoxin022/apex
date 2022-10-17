#pragma once

struct PidConfig {
	// Proportional coefficient.  比例系数
	float kp;
	// Integral coefficient.  积分系数
	float ki;
	// Derivative coefficient. 导数系数
	float kd;
};

struct PidController {
	float p, i;

	float step(float err, float dt, const PidConfig& config);
	void reset();
};

inline float PidController::step(float err, float dt, const PidConfig& config) {
	const float d = (err - p) / dt;
	p = err;
	i += err * dt;
	return config.kp * p + config.ki * i + config.kd * d;
}
inline void PidController::reset() {
	p = 0.0f;
	i = 0.0f;
}
