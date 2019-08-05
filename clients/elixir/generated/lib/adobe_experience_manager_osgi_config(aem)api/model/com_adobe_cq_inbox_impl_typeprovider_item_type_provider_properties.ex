# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"inbox.impl.typeprovider.registrypaths",
    :"inbox.impl.typeprovider.legacypaths",
    :"inbox.impl.typeprovider.defaulturl.failureitem",
    :"inbox.impl.typeprovider.defaulturl.workitem",
    :"inbox.impl.typeprovider.defaulturl.task"
  ]

  @type t :: %__MODULE__{
    :"inbox.impl.typeprovider.registrypaths" => ConfigNodePropertyArray,
    :"inbox.impl.typeprovider.legacypaths" => ConfigNodePropertyArray,
    :"inbox.impl.typeprovider.defaulturl.failureitem" => ConfigNodePropertyString,
    :"inbox.impl.typeprovider.defaulturl.workitem" => ConfigNodePropertyString,
    :"inbox.impl.typeprovider.defaulturl.task" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"inbox.impl.typeprovider.registrypaths", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"inbox.impl.typeprovider.legacypaths", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"inbox.impl.typeprovider.defaulturl.failureitem", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"inbox.impl.typeprovider.defaulturl.workitem", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"inbox.impl.typeprovider.defaulturl.task", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end
