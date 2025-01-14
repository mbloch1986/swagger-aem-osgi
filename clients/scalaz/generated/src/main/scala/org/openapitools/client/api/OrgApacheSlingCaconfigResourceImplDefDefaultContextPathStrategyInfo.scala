package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyInfo._

case class OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyProperties],
bundleLocation: Option[String],
serviceLocation: Option[String])

object OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyInfo {
  import DateTimeCodecs._

  implicit val OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyInfoCodecJson: CodecJson[OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyInfo] = CodecJson.derive[OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyInfo]
  implicit val OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyInfoDecoder: EntityDecoder[OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyInfo] = jsonOf[OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyInfo]
  implicit val OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyInfoEncoder: EntityEncoder[OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyInfo] = jsonEncoderOf[OrgApacheSlingCaconfigResourceImplDefDefaultContextPathStrategyInfo]
}
