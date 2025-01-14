package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderInfo._

case class OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties],
bundleLocation: Option[String],
serviceLocation: Option[String])

object OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderInfo {
  import DateTimeCodecs._

  implicit val OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderInfoCodecJson: CodecJson[OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderInfo] = CodecJson.derive[OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderInfo]
  implicit val OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderInfoDecoder: EntityDecoder[OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderInfo] = jsonOf[OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderInfo]
  implicit val OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderInfoEncoder: EntityEncoder[OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderInfo] = jsonEncoderOf[OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderInfo]
}
