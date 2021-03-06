/* Copyright (c) 2019 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "brave/components/brave_rewards/common/pref_names.h"

namespace brave_rewards {
namespace prefs {

const char kHideBraveRewardsButton[] = "brave.hide_brave_rewards_button";
const char kBraveRewardsEnabled[] = "brave.rewards.enabled";
const char kBraveRewardsEnabledMigrated[] = "brave.rewards.enabled_migrated";
const char kRewardsNotifications[] = "brave.rewards.notifications";
const char kRewardsNotificationTimerInterval[]=
    "brave.rewards.notification_timer_interval";
const char kRewardsBackupNotificationFrequency[] =
    "brave.rewards.backup_notification_frequency";
const char kRewardsBackupNotificationInterval[] =
    "brave.rewards.backup_notification_interval";
const char kRewardsBackupSucceeded[] = "brave.rewards.backup_succeeded";
const char kRewardsUserHasFunded[] = "brave.rewards.user_has_funded";
const char kRewardsAddFundsNotification[] =
    "brave.rewards.add_funds_notification";
const char kRewardsNotificationStartupDelay[] =
    "brave.rewards.notification_startup_delay";
const char kRewardsExternalWallets[] = "brave.rewards.external_wallets";
const char kStateServerPublisherListStamp[] =
    "brave.rewards.server_publisher_list_stamp";
const char kStateUpholdAnonAddress[] =
    "brave.rewards.uphold_anon_address";
const char kRewardsBadgeText[] = "brave.rewards.badge_text";
const char kUseRewardsStagingServer[] = "brave.rewards.use_staging_server";
const char kStatePromotionLastFetchStamp[] =
    "brave.rewards.promotion_last_fetch_stamp";
const char kStatePromotionCorruptedMigrated[] =
    "brave.rewards.promotion_corrupted_migrated2";
const char kStateAnonTransferChecked[] =  "brave.rewards.anon_transfer_checked";
const char kStateVersion[] =  "brave.rewards.version";
const char kStateMinVisitTime[] =  "brave.rewards.ac.min_visit_time";
const char kStateMinVisits[] =  "brave.rewards.ac.min_visits";
const char kStateAllowNonVerified[] =  "brave.rewards.ac.allow_non_verified";
const char kStateAllowVideoContribution[] =
    "brave.rewards.ac.allow_video_contributions";
const char kStateScoreA[] = "brave.rewards.ac.score.a";
const char kStateScoreB[] = "brave.rewards.ac.score.b";
}  // namespace prefs
}  // namespace brave_rewards
