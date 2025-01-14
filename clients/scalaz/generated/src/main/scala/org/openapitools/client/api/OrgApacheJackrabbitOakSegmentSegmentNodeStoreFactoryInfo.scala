package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryInfo._

case class OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties])

object OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryInfo {
  import DateTimeCodecs._

  implicit val OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryInfoCodecJson: CodecJson[OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryInfo] = CodecJson.derive[OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryInfo]
  implicit val OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryInfoDecoder: EntityDecoder[OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryInfo] = jsonOf[OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryInfo]
  implicit val OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryInfoEncoder: EntityEncoder[OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryInfo] = jsonEncoderOf[OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryInfo]
}
